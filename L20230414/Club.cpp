#include "Club.h"
#include <iostream>

UClub::UClub()
	: UItem("¸ùµÕÀÌ")
{
}

UClub::~UClub()
{
}

void UClub::Use()
{
	std::cout << "¸ùµÕÀÌ¸¦ ÈÖµÑ·¶½À´Ï´Ù.\n";
}
