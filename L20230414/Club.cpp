#include "Club.h"
#include <iostream>

UClub::UClub()
	: UItem("������")
{
}

UClub::~UClub()
{
}

void UClub::Use()
{
	std::cout << "�����̸� �ֵѷ����ϴ�.\n";
}
