/*
В итоговом домашнем задании вашей задачей будет написать функцию IsKPeriodic, которая проверяет, является ли строка кратной числу K.
Кратность — повторяемость строки каждые K символов (K должно быть больше 0). 
Например, abcabcabcabc имеет кратность  3,  так как она состоит из подстрок abc, имеющих длину 3.
*/
#include "IsKPeriodic.h"
using namespace std;

bool IsKPeriodic(string& str, int krat){
    if(str.size() % krat != 0) return false;
    for (size_t i = krat; i < str.size(); i += krat) {
       for(size_t j = 0; j < krat; ++j){
            if(str[j] != str[i + j]) return false;
       }
    }
    return true;
}