#include "Bread.h"
#include <iostream>

UBread::UBread()
	: UItem("��")
{
}

UBread::~UBread()
{
}

void UBread::Use()
{
	std::cout << "���� �Ծ����ϴ�.\n";
}
