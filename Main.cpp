//Main test driver file
// Change to test github //

#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
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
  char generalChoice;
  char studentChoice;
  vector <Person> universitySystem;
  cout << "Welcome user!";

  do
  {
    // Prompting for and reading in user input for choice //
    cout << "\nPlease enter your selection:\n" << endl;
    cout << "~ Enter s to add a new student to the system.";
    cout << "~ Enter t to add a new teacher to the system.";
    cout << "~ Enter d to add a new department to the system.";
    cout << "~ Enter c to add a new course to the system.";
    cout << "\nOtherwise, please enter character to terminate the program.\n";
    cout << "\nYour selection: ";
    cin >> generalChoice;

    // Converting choice to lowercase //
    tolower(generalChoice);

    // Establishing a switch statement to account for all different options //
    switch (generalChoice)
    {
      // Case for student //
      case 's':

        cout << "\nYou have selected to add a new student! Please select what kind of student.";
        cout << "Enter u for undergraduate or g for graduate: ";
        cin >> studentChoice;



        break;

      // Case for teacher //
      case 't':

        break;

      // Case for department //
      case 'd':

        break;

      // Case for course //
      case 'c':

        break;

      // Case for termination //
      default:

        generalChoice = 0;
        break;
    }

  }
  while (generalChoice);




  //succesfull program termination
  return 0;
}
