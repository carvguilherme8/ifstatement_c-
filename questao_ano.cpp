#include <iostream>
using namespace std;

int main()
{
    int ano;

    cout << "Escolha um ano: ";
    cin >> ano;

    if (ano%400 == 0 or (ano%4 == 0 && ano%100 != 0)) {
      cout << "Esse ano é bissexto";
    } else {
      cout << "Esse ano não é bissexto";
    }  
    return 0;
}

