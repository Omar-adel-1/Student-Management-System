#include<iostream>
#include<vector>
#include "../include/DataSystem.h"
#include "../include/Student.h"
using namespace std;

int main() 
{
    DataSystem dataSystem;
    int choice, id;
    while (true)
    {
        cout << "*************" << endl;
        cout << "---- Student Management Menu ----" << endl;
        cout << "*************" << endl;
        cout << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Students" << endl;
        cout << "3. Remove Student" << endl;
        cout << "0. Exit" << endl;
        cout << endl;
        cout <<"*************" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "*************" << endl;
        cout << endl;

        switch (choice)
        {
        case 0:
            cout << "Exiting the program..." << endl;
            return 0;
        case 1:
            dataSystem.addStudent();
            break;
        case 2:
            dataSystem.displayStudents();
            break;
        case 3:
            cout << "Enter Student ID to delete: ";
            cin >> id;
            dataSystem.removeStudent(id);
            break;
        
        default:
            cout << "Invalid choice. Please try again." << endl;
            cout << endl;
            break;
        }
    }
}