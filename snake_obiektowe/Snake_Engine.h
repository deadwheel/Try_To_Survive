#pragma once
#ifndef _HEADER_SNAKEENGINE_
#define _HEADER_SNAKEENGINE_

#include "obiekt.h"
#include "player.h"

enum Dir { UP, RIGHT, DOWN, LEFT };

class Snake_Engine {

protected:
	obiekt sciana[20][20];
	obiekt pytajnik[20][20];
	obiekt punkt[20][20];
	player gracz;
	Dir dir;
	int czas_sciana;
	int czas_pytajnik;
	int czas_punkt;
	int czas_odwrocone;
	int wynik;
	bool odwrocone;
	bool przerwij;

public:

	Snake_Engine();
	void analizuj();
	void czasy();


};

#endif // !_HEADER_SNAKEENGINE_

