#include<iostream>
#include<stdlib.h>
#include"Student.h"

// Declaring and initializing a static counter variable //
static int courseCount = 0;

Student::Student()
{
  // Empty body constructor as no student objects will be instatiated //
}

// Defining the function where course names are being stored by each student //
void Student::setCourse(string course)
{
  // Assigning the course name to an index of the array in student //
  courseEnrolled[courseCount] = course;

  // Incrementing the static variable //
  courseCount++;
}

// Defining the print function for the courses assigned to the student //
void Student::printCoursesEnrolled()
{
  // Declaring and initializing a boolean variable that will serve as a flag //
  bool flagEnrolled = true;

  // Establishing a for loop that will run through all the elements in the array needed //
  for (int i = 0; i < courseCount; i++)
  {
    // Checking if the current index position is empty //
    if (courseEnrolled[i] != "")
    {
      // Printing the information requested //
      cout << courseEnrolled[i] << endl;

      // Setting the flag to false so that the error message is not printed //
      flagEnrolled = false;
    }
  }

  // Checking if the courseEnrolled array is empty //
  if (flagEnrolled)
  {
    // Printing an informational message //
    cout << "\nThe student that you requested is a graduate student. Therefore, he is not enrolled as a student on any of the courses in the system!\n";
  }
}

void Student::print()
{
  // Empty body function //
}

Student::~Student()
{
  // Empty body destructor //
}
