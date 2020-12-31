#include "goodslist.h"
#include "ui_goodslist.h"

GoodsList::GoodsList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GoodsList)
{
    ui->setupUi(this);

    QStringList listGoodsHeader;
    QStandardItemModel *listGoodsModel = new QStandardItemModel;

    listGoodsHeader.append("Полное наименование товара");
    listGoodsHeader.append("Тип товара");
    listGoodsHeader.append("Количество");
    listGoodsHeader.append("Стоимость");
    listGoodsHeader.append("Цена за штуку");
    listGoodsHeader.append("Фирма-производитель");

    listGoodsModel->setHorizontalHeaderLabels(listGoodsHeader);

    addElementToTable("Шариковая ручка Erichcrause", 0, 0, listGoodsModel);
    addElementToTable("Шариковая ручка", 0, 1, listGoodsModel);
    addElementToTable("300", 0, 2, listGoodsModel);
    addElementToTable("1800", 0, 3, listGoodsModel);
    addElementToTable("6", 0, 4, listGoodsModel);
    addElementToTable("Erichcrause", 0, 5, listGoodsModel);

    addElementToTable("Канцелярский нож Erichcrause", 1, 0, listGoodsModel);
    addElementToTable("Канцелярский нож", 1, 1, listGoodsModel);
    addElementToTable("400", 1, 2, listGoodsModel);
    addElementToTable("4800", 1, 3, listGoodsModel);
    addElementToTable("12", 1, 4, listGoodsModel);
    addElementToTable("Erichcrause", 1, 5, listGoodsModel);

    addElementToTable("Маркер Erichcrause", 2, 0, listGoodsModel);
    addElementToTable("Маркер", 2, 1, listGoodsModel);
    addElementToTable("25", 2, 2, listGoodsModel);
    addElementToTable("2500", 2, 3, listGoodsModel);
    addElementToTable("10", 2, 4, listGoodsModel);
    addElementToTable("Erichcrause", 2, 5, listGoodsModel);

    addElementToTable("Корректор Erichcrause", 3, 0, listGoodsModel);
    addElementToTable("Корректор", 3, 1, listGoodsModel);
    addElementToTable("25", 3, 2, listGoodsModel);
    addElementToTable("5000", 3, 3, listGoodsModel);
    addElementToTable("20", 3, 4, listGoodsModel);
    addElementToTable("Erichcrause", 3, 5, listGoodsModel);

    ui->tableGoods->setModel(listGoodsModel);
    ui->tableGoods->resizeColumnsToContents();
    ui->tableGoods->resizeRowsToContents();
}

void GoodsList::addElementToTable(QString element, int posY, int posX, QStandardItemModel *model)
{
    QStandardItem *goodParam;

    goodParam = new QStandardItem(QString(element));
    model->setItem(posY, posX, goodParam);
}

GoodsList::~GoodsList()
{
    delete ui;
}
