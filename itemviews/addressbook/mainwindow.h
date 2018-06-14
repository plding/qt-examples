#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui>
#include "addresswidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();

// private slots:
//     void updateActions(const QItemSelection &selection);
//     void openFile();
//     void saveFile();

private:
    void createMenus();

    AddressWidget *addressWidget;
    QMenu *fileMenu;
    QMenu *toolMenu;
    QAction *openAct;
    QAction *saveAct;
    QAction *exitAct;
    QAction *addAct;
    QAction *editAct;
    QAction *removeAct;
};

#endif  /* MAINWINDOW_H */
