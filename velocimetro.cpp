#include "velocimetro.h"
#include "ui_velocimetro.h"

Velocimetro::Velocimetro(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Velocimetro)
{
    ui->setupUi(this);
    ui->quickWidget->setSource(QUrl("qrc:/Velocimetro.qml"));
    ui->quickWidget->setClearColor(Qt::transparent);
    ui->quickWidget->setAttribute(Qt::WA_AlwaysStackOnTop);
}

Velocimetro::~Velocimetro()
{
    delete ui;
}
