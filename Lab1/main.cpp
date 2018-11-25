#include <iostream>
#include "methods.h"

using namespace std;

void analysis(int a, int n)
{
	Methods method;
	switch (a)
	{
		case 1:
			method.method1(n);
			break;
		case 2:
			method.method2(n);
			break;
		case 3:
			method.method3(n);
			break;
		case 4:
			method.method4(n);
			break;
		case 5:
			method.method5(n);
			break;
		case 6:
			method.method6(n);
			break;
		case 7:
			method.method7(n);
			break;
		case 8:
			method.method8(n);
			break;
		case 9:
			method.method9(n);
			break;
		case 10:
			method.method10(n);
			break;
		default:
			cout << "IT IS NOT A METHOD!!!!!!!!!!";
			break;
	}
}

int main()
{
	int a, n;
	cout << "Hello! I have 10 methods, but only methods 1-8 work nice." << endl << "So you want method number..." << endl;
	cin >> a;
	cout << endl << "And it is for this number of random numbers: " << endl;
	cin >> n;
	cout << endl;

	analysis(a, n); 

	system("pause");
	return 0;
} 