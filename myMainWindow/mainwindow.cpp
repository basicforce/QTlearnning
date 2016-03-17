#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QAction *openAction = new QAction(tr("Open"), this);
    QIcon icon(":/myImages/actions/document-new.png");

    openAction->setIcon(icon);
    openAction->setShortcut(QKeySequence(tr("Ctrl+O")));

    ui->menu_F->addAction(openAction);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionXinjian_triggered()
{
    QMessageBox::warning(this, QStringLiteral("新建"), QStringLiteral("新文件"));
}
