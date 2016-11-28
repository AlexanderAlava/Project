#include<iostream>
#include<stdlib.h>
#include"Department.h"

using namespace std;

// Declaring and initializing static integer count variables //
int static countStudentName = 0;
int static countStudentID = 0;
int static countTeacherName = 0;
int static countTeacherID = 0;
int static countCourseName = 0;
int static countCourseID = 0;

Department::Department(string ID, string name)
{
  // Initializing the ID of the department from the specified parameter if valid //
  if (ID[0] == '-')
  {
    departmentID = "N/A";
  }
  else
  {
    departmentID = ID;
  }

  // Initializing the name of the department from the specified parameter //
  departmentName = name;
}

// Defining the function that will assign a course to the department //
void Department::setCourse(string name, string id)
{
  // Assigning the name of the course to the array index created for that function //
  courseNameInDep[countCourseName] = name;

  // Assigning the ID of the course to the array index created for that function //
  courseIDInDep[countCourseID] = id;

  // Incrementing counters //
  countCourseName++;
  countCourseID++;
}

// Defining the function that will assign a teacher to the department //
void Department::setTeacher(string name, string id)
{
  // Assigning the name of the teacher to the array index created for that function //
  teacherNameInDep[countTeacherName] = name;

  // Assigning the ID of the teacher to the array index created for that function //
  teacherIDInDep[countTeacherID] = id;

  // Incrementing counters //
  countTeacherName++;
  countTeacherID++;

}

// Defining the function that will assign a student to the department //
void Department::setStudent(string name, string id)
{
  // Assigning the name of the student to the array index created for that function //
  studentNameInDep[countStudentName] = name;

  // Assigning the ID of the student to the array index created for that function //
  studentIDInDep[countStudentID] = id;

  // Incrementing counters //
  countStudentName++;
  countStudentID++;
}

// Defining a function to access a private data member //
string Department::getDepartmentID()
{
  // Returning the departmentID //
  return departmentID;
}

// Defining the print function for all the teachers //
void Department::printAllTeachers()
{
  // Printing an extra white space for styling purposes //
  cout << "\n";

  // Establishing a for loop that will run through all the elements of the array needed //
  for (int i = 0; i < countTeacherID; i++)
  {
    // Checking if the current index of the array is empty //
    if (teacherIDInDep[i] != "")
    {
      // Printing the required information for the teahcers in the department //
      cout << teacherIDInDep[i] << " - " << teacherNameInDep[i] << endl;
    }
  }
}

// Defining the print function for all the students //
void Department::printAllStudents()
{
  // Printing an extra white space for styling purposes //
  cout << "\n";

  // Establishing a for loop that will run through all the elements of the array needed //
  for (int i = 0; i < countStudentID; i++)
  {
    // Checking if the current index of the array is empty //
    if (studentIDInDep[i] != "")
    {
      // Printing the required information for the students in the department //
      cout << studentIDInDep[i] << " - " << studentNameInDep[i] << endl;
    }
  }
}

// Defining the print function for all the courses //
void Department::printAllCourses()
{
  // Printing an extra white space for styling purposes //
  cout << "\n";

  // Establishing a for loop that will run through all the elements of the array needed //
  for (int i = 0; i < countCourseID; i++)
  {
    // Checking if the current index of the array is empty //
    if (courseIDInDep[i] != "")
    {
      // Printing the required information for the courses in the department //
      cout << courseIDInDep[i] << " - " << courseNameInDep[i] << endl;
    }
  }
}

Department::~Department()
{
  // Empty body constructor //
}
