
#include <string>

using namespace std;


class longint
{

private:

	longint difference(longint x, longint y, int length);

public:

	int number[200] = { 0 }; // ����� �����
	int size_number = 0; // ������� ������� �����

	void readnumber(const string &s); // ����� �����

	int biggerone(longint a, longint b); // ������� ����� ����� (3 - ���, 1 - �����, 2 - �)

	longint sum(longint b); // ���� �� ������ ����� �
	longint sub(longint b); // ����� �� ������ ����� �
	longint mul(longint b); // ������� �� �
	longint div(longint b); // ������������ ����� � �� �

	string returnnumber(); // �������� ������

};
