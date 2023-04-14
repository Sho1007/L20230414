#include <iostream>
#include <vector>
#include "Character.h"
#include "Item.h"
#include "Sword.h"
#include "Gun.h"
#include "Club.h"
#include "Drink.h"
#include "Bread.h"
using namespace std;

int main()
{
	ACharacter* Character =new ACharacter();
	std::vector<UItem*> World;

	World.push_back(new USword());
	World.push_back(new UGun());
	World.push_back(new UClub());
	World.push_back(new UDrink());
	World.push_back(new UBread());

	while (true)
	{
		cout << "�ൿ�� �������ּ���.\n";
		cout << "1. ���� ������ ���� 2. ���� ������ �ݱ� 3. ĳ���� �κ��丮 ���� 4. ĳ���� ������ ���\n";
		int ActNum;
		cin >> ActNum;
		system("cls");
		switch (ActNum)
		{
		case 1:
			cout << "���� ���忡�� �Ʒ��� �����۵��� �ֽ��ϴ�.\n";
			for (int i = 0; i < World.size(); ++i)
			{
				cout << i + 1 << " : " << World[i]->GetName() << '\n';
			}
			break;
		case 2 :
			cout << "�ֿ� �������� ��ȣ�� �Է��ϼ���.\n";
			int PickItemNum;
			cin >> PickItemNum;
			if (PickItemNum <= 0 || PickItemNum > World.size())
			{
				cout << "�߸��� ��ȣ�Դϴ�.\n";
			}
			else
			{
				Character->PickItem(World[PickItemNum-1]);
			}
			break;
		case 3:
			Character->ShowInventory();
			break;
		case 4:
			Character->UseItem();
			break;
		}
	}

	delete Character;

	for (UItem* DeleteItem : World)
	{
		delete DeleteItem;
	}

	return 0;
}