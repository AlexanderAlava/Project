#include<iostream>
#include<stdlib.h>
#include"Person.h"

using namespace std;

Person::Person()
{
  name = "nobody";
  gender = "N/A";
  universityID = 0000;
  age = 0;
}

void Person::print()
{
  cout << "Maybe not needed in this class." << endl;
}

Person::~Person()
{
  // Empty body destructor //
}
