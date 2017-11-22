#pragma once
#ifndef _HEADER_PLAYER_
#define _HEADER_PLAYER_

class player {

protected:

	int x;
	int y;

public:
	
	int getx_player();
	int gety_player();
	
	void incresex_player();
	void incresey_player();
	void decreasex_player();
	void decreasey_player();
	
	void setxy_player(int xx, int yy);



};

#endif // !_HEADER_PLAYER_

