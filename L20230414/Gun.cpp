#include "Gun.h"
#include <iostream>

UGun::UGun()
	: UItem("��")
{
}

UGun::~UGun()
{
}

void UGun::Use()
{
	std::cout << "���� �����ϴ�.\n";
}
