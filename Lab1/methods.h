class Methods
{
	private:

		void intervals(int x, int m, int razmer, int arr[]); // ������� ����������� ��� [x, y]
		void normalintervals(int x, int m, int razmer, int start, int finish, int start2, int finish2, int arr[]);
		void normalintervalswow(double x, int razmer, double interval, int start, int finish, int *arr); // ��� ��������
		
		void coutintervals(int razmer, int start, int finish, int arr[]); // �������� ��������� ���������
		
		int giveX1(int x, int m); //���� � �� ������ ������� ���������
		int giveX2(int x, int m); //���� y �� ������ ������� ���������
	public:

		void method1(int n); //������ ������������
		void method2(int n); //������������ ������������
		void method3(int n); //����� Գ�������
		void method4(int n); //�������� ����������� �����������
		void method5(int n); //����� ��'�������
		void method6(int n); //������� 3 ����
		void method7(int n); //����� �������� ���������
		void method8(int n); //����� �����������
		void method9(int n); //����� ��������� ��� ����������� ���������� ��������
		void method10(int n); //����� ������ ��� ����������� �����-�������� ������� �>1
};