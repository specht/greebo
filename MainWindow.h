#pragma once

#include <QtGui>


class k_MainWindow: public QMainWindow
{
    Q_OBJECT
public:
    k_MainWindow(QWidget * parent = 0, Qt::WindowFlags flags = 0);
    virtual ~k_MainWindow();
    
protected:
    void setupLayout();
    
protected slots:
    void updateLabel(const QString& as_Text);
    void showBox(QListWidgetItem* ak_Item_);
    
protected:
    
    QLabel* mk_Label_;
    QListWidget* mk_ListWidget_;
};
