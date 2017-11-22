#include <cstdlib>
#include <ctime>
#include "Gra_TXT.h" 

using namespace std;



int main() {

	srand(time(NULL));


	Gra_TXT ala_snake;
	ala_snake.Start();

	system("PAUSE");
	return 0;
}