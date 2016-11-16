#ifndef UNDERGRAD_H
#define UNDERGRAD_H

class Undergrad : public Student
{
  private:
    int studentID
    string classStanding;

  public:
    Undergrad();
    void setStanding(); //Will need arguments
    string getStanding();
    void printUndergrad();
    ~Undergrad();

};

#endif
