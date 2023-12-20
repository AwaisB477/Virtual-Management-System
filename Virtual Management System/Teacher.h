#pragma once
#include<iostream>
using namespace std;
#include "Admin.h"
class Teacher :
    public Admin
{
private:
    string Email, Password, reTypePassword;
    string courses[10] = { "Thermo","NA"};//initialized the list of courses to avoid any junk.
    string courseName;
    string studentCall[5] = { "NA" };

public:
    void courseEligibility(string);             
    void startLiveClass(string);
    void linkGenerator(string);
    void invitationForStudent();
    void createAssignment();
    void createAcourse(string);
    void displayOfCreatedCourses();
    void Register() override;
    void Login() override;
    void featuresForTeacher();
    int options();
    //virtual void liveClass()=0;
};

