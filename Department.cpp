#include<iostream>
#include<stdlib.h>
#include"Department.h"

using namespace std;

Department::Department(string ID, string name)
{
  cout << "\nDepartment object created!\n";

  departmentID = ID;
  cout << "departmentID = " << departmentID << endl;

  departmentName = name;
  cout << "departmentName = " << departmentName << endl;

}

string Department::getDepartmentID()
{
  return departmentID;
}

Department::~Department()
{
  // Empty body constructor //
}
