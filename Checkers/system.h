#ifndef SYSTEM_H
#define SYSTEM_H
#include <QtWidgets>
#include "game.h"
#include "menu.h"
#include "view.h"

class System : public QGraphicsScene
{
private:
    Menu* menu;
public:
    System();
};

#endif // SYSTEM_H
