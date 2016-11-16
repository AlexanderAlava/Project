#ifndef TEACHER_H
#define TEACHER_H

class Teacher : public Person
{
  private:
    int teacherID;
    string teacherType;

  public:
    Teacher();
    string getType(); //Needs arguments
    void printTeacher(); //Might create a parent virtual function for use here
    Boolean isLecturer();
    Boolean isAdjunct();
    Boolean isProfessor();
    void setTeacherID(); //Needs arguments
    int getTeacherID();
    ~Teacher();
};

#endif
