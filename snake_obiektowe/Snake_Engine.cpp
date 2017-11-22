#include "Snake_Engine.h"

#include <cstdlib>

Snake_Engine::Snake_Engine() {

	gracz.setxy_player(10, 10);
	dir = RIGHT;
	czas_sciana = 0;
	czas_pytajnik = 0;
	czas_punkt = 0;
	czas_odwrocone = 0;
	wynik = 0;
	odwrocone = false;
	przerwij = false;

	for (int i = 0; i < 20; i++) {

		sciana[i][0].ustaw();
		sciana[i][19].ustaw();
		sciana[0][i].ustaw();
		sciana[19][i].ustaw();

	}

}


void Snake_Engine::analizuj() {

	if (sciana[gracz.getx_player()][gracz.gety_player()].sprawdz() == false) {
		przerwij = true;
	}

	else if (pytajnik[gracz.getx_player()][gracz.gety_player()].sprawdz() == false) {

		int wylpyt = (std::rand() % 2) + 1;

		if (wylpyt == 1) {

			for (int i = 1; i < 19; i++) {

				for (int j = 1; j < 19; j++) {

					if (sciana[i][j].sprawdz() == false) {

						sciana[i][j].usun();

					}

				}

			}

		}

		else if (wylpyt == 2) {

			odwrocone = true;

		}




		pytajnik[gracz.getx_player()][gracz.gety_player()].usun();

	}




	else if (punkt[gracz.getx_player()][gracz.gety_player()].sprawdz() == false) {

		wynik++;
		punkt[gracz.getx_player()][gracz.gety_player()].usun();

	}


}




void Snake_Engine::czasy() {


	czas_sciana++;
	czas_pytajnik++;
	czas_punkt++;



	if (czas_sciana == 15) {

		bool poszlo = false;

		while (poszlo == false) {


			int wylx = (std::rand() % 18) + 1;
			int wyly = (std::rand() % 18) + 1;

			if (wylx != gracz.getx_player() && wyly != gracz.gety_player() && ((sciana[wylx][wyly].sprawdz() == true) || (pytajnik[wylx][wyly].sprawdz() == true) || (punkt[wylx][wyly].sprawdz() == true))) {


				sciana[wylx][wyly].ustaw();
				poszlo = true;
				czas_sciana = 0;

			}

		}



	}


	if (czas_punkt == 100) {

		bool poszlo = false;

		while (poszlo == false) {


			int wylx = (std::rand() % 18) + 1;
			int wyly = (std::rand() % 18) + 1;

			if (wylx != gracz.getx_player() && wyly != gracz.gety_player() && ((sciana[wylx][wyly].sprawdz() == true) || (pytajnik[wylx][wyly].sprawdz() == true) || (punkt[wylx][wyly].sprawdz() == true))) {


				punkt[wylx][wyly].ustaw();
				poszlo = true;
				czas_punkt = 0;

			}

		}



	}


	if (czas_pytajnik == 50) {

		bool poszlo = false;

		while (poszlo == false) {


			int wylx = (std::rand() % 18) + 1;
			int wyly = (std::rand() % 18) + 1;

			if (wylx != gracz.getx_player() && wyly != gracz.gety_player() && ((sciana[wylx][wyly].sprawdz() == true) || (pytajnik[wylx][wyly].sprawdz() == true) || (punkt[wylx][wyly].sprawdz() == true))) {


				pytajnik[wylx][wyly].ustaw();
				poszlo = true;
				czas_pytajnik = 0;

			}

		}



	}




}