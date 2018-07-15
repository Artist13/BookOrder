#include "person.h"

Person::Person(QObject *parent) : QObject(parent)
{

}

Person::Person(QString name, QString secondName, QString thirdName, uchar age) : Name(name), SecondName(secondName), ThirdName(thirdName), Age(age)
{

}

QString Person::getFullNameStr() const
{
    QString temp = "";
    temp += SecondName + " " + Name + " " + ThirdName;
    return temp;
}


