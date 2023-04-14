#include "Drink.h"
#include <iostream>

UDrink::UDrink()
	: UItem("음료수")
{
}

UDrink::~UDrink()
{
}

void UDrink::Use()
{
	std::cout << "음료수를 마셨습니다.\n";
}
