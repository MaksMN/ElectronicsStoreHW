#pragma once
#include "Video.h"
#include "Audio.h"
class SmartPhone final : public Video, Audio
{
	std::string Standard = "2G";
public:
	SmartPhone(unsigned displaySize, std::string soundScheme, unsigned power, std::string standard, std::string brand);
	void Show() override;
};