#include <iostream>
#include "basica.h"
using namespace std;

int main() {

    int quantidade;
    char cOuS;
    
	cout << "Bem vindo a Calculadora++\n";
    do {
        cout << "Deseja continuar\n";
        cout << "Digite C: coninuar; S: sair\n";
        cin >> cOuS;
    } while (cOuS == 'C');

    
	return 0;

}
