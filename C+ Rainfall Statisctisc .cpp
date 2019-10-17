#include <iostream>
#include<string>
#include <iomanip>
using namespace std;

void rainfallInput(double[],string[], int);
void lowestMonth(double [], string[],int);
void higestMonth(double[], string [], int);

int main() {
	double average, total=0;
	const int RAINFALL = 12;
	double rain[RAINFALL];
	string months[RAINFALL] = { "January", "February", "March", "April", "May","June","July","August","September","October","November","December" };
	cout << fixed << showpoint << setprecision(2);

	cout << "enter rainfall for each month: ";
	rainfallInput(rain, months, RAINFALL);
	for (int j = 0;j < RAINFALL;j++) {
		total += rain[j];
	}
	cout << endl;
	average = total / RAINFALL;
	cout << "the total yearly rainfall is: \t" << total << ".\n";
	cout << "Monthy average is :           \t" << average << ".\n";
	cout << "______________________________________________________" << endl;
	lowestMonth(rain, months, RAINFALL);
	higestMonth(rain, months, RAINFALL);
	
	system("pause");
	return 0;
}

void rainfallInput(double rain[], string months[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "For " << months[i] << "- ";
		cin >> rain[i];
	}
}

void lowestMonth(double rain[], string months[], int size) {
	double lowest;
	int month;
	lowest = rain[0];
	for ( int j = 0; j < size; j++) {		
		if (rain[j] < lowest) {
			lowest = rain[j];
			month = j;
		}
	}
	cout << "the lowest rainfall of " << lowest << ", occures in " << months[month] << ".\n";
}

void higestMonth(double rain[], string months[], int size) {
	double higest;
	int month;
	higest = rain[0];
	for (int k = 0;k < size; k++) {		
		if (rain[k] > higest) {
			higest = rain[k];
			month = k;
		}
	}
	cout << "the higest rainfall of "<< higest <<", occures in  " << months[month] << ". \n";
}
