#include "Sword.h"
#include <iostream>

USword::USword()
	: UItem("��")
{
}

USword::~USword()
{
}

void USword::Use()
{
	std::cout << "���� �ֵѷ����ϴ�.\n";
}
