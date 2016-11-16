#ifndef DEPARTMENT_H
#define DEPARTMENT_H

class Department
{
  private:
    int universityID, departmentID;

  public:
    Department();
    int getUniversityID();
    int getDepartmentID();
    void setDepartmentID(); //Needs arguments
    ~Department();

};

#endif
