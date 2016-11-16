#include<iostream>
#include<stdlib.h>
#include"Grad.h"

using namespace std;

Grad::Grad()
{
  int choice;
  cout << "Enter the student name." << endl;
  cout << "Student Name: ";
  cin >> name;
  cout << "Student name set to: " << name << endl;

  cout << "Please enter the Student ID." << endl;
  cout << "Student ID: ";
  cin >> studentID;
  cout << "Student ID set to " << studentID << endl;

  cout << "What type of Graduate Student?" << endl;
  cout << "1. Masters" << endl;
  cout << "2. Doctoral (PhD)" << endl;
  cin >> choice;
  while(choice != 1 || choice != 2)
  {
    cout << "Invalid selection. Please enter 1 or 2: ";
    cin >> choice;
  }
  switch (choice)
  {
    case 1:
      isDoctoral = false;
      graduateType = "Masters";
      cout << "Student is now a " << graduateType << " student." << endl;
      break;
    case 2:
      isDoctoral = true;
      graduateType = "Doctoral";
      cout << "Student is now a " << graduateType << " student." << endl;
      break;
  }

  cout << "Will this student be a: ";
  cout << "1. TA (Teacher Asssitant)" << endl;
  cout << "2. RA (Research Assistant)" << endl;
  cout << "Please enter 1 or 2: ";
  cin >> choice;
  while(choice != 1 || choice != 2)
  {
    cout << "Invalid selection. Please enter 1 or 2: ";
    cin >> choice;
  }
  switch (choice)
  {
    case 1:
      isTA = true;
      cout << "Student is now a TA." << endl;
      break;
    case 2:
      isTA = false;
      cout << "Student is now an RA." << endl;
      break;
  }
}

bool Grad::isTeacherAssistant()
{
  return isTA;
}

bool Grad::isMasters()
{
  return isDoctoral;
}

void Grad::print()
{
  cout << "This is a Graduate student." << endl;
}

Grad::~Grad()
{}
