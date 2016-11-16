#ifndef GRAD_H
#define GRAD_H

class Grad : public Student
{
  private:
    int studentID;
    string graduateType;

  public:
    Grad();
    bool isTA();
    bool isRA(); //Not needed?
    bool isMasters();
    void printGrad(); //Might be able to make a parent print function to be inherited
    ~Grad();

};

#endif
