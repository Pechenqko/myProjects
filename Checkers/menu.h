#ifndef MENU_H
#define MENU_H

#include <QtWidgets>

class Menu: public QWidget
{
    Q_OBJECT
private:
    QGraphicsScene* scene;
    QPushButton* ExitFromGame;
    QPixmap pxt;
    QVBoxLayout* layout;
    QHBoxLayout* horizontal;
    QPushButton* NewGame;
    QPushButton* LoadGame;
    QPushButton* GameWithTwoPlayers;
    QPushButton* GameVsPc;
public:
    Menu(QGraphicsScene* scene);
    QSize GetSizeMenu();
    QPushButton* GetButtonForExit();
    QPushButton* GetButtonForNewGame();
public slots:
    void CaseModeGame(bool);
};

#endif // MENU_H
