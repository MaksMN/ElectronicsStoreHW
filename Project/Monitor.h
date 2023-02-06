#pragma once
#include "Video.h"
class Monitor final : public Video
{
	// Видео разъем (HDMI DVI VGA)
	std::string VideoJack;
public:
	Monitor(unsigned displaySize, unsigned power, std::string videoJack, std::string brand);
	void Show() override;
};