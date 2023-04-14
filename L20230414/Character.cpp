#include "Character.h"
#include "Inventory.h"
#include "Item.h"
#include <iostream>
ACharacter::ACharacter()
{
	Inventory = new UInventory();
}

ACharacter::~ACharacter()
{
	delete Inventory;
}

void ACharacter::PickItem(UItem* NewItem)
{
	std::cout << "�÷��̾ " << NewItem->GetName() << "�������� �ֿ����ϴ�.\n";
	Inventory->AddItem(NewItem);
}

void ACharacter::UseItem()
{
	__int32 ItemIndex;
	std::cout << "����� �������� ��ȣ�� �Է����ּ���.\n";
	std::cin >> ItemIndex;

	Inventory->UseItem(ItemIndex);
}

void ACharacter::ShowInventory()
{
	system("cls");
	std::cout << "�÷��̾ �κ��丮�� ���ϴ�.\n";
	Inventory->ShowItem();
}
