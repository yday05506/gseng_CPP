#include <iostream>
#include <string.h>

using namespace std;

class Person 
{
private :
	string sName;
	int nAge;

public:
	Person();
	Person(string name, int age);
	void hi();
};

Person::Person()
{
	sName = "�͸�";
	nAge = 0;
}

Person::Person(string name, int age)
	:sName(name), nAge(age)
{
	/*sName = name;
	nAge = age;*/
}

void Person::hi()
{
	cout << "�̸� : " << sName << endl;
	cout << "���� : " << nAge << endl;
}

class Student : public Person
{
private: 
	int nHakbun;
public :
	Student();
	Student(string, int, int);
	void study();
};

Student::Student() : Person() {
	nHakbun = 0;
}

Student::Student(string name, int age, int hakbun)
	: Person(name, age), nHakbun(hakbun) {;}

void Student::study()
{
	hi();
	cout << "�й� : " << nHakbun << endl;
}

int main(void)
{
	Person p = Person();
	p.hi();

	Person* person = new Person("�ѽ¿�", 100);
	person->hi();

	Person* people = new Person[5];
	people[0].hi();

	Student s = Student();
	s.study();

	delete person;
	delete[]people;

	return 0;
}