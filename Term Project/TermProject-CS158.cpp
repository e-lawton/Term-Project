#include<iostream>
using namespace std;


int main()
{
	int option, stdID, recordNum;
	float midtermGrade, finalGrade;
	string fname, lname;
	//const int MAX_OPTION = 5;


	/*cout << "Please select one of the following options: \n" "[1]: Add a new student record.\n" "[2]: Delete a student record. \n" "[3]: Display all student records. \n" 
	"[4]: Show a student record by ID. \n" "[5]: Edit a student record. \n" "[6]: Exit." << endl;
	cout << "Choose an option from 1 to 6: ";
	cin >> option;*/
			/*switch (option)
			{
			case 1:
			{
				cout << "Please enter the following information to add a new student record. \n";
				cout << "Enter first name: ";
				cin >> fname;
				cout << "Enter last name: ";
				cin >> lname;
				cout << "Enter student id number: ";
				cin >> stdID;
				cout << "Enter the midterm grade: ";
				cin >> midtermGrade;
				cout << "Enter the final grade: ";
				cin >> finalGrade;
				cout << "Student information saved sucessfully!" << endl;
				break;
			case 2:
				cout << "Enter a record number between 1 to 20: " << endl;
				cout << "Student information deleted sucessfully!" << endl;
				break;
			}
			}*/
		do
		{
			cout << "Please select one of the following options: \n" "[1]: Add a new student record.\n" "[2]: Delete a student record. \n" "[3]: Display all student records. \n"
				"[4]: Show a student record by ID. \n" "[5]: Edit a student record. \n" "[6]: Exit." << endl;
			cout << "Choose an option from 1 to 6: ";
			cin >> option;
			if (option == 1)
			{
				cout << "Please enter the following information to add a new student record. \n";
				cout << "Enter first name: ";
				cin >> fname;
				cout << "Enter last name: ";
				cin >> lname;
				cout << "Enter student id number: ";
				cin >> stdID;
				cout << "Enter the midterm grade: ";
				cin >> midtermGrade;
				cout << "Enter the final grade: ";
				cin >> finalGrade;
				cout << "Student information saved sucessfully!" << endl;
			}
			else (option == 2);
			{
				cout << "Enter a record number between 1 to 20: " << endl;
				cin >> recordNum;
				cout << "Student information deleted sucessfully!" << endl;
			}

		}
			 while (option != 6);

	system("Pause");
	return 0;
}