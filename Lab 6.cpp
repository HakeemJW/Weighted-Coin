// C++ Program			Lab 06.cpp
// Course				CSE1311/W01
// Name:				Hakeem Wilson
// Assignment #:		Lab 6 
// Due Date:			3/10/2019

/*This program has three purposes.
It uses pass by value function to shorten the length of the main method.
The three functions: print out prime nubers to a value n,
Toss a weighted coin,
and determine if an integer is even or odd.
These are called to in a switch statement.*/


#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <time.h>

using namespace std;

//Prime Number Function
int PrimeNumber(int g)
{
	int num, i, count;
	cout << "Enter max range: ";
	for (num = 1; num <= g; num++) {
		count = 0;
		for (i = 2; i <= num / 2; i++) {
			if (num%i == 0) {
				count++;
				break;
			}
		}

		if (count == 0 && num != 1)
			cout << num <<" ";
	}
	return 0;
	return 0;
}

//Weighted Coin Function
int WeightedCoin(int f)
{
	//Random Seed Generator
	unsigned int seed;
	seed = time(0);
	srand(seed);

	//Assigning Variables
	int number, heads = 0, tails = 0, total = 0;
	float percentage;

	//For loop for repetition
	for (int counter = 0; counter < f; ++counter, ++total)
	{
		number = rand() % 100 + 1;
		if (number <= 60)
			heads++;
		else
			tails++;
	}

	//Output
	cout << endl;
	cout << "Times coin landed on Heads: " << heads << "\t" << "Times coin landed on Tails: " << tails << endl;
	cout << endl;
	cout << "The total number of tosses was: " << total << endl;
	cout << endl;

	//Percentage Calculation
	percentage = (float(heads) / total) * 100;
	cout << "The coin lands on Heads " << percentage << "% of the time" << endl;

	return 0;

}

//Even or Odd
int EvenOdd(int k)
{
	if (k % 2 == 0)
		cout << k << " is even." << endl;
	else
		cout << k << " is odd." << endl;
	return 0;
}

//Main Method
int main()
{
	//Main Method Variables
	int n, choice = 0, answer;

	while (choice != -1)
	{
		//Menu Prompt
		cout << "Select which function you would like to use." << endl;
		cout << endl;
		cout << "Prime Number" << "\t" << "Weighted Coins" << "\t" << "Even Odd" << endl;
		cout << "Type 1" << "\t\t" << "Type 2" << "\t\t" << "Type 3" << endl;
		cout << endl;
		cout << "Type -1 to exit the program." << endl;
		cin >> choice;
		cout << endl;

		//Switch Statement for Menu Response
		switch (choice)
		{
		case 1:
			cout << "Type in an integer to print the preceding prime numbers." << endl;
			cin >> n;
			cout << "The Prime numbers are: " << endl;
			answer = PrimeNumber(n);
			break;

		case 2:
			cout << "How many times would you like to toss the coin?" << endl;
			cin >> n;
			cout << endl;
			cout << "The results of the coin toss are: " << endl;
			answer = WeightedCoin(n);
			break;

		case 3:
			cout << "Type in an integer" << endl;
			cin >> n;
			cout << endl;
			cout << "The integer: " << endl;
			answer = EvenOdd(n);
			break;

		default: cout << "Bad Code" << endl;

		}
	}
	cout << "This program was coded by Hakeem Wilson." << endl;
	system("PAUSE");
	return 0;
}

