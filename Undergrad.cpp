#include<iostream>
#include<stdlib.h>
#include"Undergrad.h"

using namespace std;

Undergrad::Undergrad(string a, string b, string c)
{
  cout << "Object created!\n";
}

void Undergrad::setStanding()
{
  cout << "What is the class standing for this student?" << endl;
  cout << "Class standing: ";
  cin >> classStanding;
  cout << "Class standing set to: " << classStanding << endl;
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
