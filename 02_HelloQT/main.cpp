#include<QApplication>
#include<Qwidget>//窗口空间基类给按钮设置内容
#include<QPushButton>

int main(int argc,char **argv)
{
   QApplication app(argc,argv);

   QWidget w;
   w.setWindowTitle(QString("主要看气质"));//设置标题


   QPushButton b;
   b.setText("^_^");//给按钮设置内容
   b.setParent(&w);//指定父对象
   b.move(100,100);//移动坐标


   QPushButton b1(&w);
   b1.setText("abc");

   w.show();

//   QPushButton b;
//   b.setText("^_^");//给按钮设置内容
//   b.show();


   /*如果不指定父对象，对象和对象（窗口和窗口之间没有关系），独立
    *a指定b为它的父对象，a放在b的上面
    * 指定父对象，有两种方式：
    *       1）setParent
    *       2）通过构造函数传参
    * 指定父对象，只需父对象显示，上面的子对象自动显示
   */
   app.exec();
   return 0;
}
