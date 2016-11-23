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
#define MAX 100

using namespace std;

int main()
{
  cout << "Welcome user!" << endl;

  vector <Student *> studentVec(10);
  vector <Teacher *> teacherVec(10);
  vector <Course *> courseVec(10);
  vector <Department *> departmentVec(10);
  vector <Person *> personVec(MAX);

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

  int f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, m = 0, n = 0, p = 0, r = 0, s = 0;
  string teachersArray[MAX];
  string studentsArray[MAX];
  string coursesArray[MAX];
  string departmentsArray[MAX];
  string names[MAX];
  string id[MAX];
  string grad[MAX];
  string standing[MAX];
  string level[MAX];
  string age[MAX];
  string gender[MAX];

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

  for(j = 0, m = 1, n = 2, p = 3, r = 4, s = 5; s < i; j+=6, m+=6, n+=6, p+=6,r+=6,s+=6)
  {
    names[j] = studentsArray[j];
    id[m] = studentsArray[m];
    grad[n] = studentsArray[n];
    standing[p] = studentsArray[p];
    level[r] = studentsArray[r];
    gender[s] = studentsArray[s];

    //cout << "names[" << j << "] = " << names[j] << " id[" << m << "] = " << id[m] << " grad[" << n << "] = " << grad[n] << " standing[" << p << "] = " << standing[p] << " level[" << r << "] = " << level[r] << " gender[" << s << "] = " << gender[s] << endl;
  }

/*-----------------------STUDENT OBJECT CREATION------------------------------*/

for (k = 0, j = 0, m = 1, n = 2, p = 3, r = 4, s = 5; k <= 9; k++, j+=6, m+=6, n+=6, p+=6,r+=6,s+=6)
{
  if (grad[n] == "U")
  {
    studentVec[k] = new Undergrad(names[j], id[m], standing[p], gender[s]);
  }
  else if(grad[n] == "G")
  {
    studentVec[k] = new Grad(names[j], id[m], standing[p], level[r], gender[s]);
  }
}

/*-----------------------TEACHER ARRAY STORING--------------------------------*/

  for(j = 0, m = 1, n = 2, p = 3, r = 4; r < h; j+=5, m+=5, n+=5, p+=5,r+=5) //While not the end of file, loop.
  {
    names[j] = teachersArray[j];
    id[m] = teachersArray[m];
    age[n] = teachersArray[n];
    level[p] = teachersArray[p];
    gender[r] = teachersArray[r];

    //cout << "names[" << j << "] = " << names[j] << " id[" << m << "] = " << id[m] << " age[" << n << "] = " << age[n] << " level[" << p << "] = " << level[p] << endl;
  }

/*-----------------------TEACHER OBJECT CREATION------------------------------*/

  for (k = 0, j = 0, m = 1, n = 2, p = 3, r = 4; k <= 9; k++, j+=5, m+=5, n+=5, p+=5, r+=5)
  {
    personVec[k] = new Teacher(names[j], id[m], age[n], level[p], gender[r]);
  }

/*-----------------------COURSES ARRAY STORING--------------------------------*/

  for(j = 0, m = 1, n = 2; m < g; j+=3, m+=3, n+=3) //While not the end of file, loop.
  {
    id[j] = coursesArray[j];
    names[m] = coursesArray[m];
    level[n] = coursesArray[n];

    //cout << "id[" << j << "] = " << id[j] << " names[" << m << "] = " << names[m] << endl;
  }

/*-----------------------COURSES OBJECT CREATION------------------------------*/

  for (k = 0, j = 0, m = 1, n = 2; k <= 9; k++, j+=3, m+=3, n+=3)
  {
    courseVec[k] = new Course(id[j], names[m], level[n]);
  }

/*-----------------------DEPARTMENT ARRAY STORING-----------------------------*/

  for(j = 0, m = 1; m < f; j+=2, m+=2) //While not the end of file, loop.
  {
    id[j] = departmentsArray[j];
    names[m] = departmentsArray[m];
  }


/*----------------------DEPARTMENT OBJECT CREATION----------------------------*/

  for (k = 0, j = 0, m = 1; k <= 9; k++, j+=2, m+=2)
  {
    departmentVec[k] = new Department(id[j], names[m]);
  }

/*------------------------------TESTING---------------------------------------*/

  // TESTING TO PRINT TEACHER FROM VECTOR //
  cout << "\n\n\n\nTEACHER OBJECT PRINTED FROM VECTOR\n\n";

  //This is running the friend DISPLAY function in Course class to access the private data variable NAME in Teacher class
  cout << "\n\n\n TESTING DISPLAY FUNCTION IN COURSE CLASS:\n";
  //courseVec[0]->display(*teacherVec[0]);
  cout << endl;


  personVec[0]->print();
  //teacherVec[0]->print();

  //succesfull program termination
  return 0;
}
