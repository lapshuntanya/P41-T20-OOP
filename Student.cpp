#include "Student.h"

void Student::showInfo()
{
	cout << "Name: " << name << endl;
	cout << "Mark: " << mark << endl;
	cout << "----------------------\n\n";
}

void Student::setName(const char* new_name)
{
	if (strlen(new_name) >= 2) {
		delete[] name;
		name = new char[strlen(new_name) + 1];
		strcpy_s(name, strlen(new_name) + 1, new_name);
	}
	else {
		cout << "Error: short name!\n";
	}
}

void Student::setMark(int new_mark){
	if (new_mark >= 1 && new_mark <= 12) {
		mark = new_mark;
	}
	else {
		cout << "Error: out of range 1-12\n";
	}
}

const char* Student::getName(){
	return name;
}

int Student::getMark(){
	return mark;
}
