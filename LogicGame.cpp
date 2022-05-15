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
			
		case 2:
			// This is the guide for the application
      cout << endl;
			cout << "To play the logic game you just have to...\n";
      cout << endl;
		
			break;
			
		case 3:
      cout << endl;
			cout << "To be continued...\n";
      cout << endl;
			break;
			
		case 4:
			// The exit of the program
			cout << "End of Program.\n";
			calcOn = false;
			break;
			
		// if you write a number above 4 it will show "Not a Valid Choice." and "Choose again."
		default:
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			cin >> choice;
			break;
		}
		
		}
	//The end of the program
	return 0;
}
