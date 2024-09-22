#include <iostream>
#include <time.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	srand(time(NULL));

	int randnum = 1 + rand() % 20;
	int kaka;
	bool stoyat = false;

	do {
		cout << "Введите число: " << endl;
		cin >> kaka;
		if (kaka != randnum)
			cout << "Вы не угадали число! Повторите попытку." << endl;
		else {
			cout << "Верно, вы угадали число!" << endl;
			stoyat = true;
		}
	} while (!stoyat);


	cout << "World" << endl;

	return 0;
}