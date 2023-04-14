#include "Inventory.h"
#include "Item.h"
#include <iostream>

UInventory::UInventory()
{
}

UInventory::~UInventory()
{
	for (int i = 0; i < ItemArray.size(); ++i)
	{
		delete ItemArray[i];
	}
}

void UInventory::AddItem(UItem* NewItem)
{
	std::cout << "인벤토리에 " << NewItem->GetName() << " 아이템을 넣었습니다.\n";
	ItemArray.push_back(NewItem);
}

void UInventory::ShowItem()
{
	for (int i = 0; i < ItemArray.size(); ++i)
	{
		std::cout << i + 1 << " : " << ItemArray[i]->GetName() << '\n';
	}
}

void UInventory::UseItem(__int32 ItemIndex)
{
	if (ItemIndex <= 0 || ItemIndex > ItemArray.size())
	{
		std::cout << "잘못된 번호입니다.\n";
		return;
	}

	ItemArray[ItemIndex - 1]->Use();
}
