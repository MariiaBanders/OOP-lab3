#include <iostream>
#include "LongInt.h"

using namespace std;

int main() 

{
	longint a, b, c, d;

	a.readnumber("11111111111111111111111111111");

	b.readnumber("22222222222222222222222222222");

	d = a.mul(b);

    string	s = d.returnnumber();
	cout << s << endl;

	system("pause");
	return 0;
}