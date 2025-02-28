#include "ToDoListPage.h"
#include "ui_ToDoListPage.h"

ToDoListPage::ToDoListPage(QWidget *parent)
    : QWidget(parent), ui(new Ui::ToDoListPage)
{
    ui->setupUi(this);
    this->setFixedHeight(1000);
    this->setFixedWidth(1600);
    // Example: Add a label to the page
    ui->titleLabel->setText("To-Do List Page");
    ui->titleLabel->setAlignment(Qt::AlignCenter);
}

ToDoListPage::~ToDoListPage()
{
    delete ui;
}
