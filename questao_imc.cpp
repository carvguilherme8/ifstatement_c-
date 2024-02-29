#include <iostream>
using namespace std;

int main()
{
    float altura;
    float massa;
    float imc;

    cout << "Qual seu peso? ";
    cin >> massa;
    cout << "Qual sua altura? ";
    cin >> altura;

    imc = massa/(altura*altura);

    if (imc < 17) {
      cout << "você está muito abaixo do peso.";
    } else if (imc < 18.5) {
      cout << "você está abaixo do peso";
    } else if (imc < 25) {
      cout << "seu peso está normal.";
    } else if (imc < 30) {
      cout << "você está acima do peso";
    } else if (imc < 35) {
      cout << "você está obeso.";
    } else if (imc < 40) {
      cout << "você está com obesidade severa.";
    } else {
      cout << "você está com obesidade mórbida.";
    }

    return 0;
}

