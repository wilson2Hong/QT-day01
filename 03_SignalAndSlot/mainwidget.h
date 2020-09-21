#ifndef MAINWIDGET_H
#define MAINWIDGET_H
#include<QPushButton>
#include <QWidget>
#include "subWidget.h" //子窗口的头文件
class MainWidget : public QWidget
{
    Q_OBJECT

public:
    MainWidget(QWidget *parent = 0);
    ~MainWidget();
    void mySlot();
    void changeWindow();
    void dealSub();
    void dealSlot(int,QString);

private:
    QPushButton b1;
    QPushButton *b2;
    QPushButton b3;
    subWidget subWin;
};

#endif // MAINWIDGET_H
