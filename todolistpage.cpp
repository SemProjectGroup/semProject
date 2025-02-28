#include "ToDoListPage.h"
#include "ui_todolistpage.h"

ToDoListPage::ToDoListPage(QWidget *parent)
    : QWidget(parent), ui(new Ui::ToDoListPage)
{
    ui->setupUi(this);
    this->setFixedHeight(1000);
    this->setFixedWidth(1600);

    //random dummy data for now
    for (int var = 0; var < 11; ++var) {
        ui->completedTasks->addItem("Task Number "+QString::number(var));
        ui->completedTasks->addItem("             ");
        ui->activeTasks->addItem("Task Number "+QString::number(var));
        ui->activeTasks->addItem("             ");
        ui->upNextTasks->addItem("Task Number "+QString::number(var));
        ui->upNextTasks->addItem("             ");
    }

}

ToDoListPage::~ToDoListPage()
{
    delete ui;
}

void ToDoListPage::on_markCompleteButton_clicked()
{

}

void ToDoListPage::on_markActiveButton_clicked()
{

}

void ToDoListPage::on_markUpNextButton_clicked()
{

}

void ToDoListPage::on_deleteItemButton_clicked()
{

    deleteItemFromCompletedSection();
    deleteItemFromActiveSection();
    deleteItemFromUpNestSection();

}

void ToDoListPage::on_addItemButton_clicked()
{
    if(ui->comboBox->currentIndex()==0){
        ui->completedTasks->addItem(ui->newToDoLineEdit->text());
        ui->completedTasks->addItem("             ");
    }

    if(ui->comboBox->currentIndex()==1){
        ui->upNextTasks->addItem(ui->newToDoLineEdit->text());
        ui->upNextTasks->addItem("             ");
    }

    if(ui->comboBox->currentIndex()==2){
        ui->activeTasks->addItem(ui->newToDoLineEdit->text());
        ui->activeTasks->addItem("             ");
    }

}


void ToDoListPage::deleteItemFromCompletedSection(){
    QListWidgetItem *temp= ui->completedTasks->currentItem();
    QModelIndex tempIndex = ui->completedTasks->indexFromItem(temp);

    int count=ui->completedTasks->count();
    qDebug()<< tempIndex.row();

    ui->completedTasks->setCurrentIndex(tempIndex);
    delete temp;
    QListWidgetItem *temp2= ui->completedTasks->currentItem();
    delete temp2;
    ui->completedTasks->setCurrentIndex(ui->completedTasks->indexFromItem(temp));
}

void ToDoListPage::deleteItemFromActiveSection(){
    QListWidgetItem *temp= ui->activeTasks->currentItem();
    QModelIndex tempIndex = ui->activeTasks->indexFromItem(temp);

    int count=ui->activeTasks->count();
    qDebug()<< tempIndex.row();

    ui->activeTasks->setCurrentIndex(tempIndex);
    delete temp;
    QListWidgetItem *temp2= ui->activeTasks->currentItem();
    delete temp2;
    ui->activeTasks->setCurrentIndex(ui->completedTasks->indexFromItem(temp));

};

void ToDoListPage::deleteItemFromUpNestSection(){
    QListWidgetItem *temp= ui->upNextTasks->currentItem();
    QModelIndex tempIndex = ui->upNextTasks->indexFromItem(temp);

    int count=ui->upNextTasks->count();
    qDebug()<< tempIndex.row();

    ui->upNextTasks->setCurrentIndex(tempIndex);
    delete temp;
    QListWidgetItem *temp2= ui->upNextTasks->currentItem();
    delete temp2;
    ui->upNextTasks->setCurrentIndex(ui->completedTasks->indexFromItem(temp));

};














