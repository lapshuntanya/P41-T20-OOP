#pragma once
#include <iostream>
#include <cstring>
using namespace std;
#define DEBUG

class Student
{
	char* name;		//Ім'я студента
	int mark;		//Оцінка

public:
	/*-------Конструктори-------------*/
	//за замовченням------------------------------
	Student() {
		name = new char[6] {"Yehor" };
		mark = 12;
#ifdef DEBUG
		cout << "Student(): " << name << endl;
#endif // DEBUG
	}
	//з параметрами------------------------------
	Student(const char* name, int score) {
		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);
		mark = score;
#ifdef DEBUG
		cout << "Student(name,score): " << name << endl;
#endif // DEBUG
	}
	//Деструктор---------------------------------
	~Student() {		
#ifdef DEBUG
		cout << "~Student(): " << name << endl;
#endif // DEBUG
		delete[] name;
	}
};

