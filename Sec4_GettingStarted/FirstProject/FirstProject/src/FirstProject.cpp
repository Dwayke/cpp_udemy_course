// FirstProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int favorite_number;

int main()
{
    std::cout << "Please, Enter your favorite number between 1 and 100: ";
	std::cin >> favorite_number;
	if (favorite_number&&favorite_number>=1&&favorite_number<=100)
	{
		std::cout << "Great! That's my favorite number too!\n";
		std::cout << "No really! " << favorite_number << " is my favorite number too!\n";
	}
	else
	{
		std::cout << "Not a valid entry";
	}
}
