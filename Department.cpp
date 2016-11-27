#include<iostream>
#include<stdlib.h>
#include"Department.h"

using namespace std;

Department::Department(string ID, string name)
{
  //cout << "\nDepartment object created!\n";

  departmentID = ID;
  //cout << "departmentID = " << departmentID << endl;

  departmentName = name;
  //cout << "departmentName = " << departmentName << endl;

}

string Department::getDepartmentID()
{
  return departmentID;
}

void Department::printAllTeachers()
{
  cout << "\n\nALL TEACHERS!\n\n";
}

void Department::printAllStudents()
{
  cout << "\n\nALL STUDENTS!\n\n";
}

void Department::printAllCourses()
{
  cout << "\n\nALL COURSES!\n\n";
}

Department::~Department()
{
  // Empty body constructor //
}
