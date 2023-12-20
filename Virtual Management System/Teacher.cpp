#include "Teacher.h"
#include<iostream>
#include<conio.h>
#include <string>
using namespace std;
bool endsWith(string str, string suffix) {
	int strLen = str.length();
	int suffixLen = suffix.length();

	// If the suffix is longer than the string, return false
	if (strLen < suffixLen) {
		return false;
	}

	// Compare the end of the string with the suffix
	for (int i = 0; i < suffixLen; i++) {
		if (str[strLen - suffixLen + i] != suffix[i]) {
			return false;
		}
	}

	// If all characters match, return true
	return true;
}

void Teacher::startLiveClass(string course)
{
	courseName = course;
	//cout << courseName << endl;
	courseEligibility(courseName);	   //check weather user is eligible to start class of that subject.
	

	//starting live class.
	//code generation or link generation.
	//entering the students.
	//limitation for students.
	//can be alot of features more if you want to add.

}
void Teacher::linkGenerator(string course)//generated a link to join the class for student.
{
	cout << "www.virtualManagementSystem/LiveClass/" << course << "/join" << endl;
	cout << "Link generated successfully" << endl;
}
void Teacher::invitationForStudent()//sending a call to students that class has started.
{
	//send invitaion call to students of a class to join.
}
void Teacher::courseEligibility(string course)//checking that weather the teacher is eligible to start class of this sbject.
{
	cout << "Checking the eligibility" << endl;
	for (int i = 0; i < 10; i++) 
	{
		
		if (courses[i] == course) 
		{
			cout << "Starting Class...." << endl;
			linkGenerator(course);
			break;
		}
	}
	
	//cout << "You are not eligible to start class for course "<<course << endl;
}
void Teacher::createAssignment()//creating the assignment for students.
{
	//we can use file handling or we can make a counsole base quiz etc.
	cout << "Creaing the assignment ....:" << endl;
	//counsole base quiz.
}
void Teacher::createAcourse(string course)//to add a new course in the course list.
{
	//courses[Teacher::length.courses()]->append(course);						   //to add a course in array.
	cout<<"Course added successfully"<<endl;
}
void Teacher::displayOfCreatedCourses()//dispay the list of courses.
{
	cout << "Courses are :" << endl;
	for (int i = 0; i < 10; i++) 
	{
		cout << courses[i] << endl;
	}
}
void Teacher::Register()//to register in the app as a teacher
{
	
	while (true)
	{
		
		cout << "Enter your email: " << endl;
		cin >> Email;
		cout << "Enter Password: ";
		cin >> Password;
		cout << "Re-Type Password: ";
		cin >> reTypePassword;
		if (endsWith(Email, "@gmail.com")&& (Password == reTypePassword))
		{
			cout << "Register Successfully...." << endl;
			
			break;
		}
		else {
			cout << "Password or email is wrong." << endl;
		}
		
	}
	system("cls");
	featuresForTeacher();
}

void Teacher::Login()//to get some login info from user.
{
	while (true)
	{
		cout << "Enter your email: ";
		cin >> Email;
		cout << "Enter Password: ";
		cin >> Password;
		if (endsWith(Email, "@gmail.com"))
		{	
			cout << "Login Successfully...." << endl;
			break;
		}
		else {
			cout << "Password or email is wrong." << endl;
		}
	}
	system("cls");
	featuresForTeacher();

}

void Teacher::featuresForTeacher()
{
	while (true)
	{
		int a;
		int option;
		option = options();

		if (option == 1)
		{

			string course;
			cout << "Enter a course you want to add." << endl;
			cin>>course;
			cin.ignore();
			//cout << endl;
			createAcourse(course);
			cout<<"press 1 to go back and 0 to end the program"<<endl;
			
			cin >> a;
			if (a == 1) {
				featuresForTeacher();

			}
			/*else {
				break;
			}*/
		}
		if (option == 2)
		{
			string subject;
			cout << "Enter subject for which you want to start class." << endl;
			/*getline(cin, subject);*/
			cin >> subject;
			//cin.ignore();
			cout << "Starting Live class...." << endl;
			startLiveClass(subject);
			//featuresForTeacher();
			break;
		}
		if (option == 3) {
			cout << "Not available yet" << endl;
			//featuresForTeacher();

		}
		if (option == 4)
		{
			for (int i = 0; i < 10; i++) {
				cout << "Course:" << courses[i] << "\t";
			}
			//featuresForTeacher();

		}
		
	}
		/*case 5:
		{
}
		}*/
		/*else
		{
			cout << "Invalid input." << endl;
			options();
			
		}
	*/
}

int Teacher::options()
{
	
		cout << "1. Create a course." << endl;
		cout << "2. Start live class" << endl;
		cout << "3.Give an Assignment to students." << endl;
		//cout << "4.Register a course." << endl;
		cout << "4.Courses register already." << endl;
		int a;
		cin >> a;
		return a;
}
