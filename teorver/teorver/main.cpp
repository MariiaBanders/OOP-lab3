#include <iostream>

using namespace std;

int main()
{
	long long arr[40];
	arr[0] = 1;
	for (int i = 1; i <= 32; ++i)
	{
		arr[i] = arr[i - 1] * 2;
	}
	long long arr2[40];
	for (int i = 0; i <= 16; i += 1)
	{
		arr2[i] = 1;
		for (int j = 32 - i; j <= 32; ++j)
		{
			arr[i] *= j;
		}
		cout << i << " " << arr[i] << endl;

		for (int j = 2; j <= i; ++j)
		{
			arr[i] /= j;
		}
		
	}
	for (int i = 17; i <= 32; i += 1)
	{
		arr[i] = arr[32 - i];
	}
	for (int i = 0; i <= 32; i += 2)
	{
		cout << arr[i] << " " << arr2[32 - i] << endl;
	}
	system("pause");
	return 0;
}