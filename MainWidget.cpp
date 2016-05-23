#include "MainWidget.h"

MainWidget::MainWidget(
    QWidget* parent)
    : QWidget(parent)
{
    ui_.setupUi(this);
    populateGroup(groupTop_, ui_.port, ui_.stbd);
    populateGroup(groupBottom_, ui_.a, ui_.b);

    connect(&groupTop_, SIGNAL(buttonClicked(int)),
        this, SLOT(onGroupTopChange(int)));
    connect(&groupBottom_, SIGNAL(buttonClicked(int)),
        this, SLOT(onGroupBottomChange(int)));
}

MainWidget::~MainWidget()
{
}

void MainWidget::populateGroup(
    QButtonGroup& group,
    QAbstractButton* buttonOff,
    QAbstractButton* buttonOn)
{
    buttonOff->click();
    group.addButton(buttonOff, 0);
    group.addButton(buttonOn, 1);
}

void MainWidget::onGroupTopChange(int id)
{
    qDebug("%s %d", __PRETTY_FUNCTION__, id);
}

void MainWidget::onGroupBottomChange(int id)
{
    qDebug("%s %d", __PRETTY_FUNCTION__, id);
}

