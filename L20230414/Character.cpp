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
	std::cout << "플레이어가 " << NewItem->GetName() << "아이템을 주웠습니다.\n";
	Inventory->AddItem(NewItem);
}

void ACharacter::UseItem()
{
	__int32 ItemIndex;
	std::cout << "사용할 아이템의 번호를 입력해주세요.\n";
	std::cin >> ItemIndex;

	Inventory->UseItem(ItemIndex);
}

void ACharacter::ShowInventory()
{
	system("cls");
	std::cout << "플레이어가 인벤토리를 엽니다.\n";
	Inventory->ShowItem();
}
