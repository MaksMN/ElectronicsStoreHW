#pragma once
#include <iostream>
#include <string>
#include "IElectronics.h"

class Audio : public virtual IElectronics
{
	// Sound scheme: Mono|Stereo|5.1|7.1|
	std::string SoundScheme = "Dolby Surround 7.1";
public:

	Audio(std::string soundScheme);	
	void Show() override;
	void getSoundScheme();
};