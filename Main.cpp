//Main test driver file
// Change to test github //

#include<iostream>
#include<fstream>
#include<stdio.h>
#include<cstdlib>
#include<string>
#include<vector>
#include"Person.h"
#include"Student.h"
#include"Teacher.h"
#include"Undergrad.h"
#include"Grad.h"
#include"Department.h"
#include"Course.h"

using namespace std;

int main()
{
  cout << "Welcome user!" << endl;

  vector <Student *> studentVec(5);
  vector <Teacher *> teacherVec(3);
  vector <Course *> courseVec(5);
  vector <Department *> departmentVec(5);

/* FIX ALL OF THE COMMENTS BEFORE SUBMITTING
*  FIX ALL OF THE COMMENTS BEFORE SUBMITTING
*  FIX ALL OF THE COMMENTS BEFORE SUBMITTING
*  FIX ALL OF THE COMMENTS BEFORE SUBMITTING
*  FIX ALL OF THE COMMENTS BEFORE SUBMITTING
*  FIX ALL OF THE COMMENTS BEFORE SUBMITTING
*  FIX ALL OF THE COMMENTS BEFORE SUBMITTING
*  FIX ALL OF THE COMMENTS BEFORE SUBMITTING
*  FIX ALL OF THE COMMENTS BEFORE SUBMITTING
*  FIX ALL OF THE COMMENTS BEFORE SUBMITTING
*/

  int f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, m = 0, n = 0, p = 0;
  string teachersArray[100];
  string studentsArray[100];
  string coursesArray[100];
  string departmentsArray[100];
  string names[100];
  string id[100];
  string grad[100];
  string standing[100];
  string level[100];
  string age[100];

/*-----------------------STUDENT FILE HANDLING -------------------------------*/

  //Object of inputFileStream named inFile. Will handle file input.
  ifstream inStudent;
  //Open the file
  inStudent.open("Students.txt");

  if(inStudent.fail())
  {
    cerr << "Error while opening Students.txt" << endl;
    //Terminates the program unsuccesfully
    exit(1);
  }

  inStudent.seekg(0l);
  while(!inStudent.eof())
  {
    getline(inStudent, studentsArray[i], ',');
    i++;
  }

  inStudent.close();

/*-----------------------TEACHER FILE HANDLING -------------------------------*/

  //Object of inputFileStream named inFile. Will handle file input.
  ifstream inTeacher;
  //Open the file
  inTeacher.open("Teachers.txt");

  //Check for errors when opening the file
  if(inTeacher.fail())
  {
    cerr << "Error while opening Teachers.txt" << endl;
    //Terminates the program unsuccesfully
    exit(1);
  }

  inTeacher.seekg(0l); //Positions file-position pointer at begining of file

  while(!inTeacher.eof())
  {
    getline(inTeacher, teachersArray[h], ',');
    h++;
  }

  //close the file after done using
  inTeacher.close();

/*-----------------------COURSES FILE HANDLING -------------------------------*/

  //Object of inputFileStream named inFile. Will handle file input.
  ifstream inCourses;
  //Open the file
  inCourses.open("Courses.txt");

  //Check for errors when opening the file
  if(inCourses.fail())
  {
    cerr << "Error while opening Courses.txt" << endl;
    //Terminates the program unsuccesfully
    exit(1);
  }

  inCourses.seekg(0l); //Positions file-position pointer at begining of file

  while(!inCourses.eof())
  {
    getline(inCourses, coursesArray[g], ',');
    g++;
  }

  //close the file after done using
  inCourses.close();

/*-----------------------DEPARTMENTS FILE HANDLING ---------------------------*/

  //Object of inputFileStream named inFile. Will handle file input.
  ifstream inDepartments;
  //Open the file
  inDepartments.open("Departments.txt");

  //Check for errors when opening the file
  if(inDepartments.fail())
  {
    cerr << "Error while opening Departments.txt" << endl;
    //Terminates the program unsuccesfully
    exit(1);
  }

  inDepartments.seekg(0l); //Positions file-position pointer at begining of file

  while(!inDepartments.eof())
  {
    getline(inDepartments, departmentsArray[f], ',');
    f++;
  }

  //close the file after done using
  inDepartments.close();

/*-----------------------STUDENT ARRAY STORING -------------------------------*/

  for(j = 0; j < i; j++) //While not the end of file, loop.
  {
    //If statement that looks for the comma character. This was just a test.
    //Can be used with some math to separate items that we need from the text file
    if(j >= 0 && j <= 4)
      {
        //cout << "Index 0 - 3" << endl;
        names[j] = studentsArray[j];
        //cout << "Stored " << names[j] << " at index " << j << " of names array";
        //cout << endl;
      }
      else if(j >= 5 && j <= 9)
      {
        //cout << "Index 4 - 7" << endl;
        id[j - 5] = studentsArray[j];
        //cout << "Stored " << id[j] << " at index " << j << " of ID array";
        //cout << endl;
      }
      else if(j >= 10 && j <= 14)
      {
        //cout << "Index 8 - 12" << endl;
        grad[j - 10] = studentsArray[j];
        //cout << "Stored " << grad[j-10] << " at index " << j << " of grad array";
        //cout << endl;
      }
      else if(j >= 15 && j <= 19)
      {
        //cout << "Index greater than 11" << endl;
        standing[j - 15] = studentsArray[j];
        //cout << "Stored " << standing[j-13] << " at index " << j << " of standing array";
        //cout << endl;
      }
      else if(j >= 20 && j <= 24)
      {
        //cout << "Index greater than 11" << endl;
        level[j - 20] = studentsArray[j];
        //cout << "Stored " << level[j-20] << " at index " << j << " of level array";
        //cout << endl;
      }
  }

/*-----------------------STUDENT OBJECT CREATION------------------------------*/

  for (k = 0; k <= 4; k++)
  {
    if (grad[k] == "U")
    {
      studentVec[k] = new Undergrad(names[k], id[k], standing[k]);
    }
    else if(grad[k] == "G")
    {
      studentVec[k] = new Grad(names[k], id[k], standing[k], level[k]);
    }
  }

/*-----------------------TEACHER ARRAY STORING--------------------------------*/

  for(j = 0, m = 1, n = 2, p = 3; p < h; j+=4, m+=4, n+=4, p+=4) //While not the end of file, loop.
  {
    names[j] = teachersArray[j];
    id[m] = teachersArray[m];
    age[n] = teachersArray[n];
    level[p] = teachersArray[p];

    cout << "names[" << j << "] = " << names[j] << " id[" << m << "] = " << id[m] << " age[" << n << "] = " << age[n] << " level[" << p << "] = " << level[p] << endl;
  }

/*-----------------------TEACHER OBJECT CREATION------------------------------*/

  for (k = 0, j = 0, m = 1, n = 2, p = 3; k <= 2; k++, j+=4, m+=4, n+=4, p+=4)
  {
    teacherVec[k] = new Teacher(names[j], id[m], age[n], level[p]);
  }

/*-----------------------COURSES ARRAY STORING--------------------------------*/

  for(j = 0, m = 1; m < g; j+=2, m+=2) //While not the end of file, loop.
  {
    id[j] = coursesArray[j];
    names[m] = coursesArray[m];

    cout << "id[" << j << "] = " << id[j] << " names[" << m << "] = " << names[m] << endl;
  }

/*-----------------------COURSES OBJECT CREATION------------------------------*/

  for (k = 0, j = 0, m = 1; k <= 6; k++, j+=2, m+=2)
  {
    courseVec[k] = new Course(id[j], names[m]);
  }

/*-----------------------DEPARTMENT ARRAY STORING-----------------------------*/

  for(j = 0, m = 1; m < g; j+=2, m+=2) //While not the end of file, loop.
  {
    id[j] = departmentsArray[j];
    names[m] = departmentsArray[m];
  }


/*----------------------DEPARTMENT OBJECT CREATION----------------------------*/

  for (k = 0, j = 0, m = 1; k <= 3; k++, j+=2, m+=2)
  {
    departmentVec[k] = new Department(id[j], names[m]);
  }

  //succesfull program termination
  return 0;
}
