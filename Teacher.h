#ifndef TEACHER_H
#define TEACHER_H

class Teacher : public Person
{
  private:
    int teacherID;
    Bool lecturer;
    Bool adjunct;
    Bool professor;
    string teacherType;

  public:
    Teacher();
    string getType(); //Needs arguments
    void printTeacher(); //Might create a parent virtual function for use here
    Boolean isLecturer();
    Boolean isAdjunct();
    Boolean isProfessor();
    void setTeacherID(int ID);
    int getTeacherID();
    ~Teacher();
};

#endif
