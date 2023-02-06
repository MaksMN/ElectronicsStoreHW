#pragma once
#include "IElectronics.h"
class Video : public virtual IElectronics
{
	unsigned DisplaySize = 32; // Диагональ экрана

public:

	Video(unsigned displaySize);
	void Show() override;
	void getDisplaySize();
};