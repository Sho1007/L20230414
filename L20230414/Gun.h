#pragma once
#include "Item.h"
class UGun : public UItem
{
public:
	UGun();
	virtual ~UGun();
	// Inherited via UItem
	virtual void Use() override;
};

