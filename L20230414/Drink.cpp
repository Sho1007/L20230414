#include "Drink.h"
#include <iostream>

UDrink::UDrink()
	: UItem("�����")
{
}

UDrink::~UDrink()
{
}

void UDrink::Use()
{
	std::cout << "������� ���̽��ϴ�.\n";
}
