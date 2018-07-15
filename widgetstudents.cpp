#include "widgetstudents.h"
#include "ui_widgetstudents.h"

WidgetStudents::WidgetStudents(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetStudents)
{
    ui->setupUi(this);
}

WidgetStudents::WidgetStudents(ListOfStudents *students, QWidget *parent) : QWidget(parent), ui(new Ui::WidgetStudents)
{
    ui->setupUi(this);
    for(uint i = 0; i < students->getSize(); i++)
    {
        ui->StudentsList->addItem((*students)[i]->getFullNameStr());
    }
}

WidgetStudents::~WidgetStudents()
{
    delete ui;
}
