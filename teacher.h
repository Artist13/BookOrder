#ifndef TEACHER_H
#define TEACHER_H

#include <QObject>
#include "person.h"
#include "subject.h"


//Если это персональная записная книжка, следует использовать singletone
class Teacher : public QObject
{
    Q_OBJECT
public:
    explicit Teacher(QObject *parent = nullptr);
    Teacher(Person* , Subject, uint = 0);


private:
    Person *Pers;
    Subject Subj;
    uint Cost;
signals:

public slots:
};

#endif // TEACHER_H
