#pragma once
#include "Admin.h"
class mainMenu :
    public Admin
{
private:                                  //Fuck you 
    int logInButton;
public:
    void Login() override;      //Hello
    void Register() override;
    void starterOfApp();                        //display of starting the app 
};

