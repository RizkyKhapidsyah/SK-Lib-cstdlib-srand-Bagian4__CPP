#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

using namespace std;

int main() {
	srand(time(0));

	int random = rand();

	cout << "Seed = " << time(0) << endl;
	cout << "Random number = " << random;

	_getch();
	return 0;
}