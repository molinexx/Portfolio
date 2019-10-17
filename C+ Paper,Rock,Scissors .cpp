#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
void menueDisplay();


int main() {

	int x, compCount=0, userCount=0;
	int rock = 1;
	int paper = 2;
	int scissors = 3;
	char playAgain='1';
	// 1 rock, 2 paper, 3 scissors
	int const MIN_VALUE = 1;
	int const MAX_VALUE = 3;
	int compChoice, userChoice;
	char menue;
	
	unsigned seed = time(0);
	srand(seed);
	do {
		x = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

		cout << "enter your choice: :";
		menueDisplay();

		cin >> menue;
		switch (menue) {
		case '1': userChoice = 1;
			break;
		case '2': userChoice = 2;
			break;
		case '3': userChoice = 3;
			break;
		case '0': playAgain = '0';
			cout << "           >>>>>>>    Game over    <<<<<<<<.\n";
			cout << "                     FINAL SCORE: \n";
			cout<<"_________________________________________________\n";
			
			cout << " Computer won :\t \t" << compCount << "  times."<<endl;
			cout << " User won:     \t \t" << userCount << "  times"<< endl;
			
			system("pause");
			exit(0);

		}

		if (x == 1) {
			compChoice = 1;
			cout << "computer choice is rock.\n ";
		}
		if (x == 2) {
			compChoice = 2;
			cout << "computer choice is  paper.\n";
		}
		if (x == 3) {
			compChoice = 3;
			cout << "computer choice is scissors.\n ";
		}

		if (compChoice == 1 && userChoice == 3) {
			cout << "rock smashes scissors - computer wins!\n ";
			compCount++;
		}
		else if (compChoice == 3 && userChoice == 2) {
			cout << "scissor cut paper - computer wins!\n";
			compCount++;
		}
		else if (compChoice == 2 && userChoice == 1) {
			cout << "paper wraps rock - computer wins!\n";
			compCount++;
		}
		if (compChoice == 3 && userChoice == 1) {
			cout << "rock smashes scissors - you win!\n";
			userCount++;
		}
		if (compChoice == 2 && userChoice == 3) {
			cout << "scissor cut paper - you win!\n";
			userCount++;
		}
		if (compChoice == 1 && userChoice == 2) {
			cout << "paper wraps rock - you win!\n";
			userCount++;
		}

		if ((compChoice == 1 && userChoice == 1) || (compChoice == 2 && userChoice == 2) || (compChoice == 3 && userChoice == 3)) {
			cout << "\n you both choosen the same, the game has to be played again to detrmind the winner.";
			cout << "\n \n";
		}
	}
		
			
	
	while (playAgain == '1');
	
	system("pause");
	return 0;
}

void menueDisplay() {
	cout << " \n 1 for rock, \n 2 for paper, \n 3 for scissors, \n 0 to exit the game.\n";
}


