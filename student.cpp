#include "student.h"

Student::Student(QObject *parent) : QObject(parent)
{

}



Student::Student(Person *person, Subject subject, uchar classNum) : Pers(person), Subj(subject), ClassNum(classNum)
{

}



QString Student::getFullNameStr()
{
    return Pers->getFullNameStr();
}
