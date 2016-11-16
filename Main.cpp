//Main test driver file

#include<iostream>
#include<stdio.h>
#include<string>
#include"Person.h"
#include"Student.h"
#include"Teacher.h"
#include"Undergrad.h"
#include"Grad.h"
#include"Department.h"
#include"Course.h"

using namespace std;

int main()
{
  // Declaring a character variable to store user's choice //
  char choice;
  
  cout << "\nWelcome user!\n";
  
  do
  {
    cout << "\nPlease select one of the following options:\n" << endl;
    cout << "~ Enter s to create a new student in the system." << endl;
    cout << "~ Enter t to create a new teacher in the system." << endl;
    cout << "~ Enter d to create a new department in the system." << endl;
    cout << "~ Enter c to create a new course in the system." << endl;
    cout << "\nOtherwise, enter any character to terminate the program." << endl:
    cin >> choice;
    
    // Converting the user choice to lowercase in case an uppercase letter is inputted //
    tolower(choice);
    
    if (choice == 's')
    {
      // Prompt for information for student and get values //
    }
    else if (choice == 't')
    {
      // Prompt for information for teacher and get values //
    }
    else if (choice == 'd')
    {
      // Prompt for information for department and get values //
    }
    else if (choice == 'c')
    {
      // Prompt for information for course and get values //
    }
    else
    {
      choice = 'x';
    }
    
    
  } 
  while(choice != 'x');


  //succesfull program termination
  return 0;
}
