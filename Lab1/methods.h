class Methods
{
	private:

		void intervals(int x, int m, int razmer, int arr[]); // подсчет гистаграммы для [x, y]
		void normalintervals(int x, int m, int razmer, int start, int finish, int start2, int finish2, int arr[]);
		void normalintervalswow(double x, int razmer, double interval, int start, int finish, int *arr); // ура работает
		
		void coutintervals(int razmer, int start, int finish, int arr[]); // виводить гарненько інтервали
		
		int giveX1(int x, int m); //видає х за першим методом підрахунку
		int giveX2(int x, int m); //видає y за першим методом підрахунку
	public:

		void method1(int n); //лінійний конгруентний
		void method2(int n); //квадратичний конгруентний
		void method3(int n); //числа Фібоначчі
		void method4(int n); //Обернена конгруентна послідовність
		void method5(int n); //метод об'єднання
		void method6(int n); //правило 3 сігма
		void method7(int n); //метод полярних координат
		void method8(int n); //метод співвідношень
		void method9(int n); //метод логарифму для генерування показового розподілу
		void method10(int n); //метод Аренса для генерування гамма-розподілу порядку а>1
};