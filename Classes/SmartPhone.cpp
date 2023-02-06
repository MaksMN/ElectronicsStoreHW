#include "SmartPhone.h"

SmartPhone::SmartPhone(unsigned displaySize, std::string soundScheme, unsigned power, std::string standard, std::string brand) :Video(displaySize), Audio(soundScheme)
{
	Standard = standard;
	setPower(power);
	setBrandName(brand);
}

void SmartPhone::Show()
{
	std::cout << "Смартфон" << std::endl;
	getBrandName();
	getDisplaySize();
	getSoundScheme();
	std::cout << "Стандарт сети: " << Standard << std::endl;
	getPower();
}