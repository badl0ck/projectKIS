#ifndef GOODSLIST_H
#define GOODSLIST_H

#include <QMainWindow>
#include <QStandardItemModel>

namespace Ui {
class GoodsList;
}

class GoodsList : public QMainWindow
{
    Q_OBJECT

public:
    explicit GoodsList(QWidget *parent = nullptr);
    ~GoodsList();
    void addElementToTable(QString, int, int, QStandardItemModel*);

private:
    Ui::GoodsList *ui;
};

#endif // GOODSLIST_H
