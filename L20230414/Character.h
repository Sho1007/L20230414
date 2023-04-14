#pragma once
class UInventory;
class UItem;
class ACharacter
{
public:
	ACharacter();
	virtual ~ACharacter();

	void PickItem(UItem* NewItem);
	void UseItem();
	void ShowInventory();

protected:
	UInventory* Inventory;
};

