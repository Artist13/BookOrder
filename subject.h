#ifndef SUBJECT_H
#define SUBJECT_H

#include <QObject>

class Subject : public QObject
{
    Q_OBJECT
public:
    explicit Subject(QObject *parent = nullptr);
    Subject(QString, QObject* parent = nullptr);
    Subject(const Subject&, QObject *parent = nullptr);

    QString getName() const;
private:
    QString Name;
signals:

public slots:
};

#endif // SUBJECT_H
