#ifndef DEPARTMENT_H
#define DEPARTMENT_H

using namespace std;

class Department
{
  private:
    string departmentID;
    string departmentName;
    string courseNameInDep[100];
    string courseIDInDep[100];
    string teacherNameInDep[100];
    string teacherIDInDep[100];
    string studentNameInDep[100];
    string studentIDInDep[100];

  public:
    Department(string ID, string name);
    string getDepartmentID();
    //void setCourseToDepartment(string name, string id, string teacher, string idTeach, string students[], string ids[]);
    void setCourse(string name, string id);
    void setTeacher(string name, string id);
    void setStudent(string name, string id);
    void printAllTeachers();
    void printAllStudents();
    void printAllCourses();
    ~Department();
};

#endif
