#ifndef DATA_SYSTEM_H
#define DATA_SYSTEM_H

#include <vector>
#include "Student.h"

class DataSystem
{
    private:
        vector<Student> students;

    public:
        void addStudent();
        void removeStudent(int id_a);
        void displayStudents();
};

#endif