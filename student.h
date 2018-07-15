#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>
#include "person.h"
#include "subject.h"

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);
    Student(Person*, Subject, uchar = 0);

    QString getFullNameStr();
private:
    Person* Pers;
    uchar ClassNum;
    Subject Subj; //Пока несложный объект можно хранить значение
signals:

public slots:
};

#endif // STUDENT_H
