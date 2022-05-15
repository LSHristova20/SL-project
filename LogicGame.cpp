#include <iostream>

using namespace std;

int main()
{
	int choice;
	bool calcOn = true;
	char op;
	float num1, num2;
	// The title
	cout << "===================================================== \n";
	cout << " \t\tLogic game project\t \n ";
	cout << "===================================================== \n";
	
		// The menu
	while (calcOn != false) {
		cout << "*******************************\n";
		cout << " 1 - Our Team.\n";
		cout << " 2 - Guide.\n";
		cout << " 3 - Logic game\n";
		cout << " 4 - Exit.\n";
		cout << "*******************************\n";
		cout << " Enter your choice and press return: ";
		
		cin >> choice;
