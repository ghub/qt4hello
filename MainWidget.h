#pragma once

#include <QWidget>
#include <ui_MainWidget.h>

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(
        QWidget* parent = 0);
    virtual ~MainWidget();

private slots:
    void onGroupTopChange(int id);
    void onGroupBottomChange(int id);

private:
    void populateGroup(
        QButtonGroup& group,
        QAbstractButton* buttonOff,
        QAbstractButton* buttonOn);

    Ui::MainWidget ui_;
    QButtonGroup groupTop_;
    QButtonGroup groupBottom_;
};
