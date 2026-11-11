#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    // Car Stack Memory
    Car c;
    c.setBrand("Toyota");
    c.setModel("Corolla");
    c.setYearModel(2015);
    // Printing
    c.printData();
    // Space for Cleanliness
    cout<<"\n"<<endl;

    // Rectangle Heap Memory
    Rectangle* r = new Rectangle;
    r->setHeight(6.3);
    r->setWidth(9.21);
    // Printing
    cout<<"Rectangle Area: "<<r->getArea()<<"\nRectangle Circum: "<<r->getCircum()<<"\n"<<endl;
    // Deleting the object
    delete r;

    // Student Smart pointers
    std::unique_ptr<Student> s = std::make_unique<Student>();
    s->setName("Juuso");
    s->setStudentNumber(56);
    s->setAverage(9.55);
    // Printing
    cout<<"Student's Name: "<<s->getName()<<"\nStudent Number: "<<s->getStudentNumber()<<"\nStudent Average: "<<s->getAverage()<<endl;

    return 0;
}
