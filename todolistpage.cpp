#include "ToDoListPage.h"
#include "ui_todolistpage.h"

#include <QDebug.h>

ToDoListPage::ToDoListPage(QWidget *parent)
    : QWidget(parent), ui(new Ui::ToDoListPage),
    firebaseManager(new FirebaseManager(this))
{
    ui->setupUi(this);
    this->setFixedHeight(1000);
    this->setFixedWidth(1600);

    connect(firebaseManager, &FirebaseManager::dataReceived, this, &ToDoListPage::onDataReceived);

    connect(firebaseManager, &FirebaseManager::checkIfDataExistsFinished, this, &ToDoListPage::oncheckReplyFinished);

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
    firebaseManager->getData("tasks");
    ui->activeTasks->addItem("             ");
    ui->upNestTasks->addItem("             ");
    ui->completedTasks->addItem("             ");


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
    if(temp){
        ui->completedTasks->addItem(temp->text());
        deleteItemFromActiveSection();

        QString taskName = temp->text();
        if (!taskName.isEmpty()) {
            QJsonObject taskJSONObject;
            taskJSONObject["name"] = taskName;
            taskJSONObject["tag"] = "completed";

            firebaseManager->postData("tasks", taskJSONObject);
            ToDoListPage::onTaskAdded(1);
        }

    }
    if(temp2 ){
        ui->completedTasks->addItem(temp2->text());
        deleteItemFromUpNestSection();

        QString taskName = temp2->text();
        if (!taskName.isEmpty()) {
            QJsonObject taskJSONObject;
            taskJSONObject["name"] = taskName;
            taskJSONObject["tag"] = "completed";

            firebaseManager->postData("tasks", taskJSONObject);
            ToDoListPage::onTaskAdded(1);
        }
    }

     ui->completedTasks->addItem("             ");



}

void ToDoListPage::on_markActiveButton_clicked()
{
    QListWidgetItem *temp= ui->completedTasks->currentItem();
    QListWidgetItem *temp2= ui->activeTasks->currentItem();

    qDebug()<<temp;
    qDebug()<<temp2;
    if(temp){
        ui->activeTasks->addItem(temp->text());
        deleteItemFromCompletedSection();

        QString taskName = temp->text();
        if (!taskName.isEmpty()) {
            QJsonObject taskJSONObject;
            taskJSONObject["name"] = taskName;
            taskJSONObject["tag"] = "active";

            firebaseManager->postData("tasks", taskJSONObject);
            ToDoListPage::onTaskAdded(1);
        }
    }
    if(temp2){
        ui->activeTasks->addItem(temp2->text());
        deleteItemFromUpNestSection();

        QString taskName = temp2->text();
        if (!taskName.isEmpty()) {
            QJsonObject taskJSONObject;
            taskJSONObject["name"] = taskName;
            taskJSONObject["tag"] = "active";

            firebaseManager->postData("tasks", taskJSONObject);
            ToDoListPage::onTaskAdded(1);
        }
    }

    ui->activeTasks->addItem("             ");


}

void ToDoListPage::on_markUpNextButton_clicked()
{
    QListWidgetItem *temp= ui->upNestTasks->currentItem();
    QListWidgetItem *temp2= ui->completedTasks->currentItem();

    qDebug()<<temp;
    qDebug()<<temp2;
    if(temp){
        ui->upNestTasks->addItem(temp->text());
       deleteItemFromActiveSection();

        QString taskName = temp->text();
        if (!taskName.isEmpty()) {
            QJsonObject taskJSONObject;
            taskJSONObject["name"] = taskName;
            taskJSONObject["tag"] = "upNest";

            firebaseManager->postData("tasks", taskJSONObject);
            ToDoListPage::onTaskAdded(1);
        }
    }
    if(temp2){
        ui->upNestTasks->addItem(temp2->text());
        deleteItemFromCompletedSection();

        QString taskName = temp2->text();
        if (!taskName.isEmpty()) {
            QJsonObject taskJSONObject;
            taskJSONObject["name"] = taskName;
            taskJSONObject["tag"] = "upNest";

            firebaseManager->postData("tasks", taskJSONObject);
            ToDoListPage::onTaskAdded(1);
        }
    }

    ui->upNestTasks->addItem("             ");


}

void ToDoListPage::on_deleteItemButton_clicked()
{

    deleteItemFromCompletedSection();
    deleteItemFromActiveSection();
    deleteItemFromUpNestSection();
    ToDoListPage::onDeleteFinished(1);



}

