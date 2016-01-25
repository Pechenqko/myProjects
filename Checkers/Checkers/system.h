#ifndef SYSTEM_H
#define SYSTEM_H
#include <QtWidgets>
#include
class System : public QGraphicsScene
{
public:
    System();
    void addItem(QGraphicsItem *item);
    void removeItem(QGraphicsItem *item);
    void startMrnu();
    void startGame();
signals:

public slots:
};

#endif // SYSTEM_H
