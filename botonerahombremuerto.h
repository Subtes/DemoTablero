#ifndef BOTONERAHOMBREMUERTO_H
#define BOTONERAHOMBREMUERTO_H

#include <QWidget>

namespace Ui {
class BotoneraHombreMuerto;
}

class BotoneraHombreMuerto : public QWidget
{
    Q_OBJECT

public:
    explicit BotoneraHombreMuerto(QWidget *parent = 0);
    ~BotoneraHombreMuerto();

private:
    Ui::BotoneraHombreMuerto *ui;
};

#endif // BOTONERAHOMBREMUERTO_H
