#include "Gra.h"
#include <Windows.h>

void Gra::Start() {


	View();

	while (1) {

		czasy();
		Kbfun();
		analizuj();
		ustaw_w_zerze();

		View();
		if (przerwij == true) break;

		if (odwrocone == true) Sleep(300);
		else Sleep(100);



	}

}