#include<iostream>
#include<iomanip>

using namespace std;

void calcCharges(int,double,double,double);
void calcCharges(double,double);

void menue();
int main()
{
	char menuChoice;
	double dailyRate, medCharges, serviceCharges;
	int days;
	bool inpatient = false;
	bool outpatient = false;
	cout << fixed << setprecision(2);

	menue();
	cin >>menuChoice;
	switch (menuChoice) {
	case '1': inpatient = true;
		break;
	case'2': outpatient = true;
	}

	if (inpatient != 0) {
		cout << "enter #of  days in hospital: ";
		cin >> days;
		cout << "enter daily rate: ";
		cin >> dailyRate;
		cout << "enter medication charges: ";
		cin >> medCharges;
		cout << "enter charges for other hospital services: ";
		cin >> serviceCharges;
		
		if (days < 0 || dailyRate < 0 || medCharges < 0 || serviceCharges < 0) {
			cout << " sorry, you can't enter negative charges. ";
			system("pause");
			return 0;
			}
		calcCharges(days, dailyRate, medCharges, serviceCharges);
	}
			
		
	if (outpatient != 0) {
		cout << "enter medication charges: ";
		cin >> medCharges;
		cout << "enter charges for other hospital services: ";
		cin >> serviceCharges;
		if ( medCharges < 0 || serviceCharges < 0) {
			cout << " sorry, you can't enter negative charges. ";
			system("pause");
			return 0;
		}
		 calcCharges( medCharges, serviceCharges);
	}
	system("pause");
	return 0;
}

void menue() {
	cout<<" If you were admited as in-patient, enter 1. \n"; 
	cout<< " If you were admited as out-patient, enter 2. \n";
}
void calcCharges(int days, double dailyRate, double medCharges, double serviceCharges) {
	double total;
	total = (days*dailyRate) + medCharges + serviceCharges;
	cout << "Your total charges are: $ " << total << "." << endl;
}

	void calcCharges(double medCharges, double serviceCharges) {
		double total;
		total = medCharges + serviceCharges;
		cout << "Your total charges are: $ " << total << "." << endl;
}