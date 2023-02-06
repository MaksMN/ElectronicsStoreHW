#include "IElectronics.h"

void IElectronics::getBrandName()
{
	std::cout << "Марка: " << BrandName << std::endl;
}

void IElectronics::setBrandName(std::string brand)
{
	BrandName = brand;
}

void IElectronics::getPower()
{
	std::cout << "Мощность: " << Power << "W" << std::endl;
}

void IElectronics::setPower(unsigned power)
{
	Power = power;
}