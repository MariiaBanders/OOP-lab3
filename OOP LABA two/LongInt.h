
#include <string>

using namespace std;


class longint
{

private:

	longint difference(longint x, longint y, int length);

public:

	int number[200] = { 0 }; // довге число
	int size_number = 0; // довжина довгого числа

	void readnumber(const string &s); // зчитує число

	int biggerone(longint a, longint b); // визначає більше число (3 - рівні, 1 - перше, 2 - б)

	longint sum(longint b); // додає до намбер число б
	longint sub(longint b); // віднімає від намбер число б
	longint mul(longint b); // множить на б
	longint div(longint b); // цілочисельно ділить а на б

	string returnnumber(); // виводить намбер

};
