#include "mainMenu.h"
#include<iostream>
#include "Teacher.h"
Teacher t;
using namespace std;
void mainMenu::Login()
{
	
	//Teacher* s = new Student;
	cout << "Do you want to Log in as teacher press 1 OR to login as student press 0." << endl;
	cin >> logInButton;
	switch (logInButton) //To check user input and take furthur actions accordingly.
	{
	case 1://to login a teacher
	{
		t.Login();//calling the login function of teacher class.
		break;
	}
	case 0://to login as a student
	{
		//function call for a student login
		break;
	}

	
	default://if user input is out of the box this will run.
		cout << "Invalid Input." << endl;
		break;
	}
}

void mainMenu::Register()//to register in the app as a new user.
{

	cout << "Do you want to Register as teacher press 1 OR to Register as student press 0." << endl;
	cin >> logInButton;
	switch (logInButton)//checking user input and taking steps accordingly.
	{
	case 1://to register as a teacher.
	{
		t.Register();//calling register function of student class.
		break;
	}
	case 0://to register a student.
	{
		//calling the student register function.
		break;
	}


	default:
		cout << "Invalid Input." << endl;
		break;
	}

}

void mainMenu::starterOfApp()
{
	int a;
	cout << "Press 1 to Login" << endl;
	cout << "Press 0 to Register" << endl;
	cin >> a;
	switch (a)
	{
	case 0:
	{
		Register();
		break;
	}
	case 1:
	{
		Login();
		break;
	}
	default:
	{
		cout << "Invalid Input" << endl;
		break;
	}
	}
}
