#include<iostream>
#include<stdlib.h>
#include"Undergrad.h"

using namespace std;

Undergrad::Undergrad()
{}

void Undergrad::setStanding()
{}

string Undergrad::getStanding()
{
  return classStanding = "";
}

void Undergrad::print()
{
  cout << "This is an Undergrad student." << endl;
}

Undergrad::~Undergrad()
{}
