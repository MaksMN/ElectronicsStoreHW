#pragma once
#include "Video.h"
#include "Audio.h"

// Телевизоры имеют экран и звуковое устройство
// Могут наследовать классы Video, Audio
class TVset final : public Video, Audio
{
	// Поддержка аналогового ТВ
	bool AnalogTV = false;
	// ТВ-тюнеры  (DVB-T DVB-С  DVB-S)
	std::string TVstandards = "DVB-T DVB-С  DVB-S";

public:
	TVset(unsigned displaySize, std::string soundScheme, unsigned power, std::string tvStandards, bool analogtv, std::string brand);
	void getAnalogTV();
	void Show() override;
};