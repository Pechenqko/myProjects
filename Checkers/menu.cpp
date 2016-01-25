#include <QtWidgets>
#include "menu.h"

Menu::Menu(QGraphicsScene* scene)
{
    pxt.load("background.png");
    QPalette pal;
    pal.setBrush(backgroundRole(),pxt);
    setPalette(pal);
    resize(1200,800);
    autoFillBackground();
}

QSize Menu::GetSizeMenu()
{
    return pxt.size();
}

