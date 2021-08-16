#include "Beat2020Regler.h"
#include <Arduino.h>

Beat2020Regler::Beat2020Regler(ControllerData& cdata, PanelData& pdata):
	_cdata(cdata),
	_pdata(pdata)
{

}


void Beat2020Regler::messure() {
	_cdata.p_mess_c = 10;
	_cdata.v_mess_c = 20;
	_cdata.bpm = 12;
	_cdata.p_ins =12;
	_cdata.p_exp =123;
	_cdata.p_exp =23;
	_cdata.reg_kp =89;
	_cdata.reg_tn =93;
	_cdata.reg_tv =122;
}

void Beat2020Regler::controll() {
	uint16_t motorvalue = sin(_pdata.bpm * millis()) * (_pdata.p_ins - _pdata.p_exp);
}

void Beat2020Regler::update() {
	messure();
	controll();
}