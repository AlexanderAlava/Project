#ifndef DEPARTMENT_H
#define DEPARTMENT_H

using namespace std;

class Department
{
  private:
    string departmentID;
    string departmentName;

  public:
    Department(string ID, string name);
    string getDepartmentID();
    void printAllTeachers();
    void printAllStudents();
    void printAllCourses();
    ~Department();
};

#endif
