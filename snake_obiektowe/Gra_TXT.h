#pragma once
#ifndef _HEADER_GRATXT_
#define _HEADER_GRATXT_

#include "Gra.h"
#include <Windows.h>

class Gra_TXT : public Gra {

protected:

	HANDLE h;
	COORD c;


public:
	
	Gra_TXT();
	
	virtual void View();
	virtual void Kbfun();
	virtual void ustaw_w_zerze();

};

#endif // !_HEADER_GRATXT_
