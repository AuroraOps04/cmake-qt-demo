#include "mainwindow.h"
#include <QtWidgets>

MainWidget::MainWidget(QWidget *parent) : QWidget(parent) {
  button_ = new QPushButton("Push Me");
  textBrowser_ = new QTextBrowser();
  QGridLayout *mainLayout = new QGridLayout;
  mainLayout->addWidget(button_, 0, 0);
  mainLayout->addWidget(textBrowser_, 1, 0);
  this->setLayout(mainLayout);
  this->setWindowTitle("Connecting button to process..");
  void (MainWidget:: *buttonClickSlot)() = &MainWidget::onButtonClicked;
  connect(button_, &QPushButton::clicked, this, buttonClickSlot);
}

MainWidget::~MainWidget() {
  delete button_;
  delete textBrowser_;
}

void MainWidget::onButtonClicked() { qDebug() << "fuck this qt"; }
