#include <iostream>
using namespace std;
void student(char[],int);


int main() {
	const char STUDENT_ANSWERS=20;
	char questions[STUDENT_ANSWERS];

	char correctAnswers[] = { 'A','D','B','B','C','B','A','B','C','D','A','C','D','B','D','C','C','A','D','B' };
	student(questions, STUDENT_ANSWERS);

	while ()

	system("pause");
	return 0;
	}

void student(char questions[],int size) {	
	cout << " enter answers to all questions; ";
	for (int i = 0; i < size;i++) {
		cout << i + 1 << ". ";
		cin >> questions[i];
	}
}
