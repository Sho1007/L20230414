#pragma once
#include "Item.h"
class UDrink : public UItem
{
public:
	UDrink();
	virtual ~UDrink();
	// Inherited via UItem
	virtual void Use() override;
};

