#include <QtWidgets>
#include "menu.h"


#define HeightButton 80
#define WidthButton 60

Menu::Menu(QGraphicsScene*scene)
{
    this->scene = scene;
    QLabel lbl;
    QMovie mov(":/giphy.gif");

    lbl.setMovie(&mov);
    lbl.resize(300, 270);

    pxt.load("background.png");
    QPalette pal;
    pal.setBrush(backgroundRole(),pxt);
    setPalette(pal);
    resize(1200,800);
    autoFillBackground();

    horizontal = new QHBoxLayout;
    layout = new QVBoxLayout;
    QVBoxLayout* layout2 = new QVBoxLayout;
    layout2->addWidget(&lbl);

    layout->setStretch(1,0);
    layout->setStretch(2,0);
    layout->setStretch(3,0);
    layout->setMargin(0);

    horizontal->addLayout(layout2);
    horizontal->addLayout(layout);

    NewGame = new QPushButton("&Новая игра");
    LoadGame = new QPushButton("&Загрузить игру");
    ExitFromGame = new QPushButton("&Выход");

    layout->setMargin(0);

    layout->setAlignment(NewGame,Qt::AlignCenter);
    layout->setAlignment(LoadGame,Qt::AlignCenter);
    layout->setAlignment(ExitFromGame,Qt::AlignCenter);


    NewGame->setAutoFillBackground(true);
    LoadGame->setAutoFillBackground(true);
    ExitFromGame->setAutoFillBackground(true);

    NewGame->setFixedHeight(HeightButton);
    NewGame->setFixedWidth(WidthButton);

    LoadGame->setFixedHeight(HeightButton);
    LoadGame->setFixedWidth(WidthButton);

    ExitFromGame->setFixedHeight(HeightButton);
    ExitFromGame->setFixedWidth(WidthButton);

    NewGame->setStyleSheet( "QPushButton"
                            "{"
                                "background-color: rgb(150, 200, 0);"
                                "border-style: inset;"
                                "color: red;"
                                "border-style: outset;"
                                "border-width: 0px;"
                                "border-radius: 10px;"
                                "border-color: beige;"
                                "font: bold 14p;"
                                "min-width: 10em;"
                                "padding: 0px;"
                            "}"
                            "QPushButton:hover"
                            "{"
                                "background-color: rgb(224, 200, 0);"
                                "border-style: inset;"
                                "color: red;"
                                "border-style: outset;"
                                "border-width: 0px;"
                                "border-radius: 10px;"
                                "border-color: beige;"
                                "font: bold 14p;"
                                "min-width: 10em;"
                                "padding: 0px;"
                            "}"
                            "QPushButton:pressed"
                            "{"
                                "background-color: rgb(224, 200, 100);"
                                "border-style: inset;"
                                "color: red;"
                                "border-style: outset;"
                                "border-width: 0px;"
                                "border-radius: 10px;"
                                "border-color: beige;"
                                "font: bold 14p;"
                                "min-width: 10em;"
                                "padding: 0px;"
                            "}");

    LoadGame->setStyleSheet( "QPushButton"
                            "{"
                                "background-color: rgb(150, 200, 0);"
                                "border-style: inset;"
                                "color: red;"
                                "border-style: outset;"
                                "border-width: 0px;"
                                "border-radius: 10px;"
                                "border-color: beige;"
                                "font: bold 14p;"
                                "min-width: 10em;"
                                "padding: 0px;"
                            "}"
                            "QPushButton:hover"
                            "{"
                                "background-color: rgb(224, 200, 0);"
                                "border-style: inset;"
                                "color: red;"
                                "border-style: outset;"
                                "border-width: 0px;"
                                "border-radius: 10px;"
                                "border-color: beige;"
                                "font: bold 14p;"
                                "min-width: 10em;"
                                "padding: 0px;"
                            "}"
                            "QPushButton:pressed"
                            "{"
                                "background-color: rgb(224, 200, 100);"
                                "border-style: inset;"
                                "color: red;"
                                "border-style: outset;"
                                "border-width: 0px;"
                                "border-radius: 10px;"
                                "border-color: beige;"
                                "font: bold 14p;"
                                "min-width: 10em;"
                                "padding: 0px;"
                            "}");

    ExitFromGame->setStyleSheet( "QPushButton"
                            "{"
                                "background-color: rgb(150, 200, 0);"
                                "border-style: inset;"
                                "color: red;"
                                "border-style: outset;"
                                "border-width: 0px;"
                                "border-radius: 10px;"
                                "border-color: beige;"
                                "font: bold 14p;"
                                "min-width: 10em;"
                                "padding: 0px;"
                            "}"
                            "QPushButton:hover"
                            "{"
                                "background-color: rgb(224, 200, 0);"
                                "border-style: inset;"
                                "color: red;"
                                "border-style: outset;"
                                "border-width: 0px;"
                                "border-radius: 10px;"
                                "border-color: beige;"
                                "font: bold 14p;"
                                "min-width: 10em;"
                                "padding: 0px;"
                            "}"
                            "QPushButton:pressed"
                            "{"
                                "background-color: rgb(224, 200, 100);"
                                "border-style: inset;"
                                "color: red;"
                                "border-style: outset;"
                                "border-width: 0px;"
                                "border-radius: 10px;"
                                "border-color: beige;"
                                "font: bold 14p;"
                                "min-width: 10em;"
                                "padding: 0px;"
                            "}");


    layout->addWidget(NewGame);
    layout->addWidget(LoadGame);
    layout->addWidget(ExitFromGame);
    setLayout(horizontal);
}

