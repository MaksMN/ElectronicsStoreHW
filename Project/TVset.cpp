#include "TVset.h"

TVset::TVset(unsigned displaySize, std::string soundScheme, unsigned power, std::string tvStandards, bool analogtv, std::string brand) :
	Audio(soundScheme), Video(displaySize)
{
	setBrandName(brand);
	setPower(power);
	TVstandards = tvStandards;
	AnalogTV = analogtv;
}

void TVset::getAnalogTV()
{
	std::cout << "Поддержка аналогового ТВ: ";
	if (AnalogTV) {
		std::cout << "Есть" << std::endl;
	}
	else {
		std::cout << "Нет" << std::endl;
	}
}

void TVset::Show()
{
	std::cout << "Телевизор" << std::endl;
	getBrandName();
	getDisplaySize();
	std::cout << "ТВ тюнер: " << TVstandards << std::endl;
	getAnalogTV();
	getSoundScheme();
	getPower();
}