#include "system.h"
System::System()
{
    View* view = new View(*this);
    menu = new Menu(this); //qwidget menu

    QObject::connect(menu->GetButtonForExit(),SIGNAL(clicked(bool)),view,SLOT(close()));
    QObject::connect(menu->GetButtonForNewGame(),SIGNAL(clicked(bool)),menu,SLOT(CaseModeGame(bool)));

    view->resize(QSize(menu->GetSizeMenu().width(),menu->GetSizeMenu().height())); // set size view = size background picture menu
    addWidget(menu);
    view->show();
}

