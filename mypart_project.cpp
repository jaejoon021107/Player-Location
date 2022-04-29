// mypart_project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//function that gives a player money every turn 
//handle player movement passgo true and false

void playerMove(int location)
{
	bool passgo;

	if (location > 0) {
		passgo = true;
	}

	else {
		passgo = false;
	}
	switch (location) {
	case 0:
		cout << "You're in spot 0." << endl;
		passgo = true;
		break;
	case 1: 
		cout << "You're in spot 1." << endl;
		break;
	case 2:
		cout << "You're in spot 2." << endl;
		break;
	case 3:
		cout << "You're in spot 3." << endl;
		break;
	case 4:
		cout << "You're in spot 4." << endl;
		break;
	case 5:
		cout << "You're in spot 5." << endl;
		break;
	case 6:
		cout << "You're in spot 6." << endl;
		break;
	case 7:
		cout << "You're in spot 7." << endl;
		break;
	case 8:
		cout << "You're in spot 8." << endl;
		break;
	case 9:
		cout << "You're in spot 9." << endl;
		break;
	case 10:
		cout << "You're in spot 10." << endl;
		break;
	case 11:
		cout << "You're in spot 11." << endl;
		break;
	case 12:
		cout << "You're in spot 12." << endl;
		break;
	case 13:
		cout << "You're in spot 13." << endl;
		break;
	case 14:
		cout << "You're in spot 14." << endl;
		break;
	case 15:
		cout << "You're in spot 15." << endl;
		break;
	case 16:
		cout << "You're in spot 16." << endl;
		break;
	case 17:
		cout << "You're in spot 17." << endl;
		break;
	case 18:
		cout << "You're in spot 18." << endl;
		break;
	case 19:
		cout << "You're in spot 19." << endl;
		break;
	case 20:
		cout << "You're in spot 20." << endl;
		break;
	case 21:
		cout << "You're in spot 21." << endl;
		break;
	case 22:
		cout << "You're in spot 22." << endl;
		break;
	case 23:
		cout << "You're in spot 23." << endl;
		break;
	case 24:
		cout << "You're in spot 24." << endl;
		break;
	case 25:
		cout << "You're in spot 25." << endl;
		break;
	case 26:
		cout << "You're in spot 26." << endl;
		break;
	case 27:
		cout << "You're in spot 27." << endl;
		break;
	case 28:
		cout << "You're in spot 28." << endl;
		break;
	case 29:
		cout << "You're in spot 29." << endl;
		break;
	case 30:
		cout << "You're in spot 30." << endl;
		break;
	case 31:
		cout << "You're in spot 31." << endl;
		break;
	case 32:
		cout << "You're in spot 32." << endl;
		break;
	case 33:
		cout << "You're in spot 33." << endl;
		break;
	case 34:
		cout << "You're in spot 34." << endl;
		break;
	case 35:
		cout << "You're in spot 35." << endl;
		break;
	case 36:
		cout << "You're in spot 36." << endl;
		break;
	case 37:
		cout << "You're in spot 37." << endl;
		break;
	case 38:
		cout << "You're in spot 38." << endl;
		break;
	case 39:
		cout << "You're in spot 39." << endl;
		break;
	case 40:
		cout << "You're in spot 40." << endl;
		break;

	}
	
}
  

int main()
{
	int usrMove = 23;
	playerMove(usrMove);
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln fil