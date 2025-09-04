#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;

enum department {IT,CS,IS,SE,MM};
struct Address
{
    string street;
    string city;
    int zipCode;
};

class Student 
{
    public:
        int id;
        string name;
        department dept;
        float grade;
        Address address;
    
        Student(int id_a, string name_a, department dept_a, float grade_a, Address address_a){
            id = id_a;
            name = name_a;
            dept = dept_a;
            grade = grade_a;
            address = address_a;
        }

};

#endif