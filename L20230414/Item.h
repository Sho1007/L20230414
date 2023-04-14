#pragma once
#include <string>
class UItem
{
public:
	UItem();
	UItem(std::string NewName);
	virtual ~UItem();

	virtual void Use() = 0;
	std::string GetName() { return Name; }
protected:
	std::string Name;
};

