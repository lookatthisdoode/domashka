#include <iostream>
#include <windows.h>
#include <stdlib.h> 
#include <ctime>
#include <cmath>
#include <iomanip>


using namespace std;

void vivod(int array[], int size) {
	cout << "[ ";
	for (int i = 0; i < size; i++)
		cout << setw(3) << array[i] << ", ";
	cout << "]" << endl << endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	srand((unsigned)time(0));


	/*Задание 1. 
		Напишите программу, которая создает двухмерный массив и заполняет его по следующему принципу :
		пользователь вводит число(например, 3) первый элемент
		массива принимает значение этого числа, последующий элемент массива принимает значение этого числа
		умноженного на 2 (т.е. 6 для нашего примера), третий
		элемент массива предыдущий элемент умноженный на
		2 (т.е. 6 * 2 = 12 для нашего примера). Созданный массив
		вывести на экран.*/


	/*const int stroka = 4, stolbec = 5;

	int Arr[stroka][stolbec], first, next, size = stroka*2;

	cin >> first;
	Arr[0][0] = first;

	int Arrtest[12];

	for (int j = 0; j < stroka; j++)
	{
		for (int i = 0; i < stolbec; i++)
		{
		Arr[j][i] = first;
		first *= 2;
		}

	}

	for (int i = 0; i < stroka; i++)
	{
		for (int j = 0; j < stolbec; j++)
		{
			cout << setw(size) << Arr[i][j];
		}
		cout << endl;
	}*/



	/*Задание 2. Напишите программу, которая создает двухмерный массив и заполняет его по следующему принципу :
		пользователь вводит число(например, 3) первый элемент
		массива принимает значение этого числа, последующий
		элемент массива принимает значение этого числа + 1 (т.е.
		4 для нашего примера), третий элемент массива предыдущий элемент + 1 (т.е. 5 для нашего примера).Созданный
		массив вывести на экран.*/

	/*const int stroka = 4, stolbec = 5;

	int Arr[stroka][stolbec], first, next, size = stroka * 2;

	cin >> first;
	Arr[0][0] = first;

	int Arrtest[12];

	for (int j = 0; j < stroka; j++)
	{
		for (int i = 0; i < stolbec; i++)
		{
			Arr[j][i] = first;
			first ++;
		}
	}

	for (int i = 0; i < stroka; i++)
	{
		for (int j = 0; j < stolbec; j++)
		{
			cout << setw(size) << Arr[i][j];
		}
		cout << endl;
	}
	*/


	/*Задание 3. Создайте двухмерный массив.Заполните его
		случайными числами и покажите на экран.Пользователь
		выбирает количество сдвигов и положение(влево, вправо, вверх, вниз).
		Выполнить сдвиг массива и показать на
		экран полученный результат. Сдвиг циклический.*/

	const int stroki = 3, stolbci = 10;

	int Arr[stroki][stolbci], counter = 0, tempmassiv[stroki * stolbci], size = 0;
	string direction;

	for (int i = 0; i < stroki; i++)					// заполнение
	{
		for (int j = 0; j < stolbci; j++)
		{
			Arr[i][j] = rand() % 10 + 1;
			cout << setw(3) << Arr[i][j];
			tempmassiv[counter] = Arr[i][j];
			counter++;
		}
		cout << endl;
	}


	cout << "Направление(L - влево, R - вправо): ";
	cin >> direction;
	cout << "Размер: ";
	cin >> size;


	if (direction == "L" || direction == "l") {
		cout << "Назад (Влево):\n\n";
		counter = 0 + size;
	}
	else if (direction == "R" || direction == "r") {
		cout << "Вперед (Вправо):\n\n";
		counter = (stroki * stolbci) - size;
	}

	for (int i = 0; i < stroki; i++)
	{
		for (int j = 0; j < stolbci; j++)
		{
			if (counter == (stroki * stolbci))
				counter = 0;
			Arr[i][j] = tempmassiv[counter];
			counter++;
			cout << setw(3) << Arr[i][j];
		}
		cout << endl;
	}


	cout << "\n\n\n\n\n\n\n\n\n\n";


	return 0;
}