QSize Menu::GetSizeMenu()
{
    return pxt.size();
}

QPushButton *Menu::GetButtonForExit()
{
    return ExitFromGame;
}

QPushButton *Menu::GetButtonForNewGame()
{
    return NewGame;
}

void Menu::CaseModeGame(bool)
{
    layout->removeWidget(NewGame);
    layout->removeWidget(LoadGame);
    layout->removeWidget(ExitFromGame);
    layout = new QVBoxLayout;
    GameWithTwoPlayers = new QPushButton("2 Игрока");
    GameVsPc = new QPushButton("Игра против компьютера");

    GameWithTwoPlayers->setStyleSheet( "QPushButton"
                                "{"
                                    "background-color: rgb(150, 200, 0);"
                                    "border-style: inset;"
                                    "color: red;"
                                    "border-style: outset;"
                                    "border-width: 0px;"
                                    "border-radius: 10px;"
                                    "border-color: beige;"
                                    "font: bold 14p;"
                                    "min-width: 10em;"
                                    "padding: 0px;"
                                "}"
                                "QPushButton:hover"
                                "{"
                                    "background-color: rgb(224, 200, 0);"
                                    "border-style: inset;"
                                    "color: red;"
                                    "border-style: outset;"
                                    "border-width: 0px;"
                                    "border-radius: 10px;"
                                    "border-color: beige;"
                                    "font: bold 14p;"
                                    "min-width: 10em;"
                                    "padding: 0px;"
                                "}"
                                "QPushButton:pressed"
                                "{"
                                    "background-color: rgb(224, 200, 100);"
                                    "border-style: inset;"
                                    "color: red;"
                                    "border-style: outset;"
                                    "border-width: 0px;"
                                    "border-radius: 10px;"
                                    "border-color: beige;"
                                    "font: bold 14p;"
                                    "min-width: 10em;"
                                    "padding: 0px;"
                                "}");
    GameVsPc->setStyleSheet( "QPushButton"
                             "{"
                                 "background-color: rgb(150, 200, 0);"
                                 "border-style: inset;"
                                 "color: red;"
                                 "border-style: outset;"
                                 "border-width: 0px;"
                                 "border-radius: 10px;"
                                 "border-color: beige;"
                                 "font: bold 14p;"
                                 "min-width: 10em;"
                                 "padding: 0px;"
                             "}"
                             "QPushButton:hover"
                             "{"
                                 "background-color: rgb(224, 200, 0);"
                                 "border-style: inset;"
                                 "color: red;"
                                 "border-style: outset;"
                                 "border-width: 0px;"
                                 "border-radius: 10px;"
                                 "border-color: beige;"
                                 "font: bold 14p;"
                                 "min-width: 10em;"
                                 "padding: 0px;"
                             "}"
                             "QPushButton:pressed"
                             "{"
                                 "background-color: rgb(224, 200, 100);"
                                 "border-style: inset;"
                                 "color: red;"
                                 "border-style: outset;"
                                 "border-width: 0px;"
                                 "border-radius: 10px;"
                                 "border-color: beige;"
                                 "font: bold 14p;"
                                 "min-width: 10em;"
                                 "padding: 0px;"
                             "}");
    layout->setAlignment(GameWithTwoPlayers,Qt::AlignCenter);
    layout->setAlignment(GameVsPc,Qt::AlignCenter);

    GameWithTwoPlayers->setFixedHeight(HeightButton);
    GameWithTwoPlayers->setFixedWidth(WidthButton);

    GameVsPc->setFixedHeight(HeightButton);
    GameVsPc->setFixedWidth(WidthButton);

    layout->addWidget(GameWithTwoPlayers);
    layout->addWidget(GameVsPc);
    horizontal->addLayout(layout);
}



