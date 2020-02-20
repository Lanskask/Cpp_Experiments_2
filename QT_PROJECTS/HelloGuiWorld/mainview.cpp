#include "mainview.h"
#include "ui_mainview.h"

MainView::MainView(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainView)
{
    ui->setupUi(this);
    ui->w_exitButton->setText(tr("Exit Now"));
//    connect(ui->w_exitButton, SIGNAL(clicked()), SLOT(close()));
//    connect(ui->w_exitButton, &QPushButton::clicked, this, &QMainWindow::close);
//    connect(ui->w_exitButton, &QPushButton::clicked, this, [this](){this->close();});
//    ui->w_exitButton->disconnect();


}

MainView::~MainView()
{
    delete ui;
}

