#pragma once
#include <string>
#include "Audio.h"
class AudioPlayer final : public Audio
{
	// Форматы аудио: CD DVD MP3 OGG
	std::string AudioFormat;
public:

	AudioPlayer(std::string soundScheme, unsigned power, std::string audioFormat, std::string brand = "noname");
	void Show() override;
};