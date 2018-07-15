#ifndef PERSON_H
#define PERSON_H

#include <QObject>

class Person : public QObject
{
    Q_OBJECT
    typedef QString _Name;
    typedef QString _SecondName;
    typedef QString _ThirdName;
public:
    explicit Person(QObject *parent = nullptr);
    Person(_Name, _SecondName, _ThirdName = "", uchar = 0);

    QString getFullNameStr() const;
private:
    QString Name;
    QString SecondName;
    QString ThirdName;

    uchar Age;

signals:

public slots:
};

#endif // PERSON_H
