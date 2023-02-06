#pragma once
#include <string>
#include <iostream>
class IElectronics
{
private:
	// Мощность устройств
	unsigned Power = 0;
	// Название бренда
	std::string BrandName = "no name";
public:
	virtual ~IElectronics() = default;
	virtual void Show() = 0;
protected:
	void getBrandName();
	void setBrandName(std::string brand);
	void getPower();
	void setPower(unsigned power);
};