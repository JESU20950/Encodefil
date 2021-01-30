#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "UI/dgst/dgst.h"

#include <QMessageBox>
#include <QTextBrowser>
#include <QHBoxLayout>
#include <QTextEdit>
#include <QPushButton>

QAction *actionData_compression;
QAction *actionSignature;
QAction *actionEncryption;
QAction *actionmd5;
QAction *actionsha224;
QAction *actionsha3_256;
QAction *actionsha384;
QAction *actionAbout;
QAction *actionsha256;
dgst *MainPanel;
QHBoxLayout *horizontalLayout;
QMenuBar *menubar;
QMenu *menuAlgorithm;
QMenu *menuCryptography;
QMenu *menuHash_2;
QMenu *menuAbout;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionAbout_triggered()
{
        QMessageBox m;
        m.about(this, "title", "Encodefil");
}

void MainWindow::on_actionSHA_1_triggered()
{

}

void MainWindow::on_actionsha224_triggered()
{

}

void MainWindow::on_actionsha256_triggered()
{
    MainPanel = new dgst(this);
    MainPanel->setObjectName(QString::fromUtf8("MainPanel"));
    MainPanel->setEnabled(true);
    QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(this->sizePolicy().hasHeightForWidth());
    this->setSizePolicy(sizePolicy);
    sizePolicy.setHeightForWidth(MainPanel->sizePolicy().hasHeightForWidth());
    MainPanel->setSizePolicy(sizePolicy);
    MainPanel->setLayoutDirection(Qt::LeftToRight);
    horizontalLayout = new QHBoxLayout(MainPanel);
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
    this->setCentralWidget(MainPanel);
}
