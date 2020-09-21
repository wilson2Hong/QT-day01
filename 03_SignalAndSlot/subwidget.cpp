#include "subwidget.h"

subWidget::subWidget(QWidget *parent) : QWidget(parent)
{
   this->setWindowTitle("小弟");
    b.setParent(this);
    b.setText("切换到主窗口");
    connect(&b,&QPushButton::clicked,this,subWidget::sendSlot);
    resize(400,300);
}
void subWidget::sendSlot()
{

    emit mySignal();
    emit mySignal(250,"我是子窗口");
}
