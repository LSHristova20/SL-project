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
		
		switch (choice)
		{
		case 1:
			// More about our team
      cout << "---------------------------------------------------------- \n";
			cout << "Our team:\n";
      cout << "---------------------------------------------------------- \n";
			cout << "Lorena Hristova - Leader and Scrum trainer\n";
      cout << "---------------------------------------------------------- \n";
			cout << "Lorena Hristova and Svetoslav Stoilov - Back end Developers\n";
      cout << "---------------------------------------------------------- \n";
			cout << "Lorena Hristova - QA engineer\n";
      cout << "---------------------------------------------------------- \n";
			
			break;
