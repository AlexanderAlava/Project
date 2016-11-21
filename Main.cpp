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


  int h = 0, i = 0, j = 0;
  string teachersArray[100];
  string studentsArray[100];
  string names[100];
  string id[100];
  string grad[100];
  string standing[100];

  //Object of inputFileStream named inFile. Will handle file input.
  ifstream inAlex;
  //Open the file
  inAlex.open("Students.txt");

  if(inAlex.fail())
  {
    cerr << "Error while opening Students.txt" << endl;
    //Terminates the program unsuccesfully
    exit(1);
  }

  inAlex.seekg(0l);
  while(!inAlex.eof())
  {
    getline(inAlex, studentsArray[i], ',');
    i++;
  }

  inAlex.close();

  /*
  cout << studentsArray[5] << endl;
  cout << studentsArray[0] << endl;
  cout << studentsArray [10] << endl;
  */


  if (studentsArray[8] == "U")
  {
    Undergrad a(studentsArray[0], studentsArray[4], studentsArray[12]);

  }




  //Some testing with reading from a file below. Uncomment if you want to test.
  string name;

  string test2 ="";
  string test3 ="";
  string test4 ="";

  //Object of inputFileStream named inFile. Will handle file input.
  ifstream inFile;
  //Open the file
  inFile.open("Teachers.txt");

  cout << "Testing getline" << endl;
  getline(inFile,test2,',');
  cout << "retrieved: " << test2 << endl;

  //Check for errors when opening the file
  if(inFile.fail())
  {
    cerr << "Error while opening Teachers.txt" << endl;
    //Terminates the program unsuccesfully
    exit(1);
  }

  inFile.seekg(0l); //Positions file-position pointer at begining of file

  while(!inFile.eof())
    {
      getline(inFile, teachersArray[i], ',');
      h++;
    }

  for(j = 0; j < i; j++) //While not the end of file, loop.
  {
    //If statement that looks for the comma character. This was just a test.
    //Can be used with some math to separate items that we need from the text file
    if(j >= 0 && j <= 3)
      {
        cout << "Index 0 - 3" << endl;
        names[j] = studentsArray[j];
        cout << "Stored " << names[j] << " at index " << j << " of names array";
        cout << endl;
      }
      else if(j >= 4 && j <= 7)
      {
        cout << "Index 4 - 7" << endl;
        id[j] = studentsArray[j];
        cout << "Stored " << id[j] << " at index " << j << " of ID array";
        cout << endl;
      }
      else if(j >= 8 && j <= 12)
      {
        cout << "Index 8 - 12" << endl;
        grad[j] = studentsArray[j];
        cout << "Stored " << grad[j] << " at index " << j << " of grad array";
        cout << endl;
      }
      else
      {
        cout << "Index greater than 12" << endl;
        standing[j] = studentsArray[j];
        cout << "Stored " << standing[j] << " at index " << j << " of standing array";
        cout << endl;
      }
  }

  //close the file after done using
  inFile.close();


/* I tested the above to verify that I could read from a file and use a comma
*  as the separator between items that we're looking for. Example, comma
*  separates TeacherID,FullName,Age. In this order within the text file.
*  The code is commented out above and can be tested by just uncommenting it.
*  it works for the file I have included "Teachers.txt".
*/


/*
  do
  {
    // Prompting for and reading in user input for choice //
    cout << "\nPlease enter your selection:\n" << endl;
    cout << "~ Enter s to add a new student to the system.";
    cout << "~ Enter t to add a new teacher to the system.";
    cout << "~ Enter d to add a new department to the system.";
    cout << "~ Enter c to add a new course to the system.";
    cout << "\nOtherwise, please enter character to terminate the program.\n";
    cout << "\nYour selection: ";
    cin >> generalChoice;

    // Converting choice to lowercase //
    tolower(generalChoice);

    // Establishing a switch statement to account for all different options //
    switch (generalChoice)
    {
      // Case for student //
      case 's':

        cout << "\nYou have selected to add a new student! Please select what kind of student.";
        cout << "Enter u for undergraduate or g for graduate: ";
        cin >> studentChoice;



        break;

      // Case for teacher //
      case 't':

        break;

      // Case for department //
      case 'd':

        break;

      // Case for course //
      case 'c':

        break;

      // Case for termination //
      default:

        generalChoice = 0;
        break;
    }

  }
  while (generalChoice);
*/


  //succesfull program termination
  return 0;
}
