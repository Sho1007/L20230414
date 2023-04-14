#pragma once
#include "Item.h"
class USword : public UItem
{
public:
	USword();
	virtual ~USword();

	// Inherited via UItem
	virtual void Use() override;
};

