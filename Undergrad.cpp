#include<iostream>
#include<stdlib.h>
#include"Undergrad.h"

using namespace std;

Undergrad::Undergrad(string names, string IDs, string standing)
{
  cout << "Undergrad object created!\n";
  name = names;
  studentID = IDs;
  classStanding = standing;
  //cout << "name = " << name << "\nstudentID = " << studentID << "\nclassStanding = " << classStanding << endl;
}

string Undergrad::getStanding()
{
  return classStanding;
}

void Undergrad::print()
{
  cout << "The student name is: " << name << endl;
  cout << "The student ID is: " << studentID << endl;
  cout << "The student class standing is: " << classStanding << endl;
}

void Undergrad::enroll(int courseID)
{

}

Undergrad::~Undergrad()
{}
