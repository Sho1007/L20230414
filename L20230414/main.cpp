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
		cout << "행동을 선택해주세요.\n";
		cout << "1. 월드 아이템 보기 2. 월드 아이템 줍기 3. 캐릭터 인벤토리 보기 4. 캐릭터 아이템 사용\n";
		int ActNum;
		cin >> ActNum;
		system("cls");
		switch (ActNum)
		{
		case 1:
			cout << "현재 월드에는 아래의 아이템들이 있습니다.\n";
			for (int i = 0; i < World.size(); ++i)
			{
				cout << i + 1 << " : " << World[i]->GetName() << '\n';
			}
			break;
		case 2 :
			cout << "주울 아이템의 번호를 입력하세요.\n";
			int PickItemNum;
			cin >> PickItemNum;
			if (PickItemNum <= 0 || PickItemNum > World.size())
			{
				cout << "잘못된 번호입니다.\n";
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