#pragma once
#include "Item.h"
class UBread : public UItem
{
public:
	UBread();
	virtual ~UBread();
	// Inherited via UItem
	virtual void Use() override;
};

