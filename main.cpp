#include <iostream>
#include "basica.h"
using namespace std;

int main() {

	double x; double y;
	cin>>x>>y;
	double resultado1 = basica::somar(x,y);
	double resultado2 = basica::subtrair(x,y);
	double resultado3 = basica::dividir(x,y);
	double resultado4 = basica::multiplicar(x,y);

	cout<<resultado1<<endl;
	cout<<resultado2<<endl;
	cout<<resultado3<<endl;
	cout<<resultado4<<endl;

	return 0;

}
