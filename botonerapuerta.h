#ifndef BOTONERAPUERTA_H
#define BOTONERAPUERTA_H

#include <QWidget>

namespace Ui {
class BotoneraPuerta;
}

class BotoneraPuerta : public QWidget
{
    Q_OBJECT

public:
    explicit BotoneraPuerta(QWidget *parent = 0);
    ~BotoneraPuerta();

private:
    Ui::BotoneraPuerta *ui;
};

#endif // BOTONERAPUERTA_H
