#include "Video.h"

Video::Video(unsigned displaySize)
{
	DisplaySize = displaySize;
}

void Video::Show()
{
	std::cout << "Базовая диагональ экрана: " << DisplaySize << "\"" << std::endl;
}

void Video::getDisplaySize()
{
	std::cout << "Диагональ экрана: " << DisplaySize << "\"" << std::endl;
}