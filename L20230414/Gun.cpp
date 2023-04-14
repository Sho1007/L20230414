#include "Gun.h"
#include <iostream>

UGun::UGun()
	: UItem("ÃÑ")
{
}

UGun::~UGun()
{
}

void UGun::Use()
{
	std::cout << "ÃÑÀ» ½ú½À´Ï´Ù.\n";
}
