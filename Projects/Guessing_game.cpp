/*
Author: Mohit Radadiya
*/
#include <bits/stdc++.h>
using namespace std;
Guessing_Game_Driver()
{
	int compGuess = rand() % 1500 +1;
	cout << "Please pick a number between 1 - 1500!\n";
	int guess;
	do {
		cout << "Enter your estimate: ";
		cin >> guess;
		if(guess < compGuess)
			cout << "Your Guess number is less than the Computer Guess number.\n";
		else if(guess > compGuess)
			cout << "Your Guess number is greter than the Computer Guess number.\n";
		else
			cout << "Hureyy! Your guess is right!";
  	}while (guess != compGuess);
	return 0;
}


/*
OUTPUT:

Please pick a number between 1 - 1500!
Enter your estimate: 1300
Your Guess number is greter than the Computer Guess number.
Enter your estimate: 650
Your Guess number is greter than the Computer Guess number.
Enter your estimate: 325
Your Guess number is greter than the Computer Guess number.
Enter your estimate: 162
Your Guess number is greter than the Computer Guess number.
Enter your estimate: 81
Your Guess number is greter than the Computer Guess number.
Enter your estimate: 40
Your Guess number is less than the Computer Guess number.
Enter your estimate: 62
Your Guess number is greter than the Computer Guess number.
Enter your estimate: 51
Your Guess number is greter than the Computer Guess number.
Enter your estimate: 45
Your Guess number is greter than the Computer Guess number.
Enter your estimate: 42
Hureyy! Your guess is right!

*/
