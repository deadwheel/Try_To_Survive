# GRA: Nietypowy w��!

Gra to nietypowy w��,snake w kt�rej to mamy za zadanie prze�y� jak najd�u�ej a przy tym uzbiera� jak najwi�cej punkt�w . Gra r�ni si� o typowego snake tym , �e zbieraj�c punkty
nie powi�kszamy naszego we�a a tylko powi�kszamy nasz wynik . Punkty do zbierania s� oznaczone na planszy jako znak "*" . Dodatkowo opr�cz punkt�w na planszy pojawiaj� si�
obiekty dw�ch typ�w: 

1. Obiekt znak zapytania "?", je�eli go zbierzemy to wykona si� losowo jedna z dw�ch funkcji
 	
	a) Znikn� z planszy wszystkie �ciany oczywi�cie opr�cz tych obram�wkowych ( opisane dalej)
	b) Odwr�ci si� nam sterowanie tzn g�ra b�dzie do�em , lewa strona praw� itd przy czym gra lekko spowolni  

2. Obiekt �ciana "#" . Tego obiektu nale�y unika� poniewa� gdy na niego wejdziemy to giniemy.

## STEROWANIE

W grze sterujemy naszym w�em kt�ry na planszy jest widoczny jako znak "O" . Sterujemy za pomoc� klawiaszy W ( g�ra ) S ( d� ) A ( lewo ) D ( prawo ) chyba ze zebrali�my znak
zapytania i wykona�a si� funkcja odwracania sterowania wtedy g�ra b�dzie do�em , lewa strona praw� itd .


## INSTRUKCJA OBS�UGI

Sterowanie oraz opis patrz wy�ej.

1. Dla typowego "Kowalskiego"
	* Wejdz do katalogu z gr�
	* Uruchom plik "snake_obiektowe.exe"
	* Ciesz sie gr�! 

2. Dla osoby chc�cej zaimportowa� gr� do swojego projektu w C++
	* dodaj trzy biblioteki:
		#include <cstdlib>
		#include <ctime>
		#include "Gra_TXT.h" 

	* w mainie u�yj: "srand(time(NULL));" najlepiej na samym pocz�tku zapewnia to losowo��.
	* Stw�rz obiekt typu Gra_TXT a nast�pnie u�yj na nim funkcji Start();
	* Gotowe !



## OPIS KLAS

obiekt  - klasa bed�ca jednym obiektem na mapie kt�ra mo�e by� puste albo zaj�ta ( np znak zapytania , punkt czy �ciana )
player  - klasa opisuj�ca po�o�enie gracza na mapie .
Dir - enumerator ze wszystikimi mo�liwymi kierunkami w jakie mo�e porusza� si� nasz w�� .
Snake_Engine - g��wny "m�zg" gry . Odbywa si� tutaj analiza czasowa ( sprawdzenie czy mo�na ustawi� ju� nowe obiekty , ustawianie ich ) i po�o�enia gracza ( sprawdzanie czy
gracz nie zebra� jakiego� obiektu b�dz na niego wszed� )
Gra - podstawowy szablon gry . Tutaj mie�ci si� przede wszystkim metoda startuj�ca gr�.
Gra_TXT - Gra w trybie konsolowym 




