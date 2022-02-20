#include <iostream>
//#include <windows.h>
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
	setlocale(LC_ALL, "RUS");
	srand((unsigned)time(0));

	const int stroki = 3, stolbci = 10;

	int Arr[stroki][stolbci], counter = 0, tempmassiv[stroki * stolbci], size = 0;
	string direction;

	for (int i = 0; i < stroki; i++)					// vivod massiva
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


	cout << "Napravlenie:L - Vlevo, R - Vpravo): ";
	cin >> direction;
	cout << "Kolichestvo: ";
	cin >> size;


	if (direction == "L" || direction == "l") {
		cout << "Sdvig (Vlevo):\n\n";
		cout << "Na " << size; 
		counter = 0 + size;
	}
	else if (direction == "R" || direction == "r") {
		cout << "Sgvig (Vpravo):\n\n";
		cout << "Na " << size; 
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
