#include "student.h"

// Setters

void Student::setName(std::string setName){
    name = setName;
}

void Student::setStudentNumber(int setStudentNumber){
    studentNumber = setStudentNumber;
}

void Student::setAverage(double setAverage) {
    average = setAverage;
}

// Getters

std::string Student::getName(){
    return name;
}

int Student::getStudentNumber(){
    return studentNumber;
}
double Student::getAverage(){
    return average;
}