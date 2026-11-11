#pragma once
#include <string>

class Student
{
private:
    std::string name;
    int studentNumber;
    double average;

public:
    void setName(std::string name);
    void setStudentNumber(int studentNumber);
    void setAverage(double average);
    std::string getName();
    int getStudentNumber();
    double getAverage();
};


