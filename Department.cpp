#include<iostream>
#include<stdlib.h>
#include"Department.h"

using namespace std;

int static countStudentName = 0;
int static countStudentID = 0;
int static countTeacherName = 0;
int static countTeacherID = 0;
int static countCourseName = 0;
int static countCourseID = 0;

Department::Department(string ID, string name)
{
  //cout << "\nDepartment object created!\n";

  departmentID = ID;
  //cout << "departmentID = " << departmentID << endl;

  departmentName = name;
  //cout << "departmentName = " << departmentName << endl;

}

/*void Department::setCourseToDepartment(string name, string id, string teacher, string idTeach, string students[], string ids[])
{
  unsigned int j = 0;

  coursesInDep[countCoursesEnrolled] = name;
  countCoursesEnrolled++;
  coursesInDep[countCoursesEnrolled] = id;
  countCoursesEnrolled++;

  teachersInDep[countTeachersEnrolled] = teacher;
  countTeachersEnrolled++;
  teachersInDep[countTeachersEnrolled] = idTeach;
  countTeachersEnrolled++;

  for (unsigned int i = countStudentsEnrolled; j < students->size(); j++)
  {
    studentsInDep[i] = students[j];
    countStudentsEnrolled++;
    i++;
    j++;
    studentsInDep[i] = students[j];
    countStudentsEnrolled++;
    i++;
  }

}
*/

void Department::setCourse(string name, string id)
{
  courseNameInDep[countCourseName] = name;
  courseIDInDep[countCourseID] = id;
  cout << "courseNameInDep[" << countCourseName << "] = " << courseNameInDep[countCourseName] << endl;
  cout << "courseIDInDep[" << countCourseID << "] = " << courseIDInDep[countCourseID] << endl;
  countCourseName++;
  countCourseID++;
}

void Department::setTeacher(string name, string id)
{
  teacherNameInDep[countTeacherName] = name;
  teacherIDInDep[countTeacherID] = id;
  countTeacherName++;
  countTeacherID++;

}

void Department::setStudent(string name, string id)
{
  studentNameInDep[countStudentName] = name;
  studentIDInDep[countStudentID] = id;
  countStudentName++;
  countStudentID++;
}

string Department::getDepartmentID()
{
  return departmentID;
}

void Department::printAllTeachers()
{
  for (int i = 0; i < countTeacherID; i++)
  {
    if (teacherIDInDep[countTeacherID] != "")
    {
      cout << teacherIDInDep[countTeacherID] << " - " << teacherNameInDep[countTeacherName] << endl;
    }
  }
}

void Department::printAllStudents()
{
  for (int i = 0; i < countStudentID; i++)
  {
    if (studentIDInDep[countStudentID] != "")
    {
      cout << studentIDInDep[countStudentID] << " - " << studentNameInDep[countStudentName] << endl;
    }
  }
}

void Department::printAllCourses()
{
  for (int i = 0; i < countCourseID; i++)
  {
    if (courseIDInDep[countCourseID] != "")
    {
      cout << courseIDInDep[countCourseID] << " - " << courseNameInDep[countCourseName] << endl;
    }
  }
}

Department::~Department()
{
  // Empty body constructor //
}
