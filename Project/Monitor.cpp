#include "Monitor.h"

Monitor::Monitor(unsigned displaySize, unsigned power, std::string videoJack, std::string brand) : Video(displaySize)
{
	VideoJack = videoJack;
	setPower(power);
	setBrandName(brand);
}

void Monitor::Show()
{
	std::cout << "Монитор" << std::endl;
	getBrandName();
	getDisplaySize();
	std::cout << "Видеовход: " << VideoJack << std::endl;
	getPower();
}