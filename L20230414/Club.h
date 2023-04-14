#pragma once
#include "Item.h"
class UClub : public UItem
{
public:
	UClub();
	virtual ~UClub();

	// Inherited via UItem
	virtual void Use() override;
};

