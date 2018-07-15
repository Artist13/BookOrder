#ifndef LISTOFSTUDENTS_H
#define LISTOFSTUDENTS_H

#include <QObject>
#include "student.h"
#include <QVector>

class ListOfStudents : public QObject
{
    Q_OBJECT
public:
    explicit ListOfStudents(QObject *parent = nullptr);

    void add(Student*);
    void erase(uint);
    Student* operator[](uint);
    inline uint getSize();
private:
    QVector<Student*> Students;
signals:

public slots:
};

#endif // LISTOFSTUDENTS_H
