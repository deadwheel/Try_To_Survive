# GRA: Nietypowy w¹¿!

Gra to nietypowy w¹¿,snake w której to mamy za zadanie prze¿yæ jak najd³u¿ej a przy tym uzbieraæ jak najwiêcej punktów . Gra ró¿ni siê o typowego snake tym , ¿e zbieraj¹c punkty
nie powiêkszamy naszego we¿a a tylko powiêkszamy nasz wynik . Punkty do zbierania s¹ oznaczone na planszy jako znak "*" . Dodatkowo oprócz punktów na planszy pojawiaj¹ siê
obiekty dwóch typów: 

1. Obiekt znak zapytania "?", je¿eli go zbierzemy to wykona siê losowo jedna z dwóch funkcji
 	
	a) Znikn¹ z planszy wszystkie œciany oczywiœcie oprócz tych obramówkowych ( opisane dalej)
	b) Odwróci siê nam sterowanie tzn góra bêdzie do³em , lewa strona praw¹ itd przy czym gra lekko spowolni  

2. Obiekt œciana "#" . Tego obiektu nale¿y unikaæ poniewa¿ gdy na niego wejdziemy to giniemy.

## STEROWANIE

W grze sterujemy naszym wê¿em który na planszy jest widoczny jako znak "O" . Sterujemy za pomoc¹ klawiaszy W ( góra ) S ( dó³ ) A ( lewo ) D ( prawo ) chyba ze zebraliœmy znak
zapytania i wykona³a siê funkcja odwracania sterowania wtedy góra bêdzie do³em , lewa strona praw¹ itd .


## INSTRUKCJA OBS£UGI

Sterowanie oraz opis patrz wy¿ej.

1. Dla typowego "Kowalskiego"
	* Wejdz do katalogu z gr¹
	* Uruchom plik "snake_obiektowe.exe"
	* Ciesz sie gr¹! 

2. Dla osoby chc¹cej zaimportowaæ grê do swojego projektu w C++
	* dodaj trzy biblioteki:
		#include <cstdlib>
		#include <ctime>
		#include "Gra_TXT.h" 

	* w mainie u¿yj: "srand(time(NULL));" najlepiej na samym pocz¹tku zapewnia to losowoœæ.
	* Stwórz obiekt typu Gra_TXT a nastêpnie u¿yj na nim funkcji Start();
	* Gotowe !



## OPIS KLAS

obiekt  - klasa bed¹ca jednym obiektem na mapie która mo¿e byæ puste albo zajêta ( np znak zapytania , punkt czy œciana )
player  - klasa opisuj¹ca po³o¿enie gracza na mapie .
Dir - enumerator ze wszystikimi mo¿liwymi kierunkami w jakie mo¿e poruszaæ siê nasz w¹¿ .
Snake_Engine - g³ówny "mózg" gry . Odbywa siê tutaj analiza czasowa ( sprawdzenie czy mo¿na ustawiæ ju¿ nowe obiekty , ustawianie ich ) i po³o¿enia gracza ( sprawdzanie czy
gracz nie zebra³ jakiegoœ obiektu b¹dz na niego wszed³ )
Gra - podstawowy szablon gry . Tutaj mieœci siê przede wszystkim metoda startuj¹ca grê.
Gra_TXT - Gra w trybie konsolowym 




