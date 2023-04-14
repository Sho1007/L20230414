#include "Bread.h"
#include <iostream>

UBread::UBread()
	: UItem("»§")
{
}

UBread::~UBread()
{
}

void UBread::Use()
{
	std::cout << "»§À» ¸Ô¾ú½À´Ï´Ù.\n";
}
