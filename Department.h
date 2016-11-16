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
    void setDepartmentID(int ID); //Needs arguments
    ~Department();

};

#endif
