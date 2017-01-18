#include<iostream>
#include<stdlib.h>
#include"Course.h"

using namespace std;

// Declaring and initializing static integer count variables //
static int countTA = 0;
static int countStudent = 0;

Course::Course(string ID, string name, string underGrad)
{
  // Initializing the ID of the course from the specified parameter if valid //
  if (ID[0] == '-')
  {
    courseID = "N/A";
  }
  else
  {
    courseID = ID;
  }

  // Initializing the name of the course from the specified parameter //
  courseName = name;

  // Checking the lever of the course and assigning the respective string //
  if (underGrad == "U")
  {
    level = "Undergraduate";
  }
  else if (underGrad == "G")
  {
    level = "Graduate";
  }
}

// Defining member function that will be used as a flag //
bool Course::isGraduate()
{
  // Assigning a dummy variable to be returned //
  bool temp = true;
  return temp;
}

// Defining member function that will be used as a flag //
bool Course::isTeacher()
{
  // Assigning a dummy variable to be returned //
  bool temp = true;
  return temp;
}

// Defining member function that will be used as a flag //
bool Course::isTA()
{
  // Assigning a dummy variable to be returned //
  bool temp = true;
  return temp;
}

// Defining a function that will access a private data member //
string Course::getCourseID()
{
  // Returning the ID of the course //
  return courseID;
}

// Defining the function that will assign a teacher to this course //
void Course::setTeacher(Person &teacher)
{
  // Assigning the name of the teacher to the variable created for that purpose //
  teacherName = teacher.name;
}

// Defining the function that will assign a TA to this course //
void Course::setTA(Person &ta)
{
  // Assigning the name of the TA to the array created for that purpose //
  assistantNames[countTA] = ta.name;

  // Incrementing counter //
  countTA++;
}

// Defining the function that will assign a student to this course //
void Course::setStudents(Person &person)
{
  // Assigning the name of the student to the array created for that purpose //
  studentNames[countStudent] = person.name;

  // Assigning the ID of the student to the array created for that purpose //
  studentIDs[countStudent] = person.universityID;

  // Declaring and initializing variables to be used in the grade assignment //
  string grade = "";
  int numericGrade = 0;

  // Creating a random generator object //
  numericGrade = rand() % 100 + 1;

  // Converting the numeric value from the random generator to a letter grade //
  if(numericGrade <= 59)
  {
    grade = "F";
  }
  else if(numericGrade >= 60 && numericGrade <= 69)
  {
    grade = "D";
  }
  else if(numericGrade >= 70 && numericGrade <= 79)
  {
    grade = "C";
  }
  else if(numericGrade >= 80 && numericGrade <= 89)
  {
    grade = "B";
  }
  else if(numericGrade >= 90 && numericGrade <= 100)
  {
    grade = "A";
  }
  else
  {
    grade = "F";
  }

  // Assigning the grade to the specific student related to the current index //
  studentGrades[countStudent] = grade;

  // Incrementing counter //
  countStudent++;
}

// Declaring a function that will access a private data member //
string& Course::getGrades(int index)
{
  // Returning the student grade at the current index //
  return studentGrades[index];
}

// Declaring a function that will access a private data member //
string Course::getCourseName()
{
  // Returning the course name //
  return courseName;
}

// Defining the function that will print the teacher and the TAs assigned to the course //
void Course::printTeachersAssigned()
{
  // Declaring and initializing an integer variable //
  int i = 0;

  // Printing the name of the teacher in a specific format //
  cout << "\nTeacher for " << courseName << " is: " << teacherName << endl;

  // Printing header for the names of the TA(s) //
  cout << "\nTA(s) enrolled in " << courseName << " are: " << endl;

  // Establishing a while loop that will run through all the elements in the array needed //
  while(i < countTA)
  {
    // Checking if the current index of the array is empty //
    if (assistantNames[i] != "")
    {
      // Printing the name of the TA at the current index //
      cout << assistantNames[i] << endl;
    }

    // Incrementing index variable //
    i++;
  }

}

// Defining function that will print the students enrolled in the course //
void Course::printStudentsCourse()
{
  // Printing header for the students //
  cout << "Students enrolled in " << courseName << " are: " << endl;

  // Establishing a for loop that will run through all the elements in the array needed //
  for (int i = 0; i < countStudent; i++)
  {
    // Checking if the current index of the array is empty //
    if (studentIDs[i] != "")
    {
      // Printing the ID of the student together with the name //
      cout << studentIDs[i] << " - " << studentNames[i] << endl;

      // Printing the grade of the student in the current course //
      cout << "Grade: " << studentGrades[i] << endl;
    }
  }
}

// Declaring a function that will access a private data member //
string & Course::getNamesStudentsEnrolled(int index)
{
  // Returning the student name at the current index //
  return studentNames[index];
}

// Declaring a function that will access a private data member //
string & Course::getIDStudentsEnrolled(int index)
{
  // Returning the student ID at the current index //
  return studentIDs[index];
}

// Declaring a function that will access a private data member //
string Course::getTeacher()
{
  // Returning the teacher name //
  return teacherName;
}

Course::~Course()
{
  // Empty body destructor //
}
