#include <iostream>
#include <iomanip>

using namespace std;

void calcPopSize (double, double, double, double);
bool sysEnd = false;
int main() {
	//this programm callcualtes population size 
	double startingSize = 0; double annualBirths = 0; double annualDeaths = 0; double years = 0;
	
	while (sysEnd ==0) {
		sysEnd = true;
		cout << " enter population starting size: ";
		cin >> startingSize;
		if (startingSize < 2)
		sysEnd = false;

		cout << "enter annual birth rate: ";
		cin >> annualBirths;
		cout << "enter annual death rate: ";
		cin >> annualDeaths;
		if (annualBirths < 0 || annualDeaths < 0)
			sysEnd = false;
		cout << "enter numbers of years you want to check population size for: ?";
		cin >> years;
		if (years < 1)
			sysEnd = false;
		
		if (sysEnd == 0) {
			cout << "Do not enter: numbers less then 2 for starting size.\n";
			cout << "\t \t numbers less then 1 for years to dispaly.\n";
			cout << " \t \t negative numbers for birth or death rate.\n";
			cout << "___________________________________________________" << endl;
			cout << "Ok, let's start all over again: \n \n ";
		}
	}

	calcPopSize (startingSize, annualBirths, annualDeaths, years);

	system("pause");
	return 0;
}

void calcPopSize(double startingSize, double annualBirths, double annualDeaths, double years) {
	double totalPops=0;
	for (int i = 0; i < years; i++) {
		double newPop;		
		newPop = startingSize + (annualBirths/100*startingSize) - (annualDeaths/100*startingSize);
		totalPops=+ newPop;	
		startingSize = newPop;
	}
	
	cout << " in the year " << years << " the total population will be " <<fixed<<setprecision(2)<< totalPops << ".\n";
}