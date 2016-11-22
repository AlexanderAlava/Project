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
  //char generalChoice, studentChoice;
  //vector <Person> universitySystem;
  cout << "Welcome user!" << endl;


  vector <Student *> studentVec(4);

  int h = 0, i = 0, j = 0;
  string teachersArray[100];
  string studentsArray[100];
  string names[100];
  string id[100];
  string grad[100];
  string standing[100];

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
      getline(inTeacher, teachersArray[i], ',');
      h++;
    }

  for(j = 0; j < i; j++) //While not the end of file, loop.
  {
    //If statement that looks for the comma character. This was just a test.
    //Can be used with some math to separate items that we need from the text file
    if(j >= 0 && j <= 3)
      {
        //cout << "Index 0 - 3" << endl;
        names[j] = studentsArray[j];
        //cout << "Stored " << names[j] << " at index " << j << " of names array";
        //cout << endl;
      }
      else if(j >= 4 && j <= 7)
      {
        //cout << "Index 4 - 7" << endl;
        id[j - 4] = studentsArray[j];
        //cout << "Stored " << id[j] << " at index " << j << " of ID array";
        //cout << endl;
      }
      else if(j >= 8 && j <= 11)
      {
        //cout << "Index 8 - 12" << endl;
        grad[j - 8] = studentsArray[j];
        //cout << "Stored " << grad[j-8] << " at index " << j << " of grad array";
        //cout << endl;
      }
      else
      {
        //cout << "Index greater than 11" << endl;
        standing[j - 12] = studentsArray[j];
        //cout << "Stored " << standing[j-12] << " at index " << j << " of standing array";
        //cout << endl;
      }
  }

  //close the file after done using
  inTeacher.close();

  for (int k = 0; k <= 3; k++)
  {
    if (grad[k] == "U")
    {
      studentVec[k] = new Undergrad(names[k], id[k], standing[k]);
    }
    else if(grad[k] == "G")
    {
      studentVec[k] = new Grad(names[k], id[k], standing[k]);
    }
  }


  //succesfull program termination
  return 0;
}
