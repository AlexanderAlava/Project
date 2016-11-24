#include<iostream>
#include<stdlib.h>
#include"Person.h"

Person::Person()
{
  name = "nobody";
  gender = "N/A";
}

void Person::print()
{
  cout << "Maybe not needed in this class." << endl;
}

Person::~Person()
{
  // Empty body destructor //
}
