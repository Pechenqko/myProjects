#ifndef MENU_H
#define MENU_H

#include <QtWidgets>

class Menu: public QWidget
{
    Q_OBJECT
private:
    QPixmap pxt;
public:
    Menu(QGraphicsScene* scene);
    QSize GetSizeMenu();
signals:

public slots:
};

#endif // MENU_H
