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
#define MAX 200

int main()
{
  // Printing header message //
  cout << "\nWelcome user!" << endl;

  // Declaring a student pointer vector of size 18 //
  vector <Student *> studentVec(18);

  // Declaring a student pointer vector of size 6 //
  vector <Teacher *> teacherVec(6);

  // Declaring a student pointer vector of size 6 //
  vector <Course *> courseVec(6);

  // Declaring a student pointer vector of size 4 //
  vector <Department *> departmentVec(3);

  // Declaring a student pointer vector of size 24 //
  vector <Person *> personVec(24);

  // Declaring and initializing integer variables that will serve as indexes along the program //
  int f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, m = 0, n = 0, p = 0, r = 0, s = 0, t = 0;

  // Declaring string arrays that will serve many different functions along the program //
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

  // Creating object of inputFileStream that will handle file input //
  ifstream inStudent;

  // Opening the file //
  inStudent.open("Students.txt");

  // Checking if the opening of the file failed //
  if(inStudent.fail())
  {
    // Printing error message //
    cerr << "Error while opening Students.txt" << endl;

    // Terminating the program unsuccesfully //
    exit(1);
  }

  // Setting the object file pointer to the beginning of the file //
  inStudent.seekg(0l);

  // Establishing a while loop that will break when the file ends //
  while(!inStudent.eof())
  {
    // Reading the file and placing the contents in the specific array //
    getline(inStudent, studentsArray[i], ',');

    // Incrementing counter //
    i++;
  }

  // Closing the file after done using //
  inStudent.close();

/*-----------------------TEACHER FILE HANDLING -------------------------------*/

  // Creating object of inputFileStream that will handle file input //
  ifstream inTeacher;

  // Opening the file //
  inTeacher.open("Teachers.txt");

  // Checking if the opening of the file failed //
  if(inTeacher.fail())
  {
    // Printing error message //
    cerr << "Error while opening Teachers.txt" << endl;

    // Terminating the program unsuccesfully //
    exit(1);
  }

  // Setting the object file pointer to the beginning of the file //
  inTeacher.seekg(0l);

  // Establishing a while loop that will break when the file ends //
  while(!inTeacher.eof())
  {
    // Reading the file and placing the contents in the specific array //
    getline(inTeacher, teachersArray[h], ',');

    // Incrementing counter //
    h++;
  }

  // Closing the file after done using //
  inTeacher.close();

/*-----------------------COURSES FILE HANDLING -------------------------------*/

  // Creating object of inputFileStream that will handle file input //
  ifstream inCourses;

  // Opening the file //
  inCourses.open("Courses.txt");

  // Checking if the opening of the file failed //
  if(inCourses.fail())
  {
    // Printing error message //
    cerr << "Error while opening Courses.txt" << endl;

    // Terminating the program unsuccesfully //
    exit(1);
  }

  // Setting the object file pointer to the beginning of the file //
  inCourses.seekg(0l);

  // Establishing a while loop that will break when the file ends //
  while(!inCourses.eof())
  {
    // Reading the file and placing the contents in the specific array //
    getline(inCourses, coursesArray[g], ',');

    // Incrementing counter //
    g++;
  }

  // Closing the file after done using //
  inCourses.close();

/*-----------------------DEPARTMENTS FILE HANDLING ---------------------------*/

  // Creating object of inputFileStream that will handle file input //
  ifstream inDepartments;

  // Opening the file //
  inDepartments.open("Departments.txt");

  // Checking if the opening of the file failed //
  if(inDepartments.fail())
  {
    // Printing error message //
    cerr << "Error while opening Departments.txt" << endl;

    // Terminating the program unsuccesfully //
    exit(1);
  }

  // Setting the object file pointer to the beginning of the file //
  inDepartments.seekg(0l);

  // Establishing a while loop that will break when the file ends //
  while(!inDepartments.eof())
  {
    // Reading the file and placing the contents in the specific array //
    getline(inDepartments, departmentsArray[f], ',');

    // Incrementing counter //
    f++;
  }

  // Closing the file after done using //
  inDepartments.close();

/*-----------------------STUDENT ARRAY STORING -------------------------------*/

  // Establishing a for loop to run through all the elements of the array needed //
  for(j = 0, m = 1, n = 2, p = 3, r = 4, s = 5, t = 6; t < i; j+=7, m+=7, n+=7, p+=7,r+=7,s+=7, t+=7)
  {
    // Assigning the values of the general array to the specific arrays //
    names[j] = studentsArray[j];
    id[m] = studentsArray[m];
    grad[n] = studentsArray[n];
    standing[p] = studentsArray[p];
    level[r] = studentsArray[r];
    gender[s] = studentsArray[s];
    age[t] = studentsArray[t];
  }

/*-----------------------STUDENT OBJECT CREATION------------------------------*/

  // Establishing a for loop to run through all the elements of the array needed //
  for (k = 0, j = 0, m = 1, n = 2, p = 3, r = 4, s = 5, t = 6; k <= 17; k++, j+=7, m+=7, n+=7, p+=7,r+=7,s+=7, t+=7)
  {
    // Checking if the student read from the file is graduate or undergraduate //
    if (grad[n] == "U")
    {
      // Instatiating Undergrad objects and storing into their respective vector //
      studentVec[k] = new Undergrad(names[j], id[m], standing[p], gender[s], age[t]);
    }
    else if(grad[n] == "G")
    {
      // Instatiating Grad objects and storing into their respective vector //
      studentVec[k] = new Grad(names[j], id[m], standing[p], level[r], gender[s], age[t]);
    }
  }

/*-----------------------TEACHER ARRAY STORING--------------------------------*/

  // Establishing a for loop to run through all the elements of the array needed //
  for(j = 0, m = 1, n = 2, p = 3, r = 4; r < h; j+=5, m+=5, n+=5, p+=5,r+=5)
  {
    // Assigning the values of the general array to the specific arrays //
    names[j] = teachersArray[j];
    id[m] = teachersArray[m];
    age[n] = teachersArray[n];
    level[p] = teachersArray[p];
    gender[r] = teachersArray[r];
  }

/*-----------------------TEACHER OBJECT CREATION------------------------------*/

  // Establishing a for loop to run through all the elements of the array needed //
  for (k = 0, j = 0, m = 1, n = 2, p = 3, r = 4; k <= 5; k++, j+=5, m+=5, n+=5, p+=5, r+=5)
  {
    // Instatiating Teacher objects and storing into their respective vector //
    teacherVec[k] = new Teacher(names[j], id[m], age[n], level[p], gender[r]);
  }

/*-----------------------PERSON ASSIGNMENT------------------------------------*/

  //Assigning students to Person vector from position 0 - 17 //
  for(t = 0; t < 18; t++)
  {
    personVec[t] = studentVec[t];
  }

  //Assigns teachers to Person Vector from position 18 - 24 //
  for(r = 0; r < 6; r++, t++)
  {
    personVec[t] = teacherVec[r];
  }


/*-----------------------COURSES ARRAY STORING--------------------------------*/

  // Establishing a for loop to run through all the elements of the array needed //
  for(j = 0, m = 1, n = 2; n < g; j+=3, m+=3, n+=3)
  {
    // Assigning the values of the general array to the specific arrays //
    id[j] = coursesArray[j];
    names[m] = coursesArray[m];
    level[n] = coursesArray[n];
  }

/*-----------------------COURSES OBJECT CREATION------------------------------*/

  // Establishing a for loop to run through all the elements of the array needed //
  for (k = 0, j = 0, m = 1, n = 2; k <= 5; k++, j+=3, m+=3, n+=3)
  {
    // Instatiating Course objects and storing into their respective vector //
    courseVec[k] = new Course(id[j], names[m], level[n]);
  }

/*-----------------------DEPARTMENT ARRAY STORING-----------------------------*/

  // Establishing a for loop to run through all the elements of the array needed //
  for(j = 0, m = 1; m < f; j+=2, m+=2)
  {
    // Assigning the values of the general array to the specific arrays //
    id[j] = departmentsArray[j];
    names[m] = departmentsArray[m];
  }

/*----------------------DEPARTMENT OBJECT CREATION----------------------------*/

  // Establishing a for loop to run through all the elements of the array needed //
  for (k = 0, j = 0, m = 1; k < 3; k++, j+=2, m+=2)
  {
    // Instatiating Department object and storing into their respective vector //
    departmentVec[k] = new Department(id[j], names[m]);
  }

/*-----------------------------------ASSIGNMENTS--------------------------------------------*/

/*--------------------------TEACHING ASSISTANT ASSIGNMENT-----------------------------------*/

  // Establishing a for loop to run through all the elements in the course vector //
  for (int x = 0; x < 6; x++)
  {
    // Assigning one teaching assistant to each course //
    courseVec[x]->setTA(*personVec[x]);
  }

/*--------------------------------TEACHER ASSIGNMENT----------------------------------------*/

  // Establishing a for loop to run through all the elements in the course and part of the teacher vectors //
  for (int w = 18, x = 0; w < 24; w++, x++)
  {
    // Assigning one teacher from the person vector to each course //
    courseVec[x]->setTeacher(*personVec[w]);

    // Assigning one course from the course vector for every teacher //
    teacherVec[x]->setTeacherCourse(courseVec[x]->getCourseName(), courseVec[x]->getCourseID());
  }

/*--------------------------------STUDENT ASSIGNMENT----------------------------------------*/

  // Establishing a for loop that will run through all the undergrad students //
  for (int y = 9; y < 18; y++)
  {
    // Checking if the student is one of the first four undergrad students //
    if (y < 14)
    {
      // Assigning students 10 - 13 to courses 0 - 2 //
      courseVec[0]->setStudents(*personVec[y]);
      courseVec[1]->setStudents(*personVec[y]);
      courseVec[2]->setStudents(*personVec[y]);

      // Assigning courses 0 - 2 to students 10 - 13 //
      studentVec[y]->setCourse(courseVec[0]->getCourseName());
      studentVec[y]->setCourse(courseVec[1]->getCourseName());
      studentVec[y]->setCourse(courseVec[2]->getCourseName());
    }
    // Checking if the student is one of the last four undergrad students //
    else
    {
      // Assigning students 14 - 17 to courses 3 - 5 //
      courseVec[3]->setStudents(*personVec[y]);
      courseVec[4]->setStudents(*personVec[y]);
      courseVec[5]->setStudents(*personVec[y]);

      // Assigning courses 3 - 5 to students 14 - 17 //
      studentVec[y]->setCourse(courseVec[3]->getCourseName());
      studentVec[y]->setCourse(courseVec[4]->getCourseName());
      studentVec[y]->setCourse(courseVec[5]->getCourseName());
    }
  }

/*-----------------------------DEPARTMENT ASSIGNMENTS-----------------------------------*/

  // Setting courses 0 and 1 to department 0 //
  departmentVec[0]->setCourse(courseVec[0]->getCourseName(), courseVec[0]->getCourseID());
  departmentVec[0]->setCourse(courseVec[1]->getCourseName(), courseVec[1]->getCourseID());

  // Setting courses 2 and 3 to department 1 //
  departmentVec[1]->setCourse(courseVec[2]->getCourseName(), courseVec[2]->getCourseID());
  departmentVec[1]->setCourse(courseVec[3]->getCourseName(), courseVec[3]->getCourseID());

  // Setting courses 4 and 5 to department 2 //
  departmentVec[2]->setCourse(courseVec[4]->getCourseName(), courseVec[4]->getCourseID());
  departmentVec[2]->setCourse(courseVec[5]->getCourseName(), courseVec[5]->getCourseID());

  // Setting teachers 0 and 1 to department 0 //
  departmentVec[0]->setTeacher(teacherVec[0]->getTeacherName(), teacherVec[0]->getTeacherID());
  departmentVec[0]->setTeacher(teacherVec[1]->getTeacherName(), teacherVec[1]->getTeacherID());

  // Setting teachers 2 and 3 to department 1 //
  departmentVec[1]->setTeacher(teacherVec[2]->getTeacherName(), teacherVec[2]->getTeacherID());
  departmentVec[1]->setTeacher(teacherVec[3]->getTeacherName(), teacherVec[3]->getTeacherID());

  // Setting teachers 4 and 5 to department 2 //
  departmentVec[2]->setTeacher(teacherVec[4]->getTeacherName(), teacherVec[4]->getTeacherID());
  departmentVec[2]->setTeacher(teacherVec[5]->getTeacherName(), teacherVec[5]->getTeacherID());

  // Setting students 9 - 13 to department 0 //
  departmentVec[0]->setStudent(studentVec[9]->getName(), studentVec[9]->getUniversityID());
  departmentVec[0]->setStudent(studentVec[10]->getName(), studentVec[10]->getUniversityID());
  departmentVec[0]->setStudent(studentVec[11]->getName(), studentVec[11]->getUniversityID());
  departmentVec[0]->setStudent(studentVec[12]->getName(), studentVec[12]->getUniversityID());
  departmentVec[0]->setStudent(studentVec[13]->getName(), studentVec[13]->getUniversityID());

  // Setting students 9 - 17 to department 1 //
  departmentVec[1]->setStudent(studentVec[9]->getName(), studentVec[9]->getUniversityID());
  departmentVec[1]->setStudent(studentVec[10]->getName(), studentVec[10]->getUniversityID());
  departmentVec[1]->setStudent(studentVec[11]->getName(), studentVec[11]->getUniversityID());
  departmentVec[1]->setStudent(studentVec[12]->getName(), studentVec[12]->getUniversityID());
  departmentVec[1]->setStudent(studentVec[13]->getName(), studentVec[13]->getUniversityID());
  departmentVec[1]->setStudent(studentVec[14]->getName(), studentVec[14]->getUniversityID());
  departmentVec[1]->setStudent(studentVec[15]->getName(), studentVec[15]->getUniversityID());
  departmentVec[1]->setStudent(studentVec[16]->getName(), studentVec[16]->getUniversityID());
  departmentVec[1]->setStudent(studentVec[17]->getName(), studentVec[17]->getUniversityID());

  // Setting students 14 - 17 to department 2 //
  departmentVec[2]->setStudent(studentVec[14]->getName(), studentVec[14]->getUniversityID());
  departmentVec[2]->setStudent(studentVec[15]->getName(), studentVec[15]->getUniversityID());
  departmentVec[2]->setStudent(studentVec[16]->getName(), studentVec[16]->getUniversityID());
  departmentVec[2]->setStudent(studentVec[17]->getName(), studentVec[17]->getUniversityID());

  /*---------------------------------MENU FOR ALL THE NEEDED TESTS-----------------------------------------*/

  // Declaring and initializing variables that will be used through the switch statement //
  bool flag1 = true, flag2 = true, flag3 = true, flag4 = true, flag5 = true, flag6 = true, flag7 = true, flag8 = true, flag9 = true;
  char newInput = ' ';
  int input = 0;
  int keep = 0;
  string searchID = "";

  // Printing a header for the switch statement //
  cout << "Select a number to print or hit any other key to quit: " << endl;

  // Establishing a while loop that will break when user enters an option other that 1 - 9 //
  while (input != 100)
  {
    // Prompting for and reading in user input for variable input //
    cout << "\n(1) Print information of a student object." << endl;
    cout << "(2) Print information of a teacher object." << endl;
    cout << "(3) Print information of a student object through a person object." << endl;
    cout << "(4) Print information of a teacher object through a person object." << endl;
    cout << "(5) Print student's names and ID's who are enrolled in a course." << endl;
    cout << "(6) Print course names in which a student is enrolled in." << endl;
    cout << "(7) Print teachers assigned to a course." << endl;
    cout << "(8) Print courses that a teacher teaches." << endl;
    cout << "(9) Print all teachers, students or courses in a department." << endl;
    cout << "\nPlease enter your selection: ";
    cin >> input;

    // Establishing a switch statement with the user input previously read //
    switch (input)
    {
      // Case 1 for student printing //
      case 1:
        // Prompting for and reading in user input for searchID //
        cout << "Please enter the ID of the student that you want to print: ";
        cin >> searchID;

        // Establishing a for loop that will run through all the elements in the respective vector //
        for (unsigned int z = 0; z < studentVec.size(); z++)
        {
          // Checking if user input matches any valid ID from the respective vector //
          if (studentVec[z]->getUniversityID() == searchID)
          {
            // Calling the print function for the object that matched //
            studentVec[z]->print();

            // Setting the flag to false so that the error message is not printed //
            flag1 = false;

            // Breaking from the for loop when the object is found //
            break;
          }
        }

        // Checking if the input was invalid //
        if (flag1)
        {
          // Printing error message //
          cout << "\nThe ID that you entered doesn't match any of the students in the system!" << endl;
        }

        // Resetting flag to true //
        flag1 = true;
        break;

      // Case 2 for teacher printing //
      case 2:
        // Prompting for and reading in user input for searchID //
        cout << "Please enter the ID of the teacher that you want to print: ";
        cin >> searchID;

        // Establishing a for loop that will run through all the elements in the respective vector //
        for (unsigned int z = 0; z < teacherVec.size(); z++)
        {
          // Checking if user input matches any valid ID from the respective vector //
          if (teacherVec[z]->getUniversityID() == searchID)
          {
            // Calling the print function for the object that matched //
            teacherVec[z]->print();

            // Setting the flag to false so that the error message is not printed //
            flag2 = false;

            // Breaking from the for loop when the object is found //
            break;
          }
        }

        // Checking if the input was invalid //
        if (flag2)
        {
          // Printing error message //
          cout << "\nThe ID that you entered doesn't match any of the teachers in the system!" << endl;
        }

        // Resetting flag to true //
        flag2 = true;
        break;

      // Case 3 for student printing from a person object //
      case 3:
        // Prompting for and reading in user input for searchID //
        cout << "Please enter the ID of the student that you want to print: ";
        cin >> searchID;

        // Establishing a for loop that will run through all the elements in the respective vector //
        for (unsigned int z = 0; z < personVec.size(); z++)
        {
          // Checking if user input matches any valid ID from the respective vector //
          if (personVec[z]->getUniversityID() == searchID)
          {
            // Calling the print function for the object that matched //
            personVec[z]->print();

            // Setting the flag to false so that the error message is not printed //
            flag3 = false;

            // Breaking from the for loop when the object is found //
            break;
          }
        }

        // Checking if the input was invalid //
        if (flag3)
        {
          // Printing error message //
          cout << "\nThe ID that you entered doesn't match any of the students in the system!" << endl;
        }

        // Resetting flag to true //
        flag3 = true;
        break;

      // Case 4 for teacher printing from a person object //
      case 4:
        // Prompting for and reading in user input for searchID //
        cout << "Please enter the ID of the teacher that you want to print: ";
        cin >> searchID;

        // Establishing a for loop that will run through all the elements in the respective vector //
        for (unsigned int z = 0; z < personVec.size(); z++)
        {
          // Checking if user input matches any valid ID from the respective vector //
          if (personVec[z]->getUniversityID() == searchID )
          {
            // Calling the print function for the object that matched //
            personVec[z]->print();

            // Setting the flag to false so that the error message is not printed //
            flag4 = false;

            // Breaking from the for loop when the object is found //
            break;
          }
        }

        // Checking if the input was invalid //
        if (flag4)
        {
          // Printing error message //
          cout << "\nThe ID that you entered doesn't match any of the teachers in the system!" << endl;
        }

        // Resetting flag to true //
        flag4 = true;
        break;

      // Case 5 for names and IDs in course printing //
      case 5:
        // Prompting for and reading in user input for searchID //
        cout << "\nPlease enter the ID of the course that you want to print: ";
        cin >> searchID;

        // Establishing a for loop that will run through all the elements in the respective vector //
        for (unsigned int z = 0; z < courseVec.size(); z++)
        {
          // Checking if user input matches any valid ID from the respective vector //
          if (courseVec[z]->getCourseID() == searchID)
          {
            // Calling the printStudentsCourse function for the object that matched //
            courseVec[z]->printStudentsCourse();

            // Setting the flag to false so that the error message is not printed //
            flag5 = false;

            // Breaking from the for loop when the object is found //
            break;
          }
        }

        // Checking if the input was invalid //
        if (flag5)
        {
          // Printing error message //
          cout << "\nThe ID that you entered doesn't match any of the courses in the system!" << endl;
        }

        // Resetting flag to true //
        flag5 = true;
        break;

      // Case 6 for courses in student printing //
      case 6:
        // Prompting for and reading in user input for searchID //
        cout << "\nPlease enter the ID of the student that you want to print: ";
        cin >> searchID;

        // Establishing a for loop that will run through all the elements in the respective vector //
        for (unsigned int z = 0; z < studentVec.size(); z++)
        {
          // Checking if user input matches any valid ID from the respective vector //
          if (studentVec[z]->getUniversityID() == searchID)
          {
            // Calling the printCoursesEnrolled function for the object that matched //
            studentVec[z]->printCoursesEnrolled();

            // Setting the flag to false so that the error message is not printed //
            flag6 = false;

            // Breaking from the for loop when the object is found //
            break;
          }
        }

        // Checking if the input was invalid //
        if (flag6)
        {
          // Printing error message //
          cout << "\nThe ID that you entered doesn't match any of the students in the system!" << endl;
        }

        // Resetting flag to true //
        flag6 = true;
        break;

      // Case 7 for teachers in a course printing //
      case 7:
        // Prompting for and reading in user input for searchID //
        cout << "\nPlease enter the ID of the course that you want to print: ";
        cin >> searchID;

        // Establishing a for loop that will run through all the elements in the respective vector //
        for (unsigned int z = 0; z < courseVec.size(); z++)
        {
          // Checking if user input matches any valid ID from the respective vector //
          if (courseVec[z]->getCourseID() == searchID)
          {
            // Calling the printTeacherAssigned function for the object that matched //
            courseVec[z]->printTeachersAssigned();

            // Setting the flag to false so that the error message is not printed //
            flag7 = false;

            // Breaking from the for loop when the object is found //
            break;
          }
        }

        // Checking if the input was invalid //
        if (flag7)
        {
          // Printing error message //
          cout << "\nThe ID that you entered doesn't match any of the courses in the system!" << endl;
        }

        // Resetting flag to true //
        flag7 = true;
        break;

      // Case 8 for courses in teacher printing //
      case 8:
        // Prompting for and reading in user input for searchID //
        cout << "\nPlease enter the ID of the teacher that you want to print: ";
        cin >> searchID;

        // Establishing a for loop that will run through all the elements in the respective vector //
        for (unsigned int z = 0; z < teacherVec.size(); z++)
        {
          // Checking if user input matches any valid ID from the respective vector //
          if (teacherVec[z]->getUniversityID() == searchID)
          {
            // Calling the printTeacherCourses function for the object that matched //
            teacherVec[z]->printTeacherCourses();

            // Setting the flag to false so that the error message is not printed //
            flag8 = false;

            // Breaking from the for loop when the object is found //
            break;
          }
        }

        // Checking if the input was invalid //
        if (flag8)
        {
          // Printing error message //
          cout << "\nThe ID that you entered doesn't match any of the teachers in the system!" << endl;
        }

        // Resetting flag to true //
        flag8 = true;
        break;

      // Case 9 for teachers, students or courses in department printing //
      case 9:
        // Prompting for and reading in user input for searchID //
        cout << "\nPlease enter the ID of the department that you want to print: ";
        cin >> searchID;

        // Establishing a for loop that will run through all the elements in the respective vector //
        for (unsigned int z = 0; z < departmentVec.size(); z++)
        {
          // Checking if user input matches any valid ID from the respective vector //
          if (departmentVec[z]->getDepartmentID() == searchID)
          {
            // Storing the vector index of the matching object //
            keep = z;

            // Setting the flag to false so that the new input can be requested if appropiate //
            flag9 = false;

            // Breaking from the for loop when the object is found //
            break;
          }
        }

        // Checking if the input was valid //
        if (!flag9)
        {
          // Prompting for and reading in user input for newInput //
          cout << "\nPlease select if you want to print teachers, students or courses:" << endl;
          cout << "(a) Print all teachers.\n(b) Print all students.\n(c) Print all courses.\n";
          cout << "\nPlease enter your selection: ";
          cin >> newInput;

          // Converting newInput to lowercase in case it was entered as an uppercase letter /
          tolower(newInput);

          // Checking user input for newInput and executing the correct call of a print function //
          if (newInput == 'a')
          {
            // Calling the printAllTeachers function for the object that matched //
            departmentVec[keep]->printAllTeachers();
          }
          else if (newInput == 'b')
          {
            // Calling the printAllStudents function for the object that matched //
            departmentVec[keep]->printAllStudents();
          }
          else if (newInput == 'c')
          {
            // Calling the printAllCourses function for the object that matched //
            departmentVec[keep]->printAllCourses();
          }
          else
          {
            // Printing an error message if the selection was invalid //
            cout << "\nInvalid input! Returning to main menu...\n";
          }
        }
        // Checking if the first input was invalid //
        else if (flag9)
        {
          // Printing error message //
          cout << "\nThe ID that you entered doesn't match any of the departments in the system!" << endl;
        }

        // Resetting flag to true //
        flag9 = true;
        break;

      // Default case for any other input //
      default:
        // Setting the input variable to 100 to break the loop //
        input = 100;
    }
  }

  // Successful program termination //
  return 0;
}
