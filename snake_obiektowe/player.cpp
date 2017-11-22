#include "player.h"

int player::getx_player() {

	return x;

}

int player::gety_player() {

	return y;

}

void player::incresex_player() {

	x++;
}

void player::incresey_player() {

	y++;
}

void player::decreasex_player() {

	x--;
}

void player::decreasey_player() {

	y--;
}

void player::setxy_player(int xx, int yy) {

	x = xx;
	y = yy;

}