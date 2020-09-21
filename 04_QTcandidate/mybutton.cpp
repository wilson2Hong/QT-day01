#include "mybutton.h"
#include<qDebug>
MyButton::MyButton(QWidget *parent) : QPushButton(parent)
{

}
MyButton::~MyButton()
{
    qDebug()<<"按钮被析构";
}
