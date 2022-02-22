/*  1.Заполнить матрицу 5х5 случайными значениями. Вывести строки, которые упорядочены по
    возрастанию.

    2. Заполнить матрицу 5х5 случайными значениями. Просуммировать все значения побочной
    верхней диагонали (Пример на 5х5 матрице, интересующие значения – 1, не интересующие – 0)
    0 1 0 0 0
    0 0 1 0 0
    0 0 0 1 0
    0 0 0 0 1
    0 0 0 0 0*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

int main(){
    srand((unsigned)time(0));   
  //cout << "hello world" << endl;
    const int stroki = 5, stolbci = 5;
    int matriza[stroki][stolbci];

    for(int i = 0;i < stroki;i++){
        for(int j = 0;j < stolbci;j++){
            matriza[i][j] = rand() % 10 + 1;
            cout << setw(3) << matriza[i][j];
           }
        cout << endl;
    }

    int check;


return 0;
}
