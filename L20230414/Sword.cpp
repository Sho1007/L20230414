#include "Sword.h"
#include <iostream>

USword::USword()
	: UItem("°Ë")
{
}

USword::~USword()
{
}

void USword::Use()
{
	std::cout << "°ËÀ» ÈÖµÑ·¶½À´Ï´Ù.\n";
}
