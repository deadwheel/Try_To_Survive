#include "Gra_TXT.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>

Gra_TXT::Gra_TXT() : Gra()
{

	 h = GetStdHandle(STD_OUTPUT_HANDLE);

}

void Gra_TXT::View() {

	if (przerwij == true) {

		system("cls");
		std::cout << "GAME OVER! Zdobyles/as " << wynik << "punktow , Gratulacje !";

	}

	else {

		for (int i = 0; i < 20; i++) {

			for (int j = 0; j < 20; j++) {

				if (sciana[i][j].sprawdz() == FALSE) {

					std::cout << "#";

				}

				else if (pytajnik[i][j].sprawdz() == FALSE)
				{

					std::cout << "?";

				}


				else if (punkt[i][j].sprawdz() == FALSE)
				{

					std::cout << "*";

				}

				else if (gracz.getx_player() == i && gracz.gety_player() == j) {

					std::cout << "O";

				}

				else {

					std::cout << " ";

				}

			}

			std::cout << std::endl;


		}

	}

}

void Gra_TXT::Kbfun() {

	if (odwrocone == false) {


		if (kbhit())
		{
			switch (getch())
			{
			case 'W':
			case 'w':
				if (dir != DOWN)
					dir = UP;
				break;
			case 'D':
			case 'd':
				if (dir != LEFT)
					dir = RIGHT;
				break;
			case 'S':
			case 's':
				if (dir != UP)
					dir = DOWN;
				break;
			case 'A':
			case 'a':
				if (dir != RIGHT)
					dir = LEFT;
				break;
			}
		}


	}

	else {

		czas_odwrocone++;
		if (czas_odwrocone == 20) {
			odwrocone = false;
			czas_odwrocone = 0;
		}

		if (kbhit())
		{
			switch (getch())
			{
			case 'W':
			case 'w':
				if (dir != UP)
					dir = DOWN;
				break;
			case 'D':
			case 'd':
				if (dir != RIGHT)
					dir = LEFT;
				break;
			case 'S':
			case 's':
				if (dir != DOWN)
					dir = UP;
				break;
			case 'A':
			case 'a':
				if (dir != LEFT)
					dir = RIGHT;
				break;
			}
		}


	}




	switch (dir)
	{
	case UP:
		gracz.decreasex_player();
		break;
	case RIGHT:
		gracz.incresey_player();
		break;
	case DOWN:
		gracz.incresex_player();
		break;
	case LEFT:
		gracz.decreasey_player();
		break;
	}

}


void Gra_TXT::ustaw_w_zerze() {

	c.X = 0;
	c.Y = 0;
	SetConsoleCursorPosition(h, c);

}