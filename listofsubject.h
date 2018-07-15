#ifndef LISTOFSUBJECT_H
#define LISTOFSUBJECT_H

#include <QObject>
#include "subject.h"
#include <QVector>

class ListOfSubject : public QObject
{
    Q_OBJECT
public:
    explicit ListOfSubject(QObject *parent = nullptr);

    void add(Subject);
    void erase(uint);
    Subject operator[](uint);
private:
    QVector<Subject> Subjects;
signals:

public slots:
};

#endif // LISTOFSUBJECT_H
