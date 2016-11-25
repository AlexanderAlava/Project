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

  int f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, m = 0, n = 0, p = 0, r = 0, s = 0, t = 0;
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

  for(j = 0, m = 1, n = 2, p = 3, r = 4, s = 5, t = 6; t < i; j+=7, m+=7, n+=7, p+=7,r+=7,s+=7, t+=7)
  {
    names[j] = studentsArray[j];
    id[m] = studentsArray[m];
    grad[n] = studentsArray[n];
    standing[p] = studentsArray[p];
    level[r] = studentsArray[r];
    gender[s] = studentsArray[s];
    age[t] = studentsArray[t];
  }

/*-----------------------STUDENT OBJECT CREATION------------------------------*/

for (k = 0, j = 0, m = 1, n = 2, p = 3, r = 4, s = 5, t = 6; k <= 9; k++, j+=7, m+=7, n+=7, p+=7,r+=7,s+=7, t+=7)
{
  if (grad[n] == "U")
  {
    studentVec[k] = new Undergrad(names[j], id[m], standing[p], gender[s], age[t]);
  }
  else if(grad[n] == "G")
  {
    studentVec[k] = new Grad(names[j], id[m], standing[p], level[r], gender[s], age[t]);
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
    teacherVec[k] = new Teacher(names[j], id[m], age[n], level[p], gender[r]);
  }

/*-----------------------PERSON ASSIGNMENT------------------------------------*/

  //Assigns students to Person Vector from position 0 - 4
  for(t = 0; t < 5; t++)
  {
    personVec[t] = studentVec[t];
  }
  //Assigns teachers to Person Vector from position 5 - 14
  for(r = 0; r < 10; r++, t++)
  {
    personVec[t] = teacherVec[r];
  }
/*
  cout << "Print people in personVec" << endl;

  int input = 0;
  cout << "Select a number to print. Hit ENTER to quit." << endl;
  while (input != 100)
  {
    cin >> input;
    switch (input)
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
        personVec[input]->print();
        break;
      default:
        input = 100;
    }

    cout << "make another selection: ";
  }
*/

/*-----------------------COURSES ARRAY STORING--------------------------------*/

  for(j = 0, m = 1, n = 2; n < g; j+=3, m+=3, n+=3) //While not the end of file, loop.
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

  int lecturer = 0; //Keeps count so that only 1 teacher is assigned to course
  for(t = 0; t < 15; t++)
  {
    if(personVec[t]->getLevel() == "BSc")
    {
      cout << "Setting student to course" << endl;
      courseVec[0]->setStudents(*personVec[t]);
    }
    else if(personVec[t]->isTeacherAssistant())
    {
      cout << "Setting TA to course" << endl;
      courseVec[0]->setTA(*personVec[t]);
    }
    else if(personVec[t]->isLecturer() && lecturer == 0)
    {
      cout << "Setting teacher to course" << endl;
      courseVec[0]->setTeacher(*personVec[t]);
      lecturer++;
    }
    else
    {
      continue;
    }
  }

  courseVec[0]->display();

  //personVec[1]->print();
  //cout << personVec[0]->getLevel();
  //cout << endl;
  //teacherVec[0]->print();

  cout << "\n\n\nTesting get functions: " << endl;
  cout << studentVec[1]->getName() << endl;
  cout << studentVec[0]->getName() << endl;
  cout << personVec[0]->getName() << endl;
  cout << personVec[1]->getName() << endl;

  cout << "\nCreating new Student Object Stevn Romeiro: " << endl;
  Undergrad Steven("Steven Romeiro", "12345", "Se", "Ma", "02/22/1985");
  personVec[20] = &Steven;

  cout << "\nCalling print function from PersonVec:" << endl;
  personVec[20]->print();
  cout << "Calling level function from PersonVec:" << endl;
  cout << personVec[20]->getLevel() << endl;
  //succesfull program termination
  return 0;
}
