#include<iostream>
#include<stdlib.h>
#include"Department.h"

using namespace std;

Department::Department()
{}

int Department::getUniversityID()
{
  return universityID = 0;
}

void Department::setDepartmentID(int ID)
{
    departmentID = ID;
}

int Department::getDepartmentID()
{
  return departmentID = 0;
}



Department::~Department()
{
  // Empty body constructor //
}
