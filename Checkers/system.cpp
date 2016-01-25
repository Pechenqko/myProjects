#include "system.h"

System::System()
{
    View* view = new View(*this);
    Menu* menu = new Menu(this); //qwidget menu
    view->resize(QSize(menu->GetSizeMenu().width()+2,menu->GetSizeMenu().height()+2)); // set size view = size background picture menu
    addWidget(menu);
    view->show();
}
