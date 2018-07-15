#include "listofstudents.h"

ListOfStudents::ListOfStudents(QObject *parent) : QObject(parent)
{

}

void ListOfStudents::add(Student *student)
{
    if (student != nullptr)
    {
        Students.push_back(student);
    }
}

void ListOfStudents::erase(uint index)
{
    if(index < getSize())
    {
        Students.erase(Students.begin() + index);
    }
}

Student *ListOfStudents::operator[](uint index)
{
    if(index < getSize())
    {
        return Students[index];
    }
}

uint ListOfStudents::getSize()
{
    return Students.size();
}
