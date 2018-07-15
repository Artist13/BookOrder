#ifndef WIDGETSTUDENTS_H
#define WIDGETSTUDENTS_H

#include <QWidget>
#include "listofstudents.h"

namespace Ui {
class WidgetStudents;
}

class WidgetStudents : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetStudents(QWidget *parent = 0);
    explicit WidgetStudents(ListOfStudents*, QWidget *parent = 0);
    ~WidgetStudents();

private:
    Ui::WidgetStudents *ui;
};

#endif // WIDGETSTUDENTS_H
