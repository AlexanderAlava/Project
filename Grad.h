#ifndef GRAD_H
#define GRAD_H

class Grad : public Student
{
  private:
    int studentID;
    string graduateType;

  public:
    Grad();
    Boolean isTA();
    Boolean isRA(); //Not needed?
    Boolean isMasters();
    void printGrad(); //Might be able to make a parent print function to be inherited
    ~Grad();

};

#endif
