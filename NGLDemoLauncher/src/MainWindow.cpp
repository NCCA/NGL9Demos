#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QFileSystemModel>
#include <QFileIconProvider>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createFilesystemModel();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::createFilesystemModel()
{
    m_model=new QFileSystemModel(ui->fileViews);
    auto path=QDir::currentPath();

    ui->fileViews->setModel(m_model);
    m_model->setRootPath(path);
    ui->fileViews->setRootIndex(m_model->index(QDir::currentPath()));


}
