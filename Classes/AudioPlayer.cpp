#include "AudioPlayer.h"

AudioPlayer::AudioPlayer(std::string soundScheme, unsigned power, std::string audioFormat, std::string brand) : Audio(soundScheme)
{
	AudioFormat = audioFormat;
	setPower(power);
	setBrandName(brand);
}

void AudioPlayer::Show()
{
	std::cout << "Аудио плеер" << std::endl;
	getBrandName();
	getSoundScheme();
	std::cout << "Аудио форматы: " << AudioFormat << std::endl;
	getPower();
}