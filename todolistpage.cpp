#include "ToDoListPage.h"
#include "ui_todolistpage.h"

#include <QDebug.h>

ToDoListPage::ToDoListPage(QWidget *parent)
    : QWidget(parent), ui(new Ui::ToDoListPage)
{
    ui->setupUi(this);
    this->setFixedHeight(1000);
    this->setFixedWidth(1600);

    //random dummy data for now
    ui->activeTasks->addItem("             ");
    ui->upNestTasks->addItem("             ");
    ui->completedTasks->addItem("             ");

    for (int var = 0; var < 11; ++var) {
        ui->completedTasks->addItem("Task Number "+QString::number(var));
        ui->completedTasks->addItem("             ");
        ui->upNestTasks->addItem("Task Number "+QString::number(var));
        ui->upNestTasks->addItem("             ");
        ui->activeTasks->addItem("Task Number "+QString::number(var));
        ui->activeTasks->addItem("             ");
    }

}

ToDoListPage::~ToDoListPage()
{
    delete ui;
}

void ToDoListPage::on_markCompleteButton_clicked()
{
    QListWidgetItem *temp= ui->upNestTasks->currentItem();
    QListWidgetItem *temp2= ui->activeTasks->currentItem();

    qDebug()<<temp;
    qDebug()<<temp2;
    if(temp == 0x0){
        qDebug()<< "oxo";
    }
    if(temp != 0x0){
        ui->completedTasks->addItem(temp->text());
        deleteItemFromActiveSection();
    }
    if(temp2 != 0x0){
        ui->completedTasks->addItem(temp2->text());
        deleteItemFromUpNestSection();
    }

     ui->completedTasks->addItem("             ");



}

void ToDoListPage::on_markActiveButton_clicked()
{
    QListWidgetItem *temp= ui->completedTasks->currentItem();
    QListWidgetItem *temp2= ui->activeTasks->currentItem();

    qDebug()<<temp;
    qDebug()<<temp2;
    if(temp != 0x0){
        ui->activeTasks->addItem(temp->text());
        deleteItemFromCompletedSection();
    }
    if(temp2 != 0x0){
        ui->activeTasks->addItem(temp2->text());
        deleteItemFromUpNestSection();
    }

    ui->activeTasks->addItem("             ");


}

void ToDoListPage::on_markUpNextButton_clicked()
{
    QListWidgetItem *temp= ui->upNestTasks->currentItem();
    QListWidgetItem *temp2= ui->completedTasks->currentItem();

    qDebug()<<temp;
    qDebug()<<temp2;
    if(temp != 0x0){
        ui->upNestTasks->addItem(temp->text());
       deleteItemFromActiveSection();
    }
    if(temp2 != 0x0){
        ui->upNestTasks->addItem(temp2->text());
        deleteItemFromCompletedSection();
    }

    ui->upNestTasks->addItem("             ");


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
        ui->activeTasks->addItem(ui->newToDoLineEdit->text());
        ui->activeTasks->addItem("             ");
    }

    if(ui->comboBox->currentIndex()==2){
        ui->upNestTasks->addItem(ui->newToDoLineEdit->text());
        ui->upNestTasks->addItem("             ");
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
    QListWidgetItem *temp= ui->upNestTasks->currentItem();
    QModelIndex tempIndex = ui->upNestTasks->indexFromItem(temp);

    int count=ui->upNestTasks->count();
    qDebug()<< tempIndex.row();

    ui->upNestTasks->setCurrentIndex(tempIndex);
    delete temp;
    QListWidgetItem *temp2= ui->upNestTasks->currentItem();
    delete temp2;
    ui->upNestTasks->setCurrentIndex(ui->completedTasks->indexFromItem(temp));

};

void ToDoListPage::deleteItemFromUpNestSection(){
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














