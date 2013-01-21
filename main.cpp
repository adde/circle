// TestApp 2013-01-20

#include <iostream>
#include "Circle.h"

using namespace std;

void calcArea()
{
	int radius = 0;

	cout << "Enter radius of the circle: " << endl;
	cin >> radius;

	Circle c = Circle((int)radius);

	cout << "The circle with a radius of " << radius << " has a area of " << c.Area() << endl << endl;
}

void calcCircum()
{
	int radius = 0;

	cout << "Enter radius of the circle: " << endl;
	cin >> radius;

	Circle c = Circle((int)radius);

	cout << "The circle with a radius of " << radius << " has a circumference of " << c.Circumference() << endl << endl;
}

bool menu()
{
	int choice;

	cout << "------------------" << endl;
	cout << "Circle" << endl;
	cout << "------------------" << endl;
	cout << "Select your command:" << endl;
	cout << "1. Calculate area" << endl;
	cout << "2. Calculate circumference" << endl;
	cout << "3. Exit" << endl << endl;
	cout << "Your choice: " << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		calcArea();
		break;
	case 2:
		calcCircum();
		break;
	case 3:
		//exits the program
		return false;
		break;
	default:
		cout << "You did not enter a valid option, try again!" << endl << endl;
		break;
	}

	return true;
}

int main()
{
	bool loopProg = true;

	while(loopProg)
	{
		// menu loop
		loopProg = menu();
	}
	
	return 0;
}