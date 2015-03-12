#include "botonerapuerta.h"
#include "ui_botonerapuerta.h"

BotoneraPuerta::BotoneraPuerta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BotoneraPuerta)
{
    ui->setupUi(this);
    ui->quickWidget->setSource(QUrl("qrc:/BotoneraPuerta.qml"));
    ui->quickWidget->setClearColor(Qt::transparent);
    ui->quickWidget->setAttribute(Qt::WA_AlwaysStackOnTop);
}

BotoneraPuerta::~BotoneraPuerta()
{
    delete ui;
}
