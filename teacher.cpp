#include "teacher.h"

Teacher::Teacher(QObject *parent) : QObject(parent)
{

}

Teacher::Teacher(Person *person, Subject subject, uint cost) : Pers(person), Subj(subject), Cost(cost)
{

}
