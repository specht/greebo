#include "MainWindow.h"


k_MainWindow::k_MainWindow(QWidget* parent, Qt::WindowFlags flags)
    : QMainWindow(parent, flags)
{
    this->setupLayout();
}


k_MainWindow::~k_MainWindow()
{
}


void k_MainWindow::updateLabel(const QString& as_Text)
{
    mk_Label_->setText("Oy, somebody likes " + as_Text);
}


void k_MainWindow::showBox(QListWidgetItem* ak_Item_)
{
    QMessageBox::information(this, "Juchuu!", ak_Item_->text());
}


void k_MainWindow::setupLayout()
{
    QWidget* lk_CentralWidget_ = new QWidget(this);
    this->setCentralWidget(lk_CentralWidget_);
    QBoxLayout* lk_Layout_ = new QHBoxLayout(lk_CentralWidget_);
    
    mk_Label_ = new QLabel("I CAN HAS LABEL!!");
    mk_ListWidget_ = new QListWidget();
    
    mk_ListWidget_->addItems(QStringList() << "Greebo" << "Fluffy" << "Your mama");
    
    lk_Layout_->addWidget(mk_ListWidget_);
    lk_Layout_->addWidget(mk_Label_);
    connect(mk_ListWidget_, SIGNAL(currentTextChanged(const QString&)),
            this, SLOT(updateLabel(const QString&)));
    connect(mk_ListWidget_, SIGNAL(itemActivated(QListWidgetItem*)),
            this, SLOT(showBox(QListWidgetItem*)));
}
