// File Name:     Lab Problem 8.1
// Author:        William Inkrott
// Date:          10/31/24
// Description:   Determine the number of vowels in an inputted character. 

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int countVowel(string str);

int main(void)
{
	string input;
	int numVowels;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		cin >> input;
		if (input == "Q") break;
		numVowels = countVowel(input);
		cout << "Vowel Count: " << numVowels << endl;
	}
	return 0;
}

int countVowel(string input)
{
	int numOfVowels = 0;
	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == 'a' or input[i] == 'e' or input[i] == 'i' or input[i] == 'o' or input[i] == 'u' or input[i] == 'A' or input[i] == 'E' or input[i] == 'I' or input[i] == 'O' or input[i] == 'U')
		{
			numOfVowels++;
		}
	}
	return numOfVowels;
}