void ToDoListPage::on_addItemButton_clicked()
{
    if(ui->comboBox->currentIndex()==0){
        ui->completedTasks->addItem(ui->newToDoLineEdit->text());
        ui->completedTasks->addItem("             ");

        QString taskName = ui->newToDoLineEdit->text();
        if (!taskName.isEmpty()) {
            QJsonObject taskJSONObject;
            taskJSONObject["name"] = taskName;
            taskJSONObject["tag"] = "completed";

            firebaseManager->postData("tasks", taskJSONObject);
        }
        ToDoListPage::onTaskAdded(1);
    }

    if(ui->comboBox->currentIndex()==1){
        ui->activeTasks->addItem(ui->newToDoLineEdit->text());
        ui->activeTasks->addItem("             ");

        QString taskName = ui->newToDoLineEdit->text();
        if (!taskName.isEmpty()) {
            QJsonObject taskJSONObject;
            taskJSONObject["name"] = taskName;
            taskJSONObject["tag"] = "active";

            firebaseManager->postData("tasks", taskJSONObject);
        }
        ToDoListPage::onTaskAdded(1);
    }

    if(ui->comboBox->currentIndex()==2){
        ui->upNestTasks->addItem(ui->newToDoLineEdit->text());
        ui->upNestTasks->addItem("             ");

        QString taskName = ui->newToDoLineEdit->text();
        if (!taskName.isEmpty()) {
            QJsonObject taskJSONObject;
            taskJSONObject["name"] = taskName;
            taskJSONObject["tag"] = "upNest";

            firebaseManager->postData("tasks", taskJSONObject);
        }
        ToDoListPage::onTaskAdded(1);
    }


}

void ToDoListPage::onDataReceived(const QJsonObject &data)
{
    ui->activeTasks->clear();
    ui->completedTasks->clear();
    ui->upNestTasks->clear();


    for (const QString &key : data.keys()) {
        QJsonObject task = data.value(key).toObject();
        QString taskName = task.value("name").toString();
        QString tag = task.value("tag").toString();


        qDebug()<<taskName;
        qDebug()<<tag;


        QListWidgetItem *item = new QListWidgetItem(taskName);
        qDebug()<<'test etst test';
        qDebug()<<"THis is the key when recieving data";
        qDebug()<<key;
        item->setData(Qt::UserRole, key);

        if(tag == "completed"){
            ui->completedTasks->addItem(item);
            ui->completedTasks->addItem("             ");

        }
        if(tag == "active"){
            ui->activeTasks->addItem(item);
            ui->activeTasks->addItem("             ");

        }
        if(tag == "upNest"){
            ui->upNestTasks->addItem(item);
            ui->upNestTasks->addItem("             ");

        }

    }
}

//this is not necessary (was trying to fix a bug, but somehow the bug is gone

void ToDoListPage::oncheckReplyFinished(bool success)
{
    if(success){
        qDebug()<<"Task exists";
    }else {
        qDebug() << "Task doesd not exist";
    }
}

//

void ToDoListPage::onTaskAdded(bool success)
{
    if(success){
        qDebug()<<"Task added successfully";
    }else {
        qDebug() << "Failed to post item.";
    }
}

void ToDoListPage::onDeleteFinished(bool success)
{
    if (success) {
        qDebug()<<"Task deleted successfully";
    } else {
        qDebug() << "Failed to delete item.";
    }
}


void ToDoListPage::deleteItemFromCompletedSection(){
    QListWidgetItem *temp= ui->completedTasks->currentItem();
    QModelIndex tempIndex = ui->completedTasks->indexFromItem(temp);

    int count=ui->completedTasks->count();
    qDebug()<< tempIndex.row();

    qDebug()<<"This is from completed tasks";
    qDebug()<< temp;

    ui->completedTasks->setCurrentIndex(tempIndex);
    if(temp){
        QString key = temp->data(Qt::UserRole).toString();
        qDebug()<<"hello this is the key";
        qDebug()<<"tasks/"+key;
        qDebug()<<"checkingifdataexists";
        firebaseManager->checkIfDataExists("tasks",key);
        firebaseManager->deleteData("tasks/"+key);
        delete temp;
        ToDoListPage::onDeleteFinished(1);

    }

    ui->completedTasks->setCurrentIndex(ui->completedTasks->indexFromItem(temp));
}

void ToDoListPage::deleteItemFromActiveSection(){
    QListWidgetItem *temp= ui->activeTasks->currentItem();
    QModelIndex tempIndex = ui->upNestTasks->indexFromItem(temp);

    int count=ui->upNestTasks->count();
    qDebug()<< tempIndex.row();

    qDebug()<<"This is from active tasks";
    qDebug()<< temp;

    ui->upNestTasks->setCurrentIndex(tempIndex);
    if(temp){
        QString key = temp->data(Qt::UserRole).toString();
        firebaseManager->deleteData("tasks/"+key);
        delete temp;
        ToDoListPage::onDeleteFinished(1);
    }


    ui->upNestTasks->setCurrentIndex(ui->completedTasks->indexFromItem(temp));

};

void ToDoListPage::deleteItemFromUpNestSection(){
    QListWidgetItem *temp= ui->upNestTasks->currentItem();
    QModelIndex tempIndex = ui->upNestTasks->indexFromItem(temp);

    int count=ui->upNestTasks->count();
    qDebug()<< tempIndex.row();

    qDebug()<<"This is from completed tasks";
    qDebug()<< temp;

    ui->upNestTasks->setCurrentIndex(tempIndex);
    if(temp){
        QString key = temp->data(Qt::UserRole).toString();
        qDebug()<<"hello this is the key";
        qDebug()<<"tasks/"+key;
        qDebug()<<"checkingifdataexists";
        firebaseManager->checkIfDataExists("tasks",key);
        firebaseManager->deleteData("tasks/"+key);
        delete temp;
        ToDoListPage::onDeleteFinished(1);

    }

    ui->upNestTasks->setCurrentIndex(ui->upNestTasks->indexFromItem(temp));

};
