#include "head.h"
#include <clocale>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Rus");
	char f[3][3];
	init(f);
	print(f);
	while (true) {
		plx(f);
		print(f);
		if (check(f, 'x')) {
			std::cout << "win x";
		}
		if (checkd(f)) {
			std::cout << "nicha";
		}
		plx(f);
		print(f);
		if (check(f, 'o')) {
			std::cout << "win o";
		}
		if (checkd(f)) {
			std::cout << "nicha";
			
		}
		break;
	}
	return 0;
}
