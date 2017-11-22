#pragma once
#ifndef _HEADER_GRA_
#define _HEADER_GRA_

#include "Snake_Engine.h"

class Gra : public Snake_Engine {

public:
	
	Gra() : Snake_Engine() {}
	
	void Start();

	virtual void View() {}
	virtual void Kbfun() {}
	virtual void ustaw_w_zerze() {}


};


#endif // !_HEADER_GRA_
