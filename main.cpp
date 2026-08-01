#include <iostream>
#include "basica.h"
using namespace std;

int main() {

	double x; double y;
	cin>>x>>y;
	double resultado1 = basica::somar(x,y);
	double resultado2 = basica::subtrair(x,y);
	
	cout<<resultado1<<endl;
	cout<<resultado2<<endl;

	return 0;

}
