#include <iostream>
#include<ctime>
#include<cstdlib>
#include<iomanip>
using namespace std;

void showInstructions();
int getRandNumbers();
double getBetAmount(double, double);
bool OodOrEven(int, char);

int main()
{
	char choice;
	bool odd = false;
	double totalMoney = 100, bets = 0;
	int loses = 0, wins = 0, compchoice = 0;
	cout << "****************Hello.*****************" << endl;
	cout << "           Welcome to Gold Rush Roulette. " << endl;
	cout<<"You are starting game with : \t $" << showpoint << setprecision(2) << fixed << totalMoney << "." << endl;
	showInstructions();

	do 
	{
		cout << "Bet on E)ven, O)dd,  Z)ero, H)elp, Q)uit \n";
		cin >> choice;

		if (choice == 'h' || choice == 'H') {
			showInstructions();
		}

		else if (choice == 'Q' || choice == 'q') {
			cout << "You decided to quit the game.";
			cout << "You have lost " << loses << " times and won " << wins << " times." << endl;
			cout << "Your account balance is: $" << totalMoney << ". \n Thank you for playing. Hope to see you soon !\n" << endl;
			cout << "------------- Exiting Game-----------------" << endl;
			break;
			system("pause");
		}


		else if (choice == 'Z' || choice == 'z' || choice == 'o' || choice == 'O' || choice == 'E' || choice == 'e') {
			bets = getBetAmount(bets, totalMoney);
			totalMoney -= bets;
			compchoice = getRandNumbers();
			//compchoice = 0;
			cout << "The wheel comes up to: " << compchoice << "." << endl;
			odd = OodOrEven(compchoice, choice);
			if (totalMoney <= 0) {
				cout << "*****************GAME OVER**********************" << endl;
				cout << "\n Seems you ran out of money. Please, refill your account and restart the game.\n";
				cout << " For a quick loan call 1-800-GET-CASH \n" << endl;

				system("pause");
				return 0;
			}
			if (compchoice != 0)
			{

				if (((choice == 'O' || choice == 'o') && odd == 0) || ((choice == 'E' || choice == 'e') && odd)) {
					loses++;
					cout << "Sorry you lost. You have left: $ " << totalMoney << " ." << endl;;
				}

				if (((choice == 'E' || choice == 'e') && odd == 0) || ((choice == 'O' || choice == 'o') && odd)) {
					totalMoney += (bets * 2);
					wins++;
					cout << "Congratulations! You win. You have now : $ " << totalMoney << "." << endl;
				}
				if (choice == 'z' || choice == 'Z') {
					loses++;
					cout << " Sorry, you lost. You have left :$ " << totalMoney << "." << endl;
				}


			}
			else if ((compchoice == 0) && (choice == 'z' || choice == 'Z')) {
				wins++;
				totalMoney += (bets * 35);
				cout << "You win. Now you have $" << totalMoney << ". Congratulations!" << endl;
			}
			else if ((compchoice == 0) && (choice == 'o' || choice == 'O' || choice == 'E' || choice == 'e')) {
				loses++;
				cout << " Sorry, you lost. You have left :$" << totalMoney << "." << endl;
			}

		}
		else {
			cout << "You entered invalid character! Please choose character from the game menu:" << endl;
		}
	} while ((choice != 'q' || choice != 'Q') || totalMoney <= 0);

	system("pause");
	return 0;
}

void showInstructions() {
	cout << "\nInstructions: \n------------------------\nYou may bet either Even, Odd, or Zero.\n";
	cout << "If you bet on zero and win you win 35 times the amount you bet.\n";
	cout << "You can choose Q to quit the game or H for help.\n";
	cout << "The game ends automatically if you run out of money." << endl;
	cout << " Now let's Play !!  Good luck.\n\n ";
}

int getRandNumbers() {
	const int maxValue = 36;
	const int minValue = 0;
	unsigned seed = time(0);
	srand(seed);
	int compchoice = (rand() % (maxValue - minValue + 1)) + minValue;
	return compchoice;
}
double getBetAmount(double bets, double totalMoney) {
	bool condition = false;

	do {
		cout << "enter amount of bet: ";
		cin >> bets;
		condition = true;

		if (totalMoney < bets) {
			cout << "You might not bet more then you have (" << totalMoney << ")." << endl;
			condition = false;
		}
		if (bets <= 0) {
			cout << "You cant enter negative amount or 0.";
			condition = false;
		}
	} while (condition == false);


	return bets;
}

bool OodOrEven(int computerChoice, char choice) {
	bool odd;
	odd = computerChoice % 2;

	return odd;
}