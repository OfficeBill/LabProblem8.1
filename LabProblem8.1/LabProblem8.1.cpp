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
int countCharacter(string str);

int main(void)
{
	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q") break;

	}
	return 0;
}

int countCharacter(string str)
{
	int numofcharacters;
	numofcharacters = str.length();
	return numofcharacters;
}