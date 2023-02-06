#include "Audio.h"

Audio::Audio(std::string soundScheme)
{
	SoundScheme = soundScheme;
}

void Audio::Show()
{
	std::cout << "Базовая звуковая схема: " << SoundScheme << std::endl;
}

void Audio::getSoundScheme()
{
	std::cout << "Динамики: " << SoundScheme << std::endl;
}