
/*
	Алгоритмы и структуры данных
	Модуль 12. Элементарные структуры данных, введение в алгоритмы поиска 
	12.7. Домашнее задание
*/

#include <locale>
#include "IsKPeriodic.h"
using namespace std;

int main(){
    setlocale(LC_ALL, "ru.UTF-8");

    int krat = 1;
    string str = "abcabc";
    if(IsKPeriodic(str, krat)) cout << "Строка " << str << " кратна числу " << krat << endl;
    else cout << "Строка " << str << " не кратна числу " << krat << endl;
}