// CST126_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int strlen(char * x)
{
	int length = 0;
	for (*x != '\0'; x++;)
	{
		length++;
	}
	return length;
}

int charsearch(const char * searchstr, char c)
{
	int stringsize = strlen(searchstr);
	for (int i = 0; i <= stringsize; i++)
	{
		bool find{ searchstr[i] == c };
		if (find == 1)
		{
			cout << c << " is in position" << i + 1 << endl;
			break;
		}
		if (i == stringsize)
		{
			cout << c << " is in position -1" << endl;
			break;
		}
	}
	return 0;
}

int main()
{
	const char * string("I was born with a plastic spoon in my mouth.");
	int stringsize = strlen(string);
	cout << stringsize;
	
	cout << string << endl;
	charsearch(string, 'i');
	charsearch(string, 'I');
	charsearch(string, 'w');
	charsearch(string, 'z');
	charsearch(string, 'r');
	cout << endl;

	const char * string2("");
	cout << string2 << endl;
	charsearch(string2, 'y');

	string = nullptr;
	string2 = nullptr;

	return 0;

}

