#include <iostream>
#include "../include/DataSystem.h"
#include "../include/Student.h"
#include <vector>
using namespace std;

void DataSystem::addStudent() 
{
    int id,zipCode;
    string name;
    department dept;
    float grade;
    Address address;
    string street, city;

    cout << "Enter ID: ";
    cin >> id;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Grade: ";
    cin >> grade;
    cout << "Select Department (0 = IT, 1 = CS, 2 = IS, 3 = SE, 4 = MM): ";
    int dept_input;
    cin >> dept_input;

    while (dept_input < 0 || dept_input > 4) {
        cout << "Invalid department. Please enter a number between 0 and 4: ";
        cin >> dept_input;
    }

    dept = static_cast<department>(dept_input);
    cout << "Enter Street: ";
    cin.ignore();
    getline(cin, street);
    address.street = street;
    cout << "Enter City: ";
    getline(cin, city);
    address.city = city;
    cout << "Enter Zip Code: ";
    cin >> zipCode;
    address.zipCode = zipCode;

    students.emplace_back(Student(id, name, dept, grade, address));
    cout << endl;
    cout << "Student added successfully." << endl;
    cout << endl;
}

void DataSystem::removeStudent(int id_a)
{
    for (auto it=students.begin();it!=students.end(); it++)
    {
        if (it->id == id_a) {
            students.erase(it);
            cout << "Student deleted." << endl;
            cout << endl;
            return;
        }
    }
    cout <<"Student not found." << endl;
    cout << endl;
    
}

void DataSystem::displayStudents() 
{
    if (students.empty()) {
        cout << "No students available." << endl;
        cout << endl;
        return;
    }
    else 
    {
        for (auto it = students.begin();it!=students.end() ;it++) {
            cout << "ID: " << it->id << "\nName: " << it->name <<endl;

            switch (it->dept)
            {
                case 0:
                    cout << "Department: IT"<<endl;
                    break;
                case 1:
                    cout << "Department: CS"<<endl;
                    break;
                case 2:
                    cout << "Department: IS"<<endl;
                    break;
                case 3:
                    cout << "Department: SE"<<endl;
                    break;
                case 4:
                    cout << "Department: MM"<<endl;
                    break;
            }

            cout<< "Grade: " << it->grade << "\nAddress: " << it->address.street 
            << ", " << it->address.city << ", " << it->address.zipCode << endl;
            cout << endl;
        }
    }
    
}