all: Main

Main: Main.o Person.o Teacher.o Student.o Undergrad.o Grad.o Department.o Course.o
	g++ -Wall Main.o Person.o Teacher.o Student.o Undergrad.o Grad.o Department.o Course.o -o Main

Main.o: Main.cpp
	g++ -Wall -c Main.cpp

Person.o: Person.cpp Person.h
	g++ -Wall -c Person.cpp

Teacher.o: Teacher.cpp Teacher.h
	g++ -Wall -c Teacher.cpp

Student.o: Student.cpp Student.h
	g++ -Wall -c Student.cpp

Undergrad.o: Undergrad.cpp Undergrad.h
	g++ -Wall -c Undergrad.cpp

Grad.o: Grad.cpp Grad.h
	g++ -Wall -c Grad.cpp

Department.o: Department.cpp Department.h
	g++ -Wall -c Department.cpp

Course.o: Course.cpp Course.h
	g++ -Wall -c Course.cpp

clean:
	rm -rf *o Main
