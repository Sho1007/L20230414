#pragma once
#include <vector>
class UItem;
class UInventory
{
public:
	UInventory();
	virtual ~UInventory();

	void AddItem(UItem* NewItem);
	void ShowItem();
	void UseItem(__int32 ItemIndex);
private:
	std::vector<UItem*> ItemArray;
};

