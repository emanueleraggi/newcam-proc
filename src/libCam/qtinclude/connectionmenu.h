#ifndef CONNECTIONMENU_H
#define CONNECTIONMENU_H

#include <QMainWindow>
#include <QSqlDatabase>
#include "../include/image.h"
#include "../include/imagelist.h"
#include "../detector/src/leftcamparameters.h"

#include <QStringList>
#include <QTreeWidgetItem>
#include <QFileDialog>
#include <QSqlQueryModel>

QT_FORWARD_DECLARE_CLASS(QTreeWidget)
//QT_FORWARD_DECLARE_CLASS(QTreeWidgetItem)
QT_FORWARD_DECLARE_CLASS(QSqlDatabase)
QT_FORWARD_DECLARE_CLASS(QMenu)


namespace Ui {
class connectionMenu;
}

class connectionMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit connectionMenu(QWidget *parent = nullptr);
    ~connectionMenu();

    void setOutputImages(ImageList<Image>::Ptr outimg);

    QString driverName() const;
    QString databaseName() const;
    QString userName() const;
    QString password() const;
    QString hostName() const;
    int port() const;
    bool useInMemoryDatabase() const;
    QSqlDatabase currentDatabase() const;


private slots:
    void on_sendImagesToTable_clicked();
    void on_connectButton_clicked();
    void on_closeButton_clicked();
    void on_newConnectionButton_clicked();
    void on_DeleteConnectionButton_clicked();
    void on_checkBox_clicked();


    void on_treeWidget_itemClicked(QTreeWidgetItem *item, int column);

    void on_pushButton_pressed();

    void on_checkBox_toggled(bool checked);

signals:
    void tableActivated(const QString &table);
    void metaDataRequested(const QString &tableName);

public slots:
    void refresh();
    void showMetaData();
    void on_treeWidget_itemActivated(QTreeWidgetItem *item, int column);
    void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);


private:
    Ui::connectionMenu *ui;
    void setActive(QTreeWidgetItem * item, int column);
    QTreeWidget *tree;
    QAction *metaDataAction;
    QString activeDb;
    leftCamParameters *leftCam;
    ImageList<Image>::Ptr imgList;
    QSqlDatabase mDatabase;
    QSqlQueryModel *mQueryModel;
};

#endif // CONNECTIONMENU_H
