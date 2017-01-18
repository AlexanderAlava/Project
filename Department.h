#ifndef DEPARTMENT_H
#define DEPARTMENT_H

using namespace std;

class Department
{
  private:

    // Declaring the variables need for this class //
    string departmentID;
    string departmentName;
    string courseNameInDep[100];
    string courseIDInDep[100];
    string teacherNameInDep[100];
    string teacherIDInDep[100];
    string studentNameInDep[100];
    string studentIDInDep[100];

  public:

    // Declaring the constructor with two different parameters //
    Department(string ID, string name);

    // Declaring member functions //
    string getDepartmentID();
    void setCourse(string name, string id);
    void setTeacher(string name, string id);
    void setStudent(string name, string id);
    void printAllTeachers();
    void printAllStudents();
    void printAllCourses();

    // Declaring the destructor //
    ~Department();
};

#endif
