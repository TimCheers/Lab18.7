#include <iostream>
#include "container.h"
#include "Money.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Введите 1ю сумму:";
    Money S1, S2;
    cin >> S1;
    cout << "Введите 2ю сумму:";
    cin >> S2;
    cout << "1я сумма:";
    cout << S1;
    cout << "\n2я сумма:";
    cout << S2;
    container<Money>A(4);
    cout << A;
    cout << A[2];
    return 0;
}