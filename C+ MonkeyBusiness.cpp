#include <iostream>
#include <string>
#include<fstream>
#include<iomanip>
using namespace std;

const int DAYS_WEEK = 7;
const int MONKEYS = 3;
void fillFood (int [MONKEYS][DAYS_WEEK]);
void display  (int [MONKEYS] [DAYS_WEEK]);
int getTotal(int[MONKEYS] [DAYS_WEEK]);
int largest (int [MONKEYS] [DAYS_WEEK]);
int smalest (int [MONKEYS] [DAYS_WEEK]);

int main() {
	
	int monkeyEat[MONKEYS][DAYS_WEEK];

	fillFood (monkeyEat);
	cout << "\n Summary of how much monkeys ate in a week: \n";
	display (monkeyEat);
	cout << "---------------------------------------------------------------" << endl;
	cout << " The average daily amount for the whole family of monkyes is: "; 	
	cout << getTotal(monkeyEat) / (MONKEYS*DAYS_WEEK) <<"lb."<< endl;

	cout << "the largest amount monkey can eat is : " << largest(monkeyEat) <<" lb."<< endl;
	cout << "the smallest amount monkey can eat is : " << smalest(monkeyEat) <<" lb."<<endl;

	system("pause");
	return 0;
}
void fillFood(int monkeyEat [MONKEYS][DAYS_WEEK]) {
	monkeyEat [0][0]= 1;
	
	/*for (int i = 0; i < MONKEYS;i++) {
		cout << "-------------------------------------------------------------------" << endl;
		for (int j = 0; j < DAYS_WEEK; j++) {
			cout << "enter amount of food eaten by monkey # " << i + 1 << " on the day _" << j + 1<<":  ";
			cin >> monkeyEat[i][j];
			
		}*/
	for (int row = 0;row < MONKEYS;row++) {
		cout << "enter amount of food (in pounds) for monkey # " << row + 1 << " for each day:\n ";
		for (int col = 0; col < DAYS_WEEK; col++)
			cin >> monkeyEat[row][col];
	}
	

}
void display(int monkeyEat[MONKEYS][DAYS_WEEK]) {	

	for (int row = 0;row < MONKEYS; row++) {
		cout << "\n";
		cout << "Monkey # " << row + 1 << "ate this much each day respectively: ";
		for (int col = 0; col < DAYS_WEEK;col++)
			cout << monkeyEat[row][col] << " lb.,";
	}
	cout << "\n";
}
		
int getTotal(int monkeyEat[MONKEYS][DAYS_WEEK]) {
	int total = 0;
	for (int row = 0;row < MONKEYS;row++) {
		for (int col = 0; col < DAYS_WEEK; col++)
			total += monkeyEat[row][col];
	}
	return total;
	 }
int largest(int monkeyEat[MONKEYS][DAYS_WEEK]) {
	int large;
	large = monkeyEat[0][0];
	for (int row = 0; row < MONKEYS;row++) {
		for (int col = 0; col < DAYS_WEEK;col++) {
			if (monkeyEat[row][col] > large) {
				large = monkeyEat[row][col];
			}
		}
	}
	return large;
}
int smalest(int monkeyEat[MONKEYS][DAYS_WEEK]) {
	int small;
	small = monkeyEat[0][0];
	for (int row = 0; row < MONKEYS;row++) {
		for (int col = 0; col < DAYS_WEEK;col++) {
			if (monkeyEat[row][col] < small) {
				small = monkeyEat[row][col];
			}
		}
	}
	return small;
}