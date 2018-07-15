#include "subject.h"

Subject::Subject(QObject *parent) : QObject(parent)
{

}

Subject::Subject(const Subject &subject, QObject *parent) : QObject(parent)
{
    Name = subject.getName();

}

QString Subject::getName() const
{
    return Name;
}

Subject::Subject(QString name, QObject *parent) : Name(name), QObject(parent)
{

}
