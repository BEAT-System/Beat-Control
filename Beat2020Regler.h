#ifndef REGLER_H
#define REGLER_H
#include "VentiData.h"
#include <Arduino.h>

class Beat2020Regler {
private:
	ControllerData& _cdata;
	PanelData& _pdata;
	void messure();
	void controll();

public:
	Beat2020Regler(ControllerData& cdata, PanelData& pdata);
	void update();
};

#endif // !REGLER_H
