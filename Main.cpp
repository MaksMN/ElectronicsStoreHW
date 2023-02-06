#include <iostream>
#include <string>
#include "Classes\IElectronics.h"
#include "Classes\AudioPlayer.h"
#include "Classes\Monitor.h"
#include "Classes\TVset.h"
#include "Classes\SmartPhone.h"

int main()
{
	setlocale(LC_ALL, "");

	IElectronics *appliances[4];

	appliances[0] = new TVset(32, "Stereo 2.0", 500, "DVB-T DVB-C", true, "LG");
	appliances[1] = new Monitor(27, 500, "DVI-D VGA", "Samsung");
	appliances[2] = new AudioPlayer("Dolby Surround 7.1", 1000, "CD MP3 OGG", "Sony");
	appliances[3] = new SmartPhone(7, "Mono", 15, "2G 3G 4G", "Xiaomi");

	bool notexit = true;
	do
	{
		std::cout << "Выберите устройство: 1 - Телевизор, 2 - Монитор, 3 - Аудиоплеер, 4 - Смартфон, 0 - Выход" << std::endl;
		int choice;
		std::cin >> choice;
		switch (choice)
		{
		case 1:
			appliances[0]->Show();
			break;

		case 2:
			appliances[1]->Show();
			break;

		case 3:
			appliances[2]->Show();
			break;

		case 4:
			appliances[3]->Show();
			break;

		case 0:
			notexit = false;
			break;

		default:
			std::cout << "Выберите устройство от 1 до 4 или 0, чтобы выйти" << std::endl;
		}
	} while (notexit);

	delete appliances[0];
	delete appliances[1];
	delete appliances[2];
	delete appliances[3];
	return 0;
}