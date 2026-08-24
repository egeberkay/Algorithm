#include <stdio.h>


	typedef struct Person{
	char* name;
	int age;
	}person ;

	typedef struct Student{
	int sNo;
	struct Person p;
	}student;

	void displayPerson(person p);
	void displayStudent(student s);
	int main(){	
	struct Person p1;
	p1.name = "Ahnet";
	p1.age = 20;

	displayPerson(p1);
	printf("---------------------------------\n");

	student s1;
	s1.sNo = 1;
	s1.p.name = "Ege";
	s1.p.age = 20;
	
	displayStudent(s1);
	printf("---------------------------------\n");
	
	person* ptr = &p1;
	printf("Person`s name : %s\n", ptr -> name);
	printf("Person`s age : %d\n", ptr -> age);
	printf("---------------------------------\n");

	student* s_ptr = &s1;
	printf("Student`s No: %d\n",s_ptr -> sNo );
	printf("Student`s name: %s\n", s_ptr ->p.name);
	printf("Student`s age: %d\n", s_ptr -> p.age);

	return 0;
	}

	void displayPerson(person p){
	printf("Person`s name: %s\n", p.name);
	printf("Person`s age: %d\n", p.age);

	}

	void displayStudent(student s){
	printf("Student`s No: %d\n", s.sNo);
	printf("Student`s name: %s\n", s.p.name);
	printf("Student`s age: %d\n", s.p.age);

	}
