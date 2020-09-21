#include "mainwindow.h"
#include<QMenuBar>
#include<QAction>
#include<QDebug>
#include<QPushButton>
#include<QToolBar>
#include<QStatusBar>
#include<QLabel>
#include<QTextEdit>
#include<QDockWidget>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //1菜单栏
     QMenuBar *mBar = menuBar();
     //添加菜单
     QMenu *qFile = mBar->addMenu("文件");

     //添加菜单项，添加动作
     QAction *pNew = qFile->addAction("新建");

     connect(pNew,&QAction::triggered,
             [=]()
             {
         qDebug()<<"新建被按下";
             }
             );
     qFile->addSeparator();//添加分割线
     QAction *pOpen = qFile->addAction("打开");

    //2工具栏 菜单项的快捷方式
     QToolBar *toolBar = addToolBar("toolBar");

     //工具栏添加快捷键
     toolBar->addAction(pNew);

     QPushButton *b = new QPushButton(this);
     b->setText("^_^");

     //添加小控件
     toolBar->addWidget(b);

     connect(b,&QPushButton::clicked,
             [=]()
             {
         b->setText("123");
             }
             );

     //3状态栏
     QStatusBar *sBar = statusBar();
     QLabel *label = new QLabel(this);
     label->setText("Normal text file");
     sBar->addWidget(label);
     //addWidget 从左往右添加
     sBar->addWidget(new QLabel("2",this));
    //addPermanentWidget 从右往左添加
     sBar->addPermanentWidget(new QLabel("3",this));


    //4核心控件

     QTextEdit *textEdit = new QTextEdit(this);
     setCentralWidget(textEdit);

    //5浮动窗口
     QDockWidget *dock = new QDockWidget(this);
     addDockWidget(Qt::RightDockWidgetArea,dock);
    //给浮动窗口添加文本编辑
    QTextEdit *textEdit1 = new QTextEdit(this);
    dock->setWidget(textEdit1);
}

MainWindow::~MainWindow()
{

}
