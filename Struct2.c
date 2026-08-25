#include <stdio.h>
#include <stdlib.h>

typedef struct Person{
	int age;
	char* name;
}person;

typedef struct Student{
	int school_number;
	struct Person p;
}student;

int main(){
	person p;
	p.age = 20;
	p.name = "Ege";
		
	printf("Struct`s  address: %p\n", &p);
	printf("Name`s  address: %p\n", &(p.name));
	printf("Age`s  address: %p\n", &(p.age));
	person* prs = &p;
	printf("Name`s address : %p\n", &(prs -> name));
	printf("Age`s address : %p\n", &(prs -> age));
	printf("-------------------------------------\n");

	student* std;
	std = (student*)malloc(sizeof(student));
	std -> school_number = 406;                                                                                                                                    
	std -> p.age = 18;
	std -> p.name = "Ege";
	
	printf(" std pointer`s address:%p\n ", &std);
	printf("stdudent`s address:%p\n ", std);
	printf("stdudent`s school number address:%p\n ", &(std -> school_number));
	printf("person address: %p\n", &(std -> p));
	printf("person age`s  address : %p\n",&(std -> p.age));	
	
	printf("-------------------------------------\n");
	printf("stdudent`s information -->  number:%d , age:%d , name:%s\n ", std -> school_number, p.age, p.name);	

	
}
