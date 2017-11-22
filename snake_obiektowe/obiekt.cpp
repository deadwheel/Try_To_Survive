#include "obiekt.h"

obiekt::obiekt() {

	puste = 1;

}

void obiekt::ustaw() {

	puste = 0;

}

void obiekt::usun() {

	puste = 1;

}

bool obiekt::sprawdz() {

	return puste;

}