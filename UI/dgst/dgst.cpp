#include "dgst.h"
#include "ui_dgst.h"

dgst::dgst(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dgst)
{
    ui->setupUi(this);
}

dgst::~dgst()
{
    delete ui;
}
