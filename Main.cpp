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
#define MAX 200

int main()
{
  cout << "Welcome user!" << endl;

  vector <Student *> studentVec(18);
  vector <Teacher *> teacherVec(6);
  vector <Course *> courseVec(6);
  vector <Department *> departmentVec(4);
  vector <Person *> personVec(24);

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

for (k = 0, j = 0, m = 1, n = 2, p = 3, r = 4, s = 5, t = 6; k <= 17; k++, j+=7, m+=7, n+=7, p+=7,r+=7,s+=7, t+=7)
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

  for (k = 0, j = 0, m = 1, n = 2, p = 3, r = 4; k <= 5; k++, j+=5, m+=5, n+=5, p+=5, r+=5)
  {
    teacherVec[k] = new Teacher(names[j], id[m], age[n], level[p], gender[r]);
  }

/*-----------------------PERSON ASSIGNMENT------------------------------------*/

  //Assigns students to Person Vector from position 0 - 4
  for(t = 0; t < 18; t++)
  {
    personVec[t] = studentVec[t];
  }
  //Assigns teachers to Person Vector from position 5 - 14
  for(r = 0; r < 6; r++, t++)
  {
    personVec[t] = teacherVec[r];
    //cout << "personVec[" << t << "] = " << personVec[t] << " ::: teacherVec[" << r << "] = " << teacherVec[r] << endl;
  }


/*-----------------------COURSES ARRAY STORING--------------------------------*/

  for(j = 0, m = 1, n = 2; n < g; j+=3, m+=3, n+=3) //While not the end of file, loop.
  {
    id[j] = coursesArray[j];
    names[m] = coursesArray[m];
    level[n] = coursesArray[n];

    //cout << "id[" << j << "] = " << id[j] << " names[" << m << "] = " << names[m] << endl;
  }

/*-----------------------COURSES OBJECT CREATION------------------------------*/

  for (k = 0, j = 0, m = 1, n = 2; k <= 5; k++, j+=3, m+=3, n+=3)
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

  for (k = 0, j = 0, m = 1; k <= 3; k++, j+=2, m+=2)
  {
    departmentVec[k] = new Department(id[j], names[m]);
  }

/*------------------------------TESTING---------------------------------------*/
for (int x = 0; x < 6; x++)
{
    courseVec[x]->setTA(*personVec[x]);
}
for (int w = 18, x = 0; w < 24; w++, x++)
{
    courseVec[x]->setTeacher(*personVec[w]);
    teacherVec[x]->setTeacherCourse(courseVec[x]->getCourseName(), courseVec[x]->getCourseID());
}
for (int y = 10; y < 18; y++)
{
    if (y < 14)
    {
        //cout << "Print people in personVec 8" << endl;
        courseVec[0]->setStudents(*personVec[y]);
        courseVec[1]->setStudents(*personVec[y]);
        courseVec[2]->setStudents(*personVec[y]);
        studentVec[y]->setCourse(courseVec[0]->getCourseName());
        studentVec[y]->setCourse(courseVec[1]->getCourseName());
        studentVec[y]->setCourse(courseVec[2]->getCourseName());
    }
    else
    {
        //cout << "Print people in personVec 9" << endl;
        courseVec[3]->setStudents(*personVec[y]);
        courseVec[4]->setStudents(*personVec[y]);
        courseVec[5]->setStudents(*personVec[y]);
        studentVec[y]->setCourse(courseVec[3]->getCourseName());
        studentVec[y]->setCourse(courseVec[4]->getCourseName());
        studentVec[y]->setCourse(courseVec[5]->getCourseName());
    }
}

  // Setting the courses of each department //
  departmentVec[0]->setCourse(courseVec[0]->getCourseName(), courseVec[0]->getCourseID());
  departmentVec[0]->setCourse(courseVec[1]->getCourseName(), courseVec[1]->getCourseID());
  departmentVec[1]->setCourse(courseVec[2]->getCourseName(), courseVec[2]->getCourseID());
  departmentVec[1]->setCourse(courseVec[3]->getCourseName(), courseVec[3]->getCourseID());
  departmentVec[2]->setCourse(courseVec[4]->getCourseName(), courseVec[4]->getCourseID());
  departmentVec[2]->setCourse(courseVec[5]->getCourseName(), courseVec[5]->getCourseID());

  // Setting the teachers of each department //
  departmentVec[0]->setTeacher(teacherVec[0]->getTeacherName(), teacherVec[0]->getTeacherID());
  departmentVec[0]->setTeacher(teacherVec[1]->getTeacherName(), teacherVec[1]->getTeacherID());
  departmentVec[1]->setTeacher(teacherVec[2]->getTeacherName(), teacherVec[2]->getTeacherID());
  departmentVec[1]->setTeacher(teacherVec[3]->getTeacherName(), teacherVec[3]->getTeacherID());
  departmentVec[2]->setTeacher(teacherVec[4]->getTeacherName(), teacherVec[4]->getTeacherID());
  departmentVec[2]->setTeacher(teacherVec[5]->getTeacherName(), teacherVec[5]->getTeacherID());

  // Setting the students of each department //
  departmentVec[0]->setStudent(studentVec[10]->getName(), studentVec[10]->getUniversityID());
  departmentVec[0]->setStudent(studentVec[11]->getName(), studentVec[11]->getUniversityID());
  departmentVec[0]->setStudent(studentVec[12]->getName(), studentVec[12]->getUniversityID());
  departmentVec[0]->setStudent(studentVec[13]->getName(), studentVec[13]->getUniversityID());
  departmentVec[1]->setStudent(studentVec[10]->getName(), studentVec[10]->getUniversityID());
  departmentVec[1]->setStudent(studentVec[11]->getName(), studentVec[11]->getUniversityID());
  departmentVec[1]->setStudent(studentVec[12]->getName(), studentVec[12]->getUniversityID());
  departmentVec[1]->setStudent(studentVec[13]->getName(), studentVec[13]->getUniversityID());
  departmentVec[1]->setStudent(studentVec[14]->getName(), studentVec[14]->getUniversityID());
  departmentVec[1]->setStudent(studentVec[15]->getName(), studentVec[15]->getUniversityID());
  departmentVec[1]->setStudent(studentVec[16]->getName(), studentVec[16]->getUniversityID());
  departmentVec[1]->setStudent(studentVec[17]->getName(), studentVec[17]->getUniversityID());
  departmentVec[2]->setStudent(studentVec[14]->getName(), studentVec[14]->getUniversityID());
  departmentVec[2]->setStudent(studentVec[15]->getName(), studentVec[15]->getUniversityID());
  departmentVec[2]->setStudent(studentVec[16]->getName(), studentVec[16]->getUniversityID());
  departmentVec[2]->setStudent(studentVec[17]->getName(), studentVec[17]->getUniversityID());


cout << "Test for adding students and teachers to department" << endl;

departmentVec[0]->setCourse(courseVec[0]->getCourseName(), courseVec[0]->getCourseID());
departmentVec[0]->printAllCourses();
departmentVec[0]->setStudent(studentVec[0]->getName(), studentVec[0]->getUniversityID());
departmentVec[0]->printAllStudents();
departmentVec[0]->setTeacher(teacherVec[0]->getTeacherName(), teacherVec[0]->getTeacherID());
departmentVec[0]->printAllTeachers();

/*
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
*/

/*
  cout << "Testing course function calls" << endl;
  cout << "Assigning student: " << endl;
  courseVec[0]->setStudents(*personVec[0]);
  cout << "Student name is: " << courseVec[0]->getNamesStudentsEnrolled(0) << endl;
  courseVec[0]->setStudents(*personVec[1]);
  cout << "Student name is: " << courseVec[0]->getNamesStudentsEnrolled(1) << endl;
  courseVec[0]->setStudents(*personVec[2]);
  cout << "Student name is: " << courseVec[0]->getNamesStudentsEnrolled(2) << endl;
  courseVec[0]->setStudents(*personVec[3]);
  cout << "Student name is: " << courseVec[0]->getNamesStudentsEnrolled(3) << endl;
  courseVec[0]->setStudents(*personVec[4]);
  cout << "Student name is: " << courseVec[0]->getNamesStudentsEnrolled(4) << endl;
  cout << "Testing get grades function" << endl;
  cout << "Getting grades for student 0" << endl;
  cout << "Grades are" << courseVec[0]->getGrades(0) << endl;
*/

  /*------------------MENU FOR ALL THE NEEDED TESTS---------------------------*/

  int input = 0;
  int keep = 0;
  string searchID = "";
  char newInput = ' ';
  bool flag = true;

  //TESTING//
  //teacherVec[0]->setTeacherCourse(courseVec[0]->getCourseName(), courseVec[0]->getCourseID());
  //TESTING//
  //teacherVec[0]->setTeacherCourse(courseVec[1]->getCourseName(), courseVec[1]->getCourseID());


  cout << "Select a number to print or hit any other key to quit: " << endl << endl;

  while (input != 100)
  {
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
    switch (input)
    {
      // WORKING PROPERLY //
      case 1:
        cout << "Please enter the ID of the student that you want to print: ";
        cin >> searchID;
        for (unsigned int z = 0; z < studentVec.size(); z++)
        {
          if (studentVec[z]->getUniversityID() == searchID)
          {
            studentVec[z]->print();
            flag = false;
            break;
          }
        }
        if (flag)
        {
          cout << "\nThe ID that you entered doesn't match any of the students in the system!\n" << endl;
          flag = true;
        }
        break;

      // WORKING PROPERLY //
      case 2:
        cout << "Please enter the ID of the teacher that you want to print: ";
        cin >> searchID;
        for (unsigned int z = 0; z < teacherVec.size(); z++)
        {
          if (teacherVec[z]->getUniversityID() == searchID)
          {
            teacherVec[z]->print();
            flag = false;
            break;
          }
        }
        if (flag)
        {
          cout << "\nThe ID that you entered doesn't match any of the teachers in the system!\n" << endl;
          flag = true;
        }
        break;

      // WORKING PROPERLY //
      case 3:
        cout << "Please enter the ID of the student that you want to print: ";
        cin >> searchID;
        for (unsigned int z = 0; z < personVec.size(); z++)
        {
          if (personVec[z]->getUniversityID() == searchID)
          {
            personVec[z]->print();
            flag = false;
            break;
          }
        }

      if (flag)
      {
        cout << "\nThe ID that you entered doesn't match any of the students in the system!\n" << endl;
        flag = true;
      }
      break;

      // WORKING PROPERLY //
      case 4:
        cout << "Please enter the ID of the teacher that you want to print: ";
        cin >> searchID;
        for (unsigned int z = 0; z < personVec.size(); z++)
        {
          if (personVec[z]->getUniversityID() == searchID )
          {
            personVec[z]->print();
            flag = false;
            break;
          }
        }

        if (flag)
        {
          cout << "\nThe ID that you entered doesn't match any of the teachers in the system!\n" << endl;
          flag = true;
        }
      break;

      // WORKING PROPERLY //
      case 5:
        cout << "\nPlease enter the ID of the course that you want to print: ";
        cin >> searchID;
        for (unsigned int z = 0; z < courseVec.size(); z++)
        {
          if (courseVec[z]->getCourseID() == searchID)
          {
            courseVec[z]->printStudentsCourse();
            flag = false;
            break;
          }
        }

        if (flag)
        {
          cout << "\nThe ID that you entered doesn't match any of the courses in the system!\n" << endl;
          flag = true;
        }
        break;

      // NEED TO DEFINE ARRAY ELEMENTS USED IN PRINT FUNCTION --> Segfault in the for loop? //
      case 6:
        cout << "\nPlease enter the ID of the student that you want to print: ";
        cin >> searchID;
        for (unsigned int z = 0; z < studentVec.size(); z++)
        {
          if (studentVec[z]->getUniversityID() == searchID)
          {
            studentVec[z]->printCoursesEnrolled();
            flag = false;
            break;
          }
        }

        if (flag)
        {
          cout << "\nThe ID that you entered doesn't match any of the students in the system!\n" << endl;
          flag = true;
        }
        break;

      // WORKING PROPERLY //
      case 7:
        cout << "\nPlease enter the ID of the course that you want to print: ";
        cin >> searchID;
        for (unsigned int z = 0; z < courseVec.size(); z++)
        {
          if (courseVec[z]->getCourseID() == searchID)
          {
            courseVec[z]->printTeachersAssigned();
            flag = false;
            break;
          }
        }

        if (flag)
        {
          cout << "\nThe ID that you entered doesn't match any of the courses in the system!\n" << endl;
          flag = true;
        }
        break;

      case 8:
        cout << "\nPlease enter the ID of the teacher that you want to print: ";
        cin >> searchID;
        for (unsigned int z = 0; z < teacherVec.size(); z++)
        {
          if (teacherVec[z]->getUniversityID() == searchID)
          {
            teacherVec[z]->printTeacherCourses();
            flag = false;
            break;
          }
        }

        if (flag)
        {
          cout << "\nThe ID that you entered doesn't match any of the teachers in the system!\n" << endl;
          flag = true;
        }
        break;

      case 9:
        cout << "\nPlease enter the ID of the department that you want to print: ";
        cin >> searchID;
        for (unsigned int z = 0; z < departmentVec.size(); z++)
        {
          if (departmentVec[z]->getDepartmentID() == searchID)
          {
            keep = z;
            flag = false;
            break;
          }
        }

        if (!flag)
        {
          cout << "\nPlease select if you want to print teachers, students or courses:" << endl;
          cout << "(a) Print all teachers.\n(b) Print all students.\n(c) Print all courses.\n";
          cout << "Please enter your selection: ";
          cin >> newInput;
          tolower(newInput);

          if (newInput == 'a')
          {
            departmentVec[keep]->printAllTeachers();
          }
          else if (newInput == 'b')
          {
            departmentVec[keep]->printAllStudents();
          }
          else if (newInput == 'c')
          {
            departmentVec[keep]->printAllCourses();
          }
          else
          {
            cout << "\nInvalid input! Returning to main menu...\n";
          }
        }
        else if (flag)
        {
          cout << "\nThe ID that you entered doesn't match any of the departments in the system!\n" << endl;
          flag = true;
        }
        break;

      default:
        input = 100;
    }
  }

  //succesfull program termination
  return 0;

}
