#include <iostream>
#include<iomanip>
using namespace std;

/*void employeeQualify();
void employeeNotQualify (double,double);

int main()
{
	double salary, years;

	cout << "this program will check if you qualify for a credit card.\n";
	cout << "answer followng quastions: \n";
	cout << "enter your current salary: ";
	cin >> salary;
	cout << "enter how many years you work in current job: ";
	cin >> years;
	if (salary > 1700 && years > 2) {
		employeeQualify();
	}
	else {
		employeeNotQualify(salary,years );
	}
	system("pause");
	return 0;
	}

void employeeQualify() {
	cout << "You qualify for a credit card." << endl;
}
void employeeNotQualify(double salary, double years) {
	cout << "Sorry, you dont qualify for credit card." << endl;
	cout << " you must earn more then $" << salary;
	cout<< " and work for more then " << years << " year.";
}
*/
//-----------------------------------------------------------

/*double salaryCalculator(double, double);
int main()
{
	double salary, rate, hours;

	cout << "enter how many hours did you worked:";
	cin >> hours;
	cout << "what is your hourly rate: ";
	cin >> rate;

	salary=salaryCalculator(hours, rate);

	cout << " you erned $ " << salary << ".\n";

	system("pause");
	return 0;
}

double salaryCalculator(double rate, double hours) 
{
	
	 return (rate * hours);
}
*/
//-----------------------------------------------------------------------

/*void showDouble(int);
int main() {
	int num;
	for (num = 0; num < 10; num++)
		showDouble(num);

	system("pause");
	return 0;
}
void showDouble(int value) {
	cout << value << "\t" << (value * 2)<< endl;
}
*/

void funcl(double, int);
int main()
{
	int x = 0;
	double y = 1.5;
	cout << fixed << showpoint << setprecision(2);

	cout << x << "  " << y << "  " << endl;
	funcl(x, y);

	system("pause");
	return 0;
}
	
void funcl(double a, int b) {
	cout << a << "  " << b << endl;
	a = 0.0;
	b = 10.5;
	cout << a << "  " << b << endl;
}
