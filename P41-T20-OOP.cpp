#include "Student.h"

int main()
{
    Student Vlad; 
    Student Vlad2("Vlad", 11);


    Vlad.showInfo();
    Vlad2.showInfo();

    float av = (Vlad.getMark() + Vlad2.getMark()) / 2.0;

    Vlad.setName("Tronevych Vlad");
    Vlad2.setName("Karpenko Vlad");
    Vlad2.setName("");

    Vlad.showInfo();
    Vlad2.showInfo();
    cout << "AVG: " << av << endl;
}
