#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "listofstudents.h"
#include "widgetstudents.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ListOfStudents* students = new ListOfStudents();
    Person* Petr = new Person("Petr", "Petrovich");
    Person* Ivan = new Person("Ivan", "Ivanov", "Ivanovich", 18);
    Subject math = Subject("Math");
    Student* StPetr = new Student(Petr, math, 9);
    Student* StIvan = new Student(Ivan, math, 11);
    students->add(StPetr);
    students->add(StIvan);
    WidgetStudents* WS = new WidgetStudents(students, this);
    ui->widget = WS;

}

MainWindow::~MainWindow()
{
    delete ui;
}
