#include <iostream>
#include <cmath>
#include <ctime>
#include <windows.h>

using namespace std;
//Redys
const int POLE_SIZE=10;

enum ConsoleColor
{
	BLACK = 0,
	DARKBLUE = FOREGROUND_BLUE,
	DARKGREEN = FOREGROUND_GREEN,
	DARKCYAN = FOREGROUND_GREEN | FOREGROUND_BLUE,
	DARKRED = FOREGROUND_RED,
	DARKMAGENTA = FOREGROUND_RED | FOREGROUND_BLUE,
	DARKYELLOW = FOREGROUND_RED | FOREGROUND_GREEN,
	DARKGRAY = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
	GRAY = FOREGROUND_INTENSITY,
	BLUE = FOREGROUND_INTENSITY | FOREGROUND_BLUE,
	GREEN = FOREGROUND_INTENSITY | FOREGROUND_GREEN,
	CYAN = FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE,
	RED = FOREGROUND_INTENSITY | FOREGROUND_RED,
	MAGENTA = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE,
	YELLOW = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN,
	WHITE = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE,
};
int check(int x1, int x2, int y1, int y2, int k);

void otrisovka(int pole[][10])
{
	system("cls");
	cout << "   А Б В Г Д Е Ж З И К" << endl;
	int k = 1;
	for (int i = 0; i < POLE_SIZE; i++)
	{
		
		if (k < POLE_SIZE){
			cout << " " << k;
		}
		else {
			cout << k;
		}
		++k;
		for (int j = 0; j < POLE_SIZE; j++)
		{
			switch (pole[i][j])
			{
			case 0: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), DARKBLUE); cout << " #"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), DARKGRAY); break;
			case 1: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), DARKGRAY); cout << " *"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), DARKGRAY); break;
			case 2: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE); cout << " *"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), DARKGRAY); break;
			case 3: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED); cout << " *"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), DARKGRAY); break;
			case 4: SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED); cout << " X"; SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), DARKGRAY); break;
			}
		}
		cout << endl;

	}
}

void four(int pole[][10]){
	int x1 = 0, x2 = 0, y1 = 0, y2 = 0, k = 3;
	while (true){
		cout << "Введите координаты начала четырехпалубного корабля (X,Y): ";
		cin >> x1 >> y1;
		cout << "Введите координаты конца четырехпалубного корабля (X,Y): ";
		cin >> x2 >> y2;
		if (check(x1, x2, y1, y2, k) == 1){
			break;
		}
	}
	int maxX = 0, maxY = 0, minX = 0, minY = 0;
	if (x1 > x2){
		maxX = x1;
		minX = x2;
	}
	else{
		maxX = x2;
		minX = x1;
	}
	if (y1 > y2){
		maxY = y1;
		minY = y2;
	}
	else{
		maxY = y2;
		minY = y1;
	}
	for (int i = 0; i < POLE_SIZE; i++){
		for (int j = 0; j < POLE_SIZE; j++){

			if (i >= minY&&i <= maxY){
				if (j >= minX&&j <= maxX){
					pole[i - 1][j - 1] = 2;
				}
				else{

				}
			}
			else{

			}
		}
	}
}
void three(int pole[][10]){
	int x1 = 0, x2 = 0, y1 = 0, y2 = 0, k = 2;
		while (true){
			cout << "Введите координаты начала трехпалубного корабля (X,Y): ";
			cin >> x1 >> y1;
			cout << "Введите координаты конца трехпалубного корабля (X,Y): ";
			cin >> x2 >> y2;
			if (check(x1, x2, y1, y2, k) == 1){
				break;
			}
		}
		int maxX = 0, maxY = 0, minX = 0, minY = 0;
		
		if (x1 > x2){
			maxX = x1;
			minX = x2;
		}
		else{
			maxX = x2;
			minX = x1;
		}
		if (y1 > y2){
			maxY = y1;
			minY = y2;
		}
		else{
			maxY = y2;
			minY = y1;
		}		//Нахождение максимального и минимального

		for (int i = 0; i < POLE_SIZE; i++){
			for (int j = 0; j < POLE_SIZE; j++){

				if (i >= minY&&i <= maxY){
					if (j >= minX&&j <= maxX){
						pole[i - 1][j - 1] = 2;
					}
					else{

					}
				}
				else{

				}
			}
		}
}
void two(int pole[][10]){
	int x1 = 0, x2 = 0, y1 = 0, y2 = 0, k = 1;
		while (true){
			cout << "Введите координаты начала двухпалубного корабля (X,Y): ";
			cin >> x1 >> y1;
			cout << "Введите координаты конца двухпалубного корабля (X,Y): ";
			cin >> x2 >> y2;
			if (check(x1, x2, y1, y2, k) == 1){
				break;
			}
		}
		int maxX = 0, maxY = 0, minX = 0, minY = 0;

		if (x1 > x2){
			maxX = x1;
			minX = x2;
		}
		else{
			maxX = x2;
			minX = x1;
		}
		if (y1 > y2){
			maxY = y1;
			minY = y2;
		}
		else{
			maxY = y2;
			minY = y1;
		}		//Нахождение максимального и минимального

		for (int i = 0; i < POLE_SIZE; i++){
			for (int j = 0; j < POLE_SIZE; j++){

				if (i >= minY&&i <= maxY){
					if (j >= minX&&j <= maxX){
						pole[i - 1][j - 1] = 2;
					}
					else{

					}
				}
				else{

				}
			}
		}

}
void one(int pole[][10]){

	int x = 0, y = 0;
	cout << "Введите координаты однопалубного корабля (X,Y): ";
	cin >> x >> y;

	for (int i = 0; i < POLE_SIZE; i++){
		for (int j = 0; j < POLE_SIZE; j++){
			if (i == y&&j == x){
				pole[i-1][j-1] = 2;
			}
		}
	}
}

//Коммент
int check(int x1, int x2, int y1, int y2, int k){
	if (abs(x1 - x2) == k){
		if (abs(y1 - y2) == k){
			cout << "1Данные введены не верно! Повторите попытку!\n\n";
			return 0;
		}
		else{
			if ((x1 - x2) == 0){
				cout << "Данные введены правильно!\n\n";
				return 1;
			}
			else{
				cout << "2Данные введены не верно! Повторите попытку!\n\n";
				return 0;
			}
		}
	}
	else{
		if (abs(y1 - y2) == k){
			if ((x1 - x2) == 0){
				cout << "Данные введены правильно!\n\n";
				return 1;
			}
			else{
				cout << "3Данные введены не верно! Повторите попытку!\n\n";
				return 0;
			}
		}
		else{
			cout << "4Данные введены не верно! Повторите попытку!\n\n";
			return 0;
		}
	}
}




int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));

	int pole[10][10] = { 0 };

	otrisovka(pole);
	four(pole);
	otrisovka(pole);



	three(pole);
	otrisovka(pole);

	three(pole);
	otrisovka(pole);




	two(pole);
	otrisovka(pole);

	two(pole);
	otrisovka(pole);

	two(pole);
	otrisovka(pole);



	one(pole);
	otrisovka(pole);

	one(pole);
	otrisovka(pole);

	one(pole);
	otrisovka(pole);

	one(pole);
	otrisovka(pole);

	cin.get();
	cin.get();
	return 0;
}