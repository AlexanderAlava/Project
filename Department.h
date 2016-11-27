#ifndef DEPARTMENT_H
#define DEPARTMENT_H

using namespace std;

class Department
{
  private:
    string departmentID;
    string departmentName;
    string coursesInDep[20];
    string teachersInDep[20];
    string studentsInDep[100];

  public:
    Department(string ID, string name);
    string getDepartmentID();
    void setCourseToDepartment(string name, string id, string teacher, string idTeach, string & students, string & ids);
    void printAllTeachers();
    void printAllStudents();
    void printAllCourses();
    ~Department();
};

#endif
