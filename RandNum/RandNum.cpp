#include <iostream>
#include <time.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	srand(time(NULL));

	int rand_num = 1 + rand() % 20;
	int kaka;
	bool stop = false;

	do {
		cout << "Введите число: " << endl;
		cin >> kaka;
		if (kaka != rand_num)
			cout << "Вы не угадали число! Повторите попытку." << endl;
		else {
			cout << "Верно, вы угадали число!" << endl;
			stop = true;
		}
	} while (!stop);

	return 0;
}