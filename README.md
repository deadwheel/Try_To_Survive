# GRA: Nietypowy wąż!

Gra to nietypowy wąż,snake w której to mamy za zadanie przeżyć jak najdłużej a przy tym uzbierać jak najwięcej punktów . Gra różni się o typowego snake tym , że zbierając punkty
nie powiększamy naszego weża a tylko powiększamy nasz wynik . Punkty do zbierania są oznaczone na planszy jako znak "*" . Dodatkowo oprócz punktów na planszy pojawiają się
obiekty dwóch typów: 

1. Obiekt znak zapytania "?", jeżeli go zbierzemy to wykona się losowo jedna z dwóch funkcji
 	
	a) Znikną z planszy wszystkie ściany oczywiście oprócz tych obramówkowych ( opisane dalej)
	b) Odwróci się nam sterowanie tzn góra będzie dołem , lewa strona prawą itd przy czym gra lekko spowolni  

2. Obiekt ściana "#" . Tego obiektu należy unikać ponieważ gdy na niego wejdziemy to giniemy.

## STEROWANIE

W grze sterujemy naszym wężem który na planszy jest widoczny jako znak "O" . Sterujemy za pomocą klawiaszy W ( góra ) S ( dół ) A ( lewo ) D ( prawo ) chyba ze zebraliśmy znak
zapytania i wykonała się funkcja odwracania sterowania wtedy góra będzie dołem , lewa strona prawą itd .


## INSTRUKCJA OBSŁUGI

Sterowanie oraz opis patrz wyżej.

1. Dla typowego "Kowalskiego"
	* Wejdz do katalogu z grą
	* Uruchom plik "snake_obiektowe.exe"
	* Ciesz sie grą! 

2. Dla osoby chcącej zaimportować grę do swojego projektu w C++
	* dodaj trzy biblioteki:
		#include <cstdlib>
		#include <ctime>
		#include "Gra_TXT.h" 

	* w mainie użyj: "srand(time(NULL));" najlepiej na samym początku zapewnia to losowość.
	* Stwórz obiekt typu Gra_TXT a następnie użyj na nim funkcji Start();
	* Gotowe !



## OPIS KLAS

obiekt  - klasa bedąca jednym obiektem na mapie która może być puste albo zajęta ( np znak zapytania , punkt czy ściana )
player  - klasa opisująca położenie gracza na mapie .
Dir - enumerator ze wszystikimi możliwymi kierunkami w jakie może poruszać się nasz wąż .
Snake_Engine - główny "mózg" gry . Odbywa się tutaj analiza czasowa ( sprawdzenie czy można ustawić już nowe obiekty , ustawianie ich ) i położenia gracza ( sprawdzanie czy
gracz nie zebrał jakiegoś obiektu bądz na niego wszedł )
Gra - podstawowy szablon gry . Tutaj mieści się przede wszystkim metoda startująca grę.
Gra_TXT - Gra w trybie konsolowym 




