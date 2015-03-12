#include "botonerahombremuerto.h"
#include "ui_botonerahombremuerto.h"

BotoneraHombreMuerto::BotoneraHombreMuerto(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BotoneraHombreMuerto)
{
    ui->setupUi(this);
    ui->quickWidget->setSource(QUrl("qrc:/BotoneraHombreMuerto.qml"));
    ui->quickWidget->setClearColor(Qt::transparent);
    ui->quickWidget->setAttribute(Qt::WA_AlwaysStackOnTop);
}

BotoneraHombreMuerto::~BotoneraHombreMuerto()
{
    delete ui;
}
