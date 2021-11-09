#include "input.h"
#include "ui_input.h"
#include <QLineEdit>

Input::Input(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Input)
{
    ui->setupUi(this);

    buttonGroup = new QButtonGroup();
    buttonGroup->addButton(ui->checkBox, 0);
    buttonGroup->addButton(ui->checkBox_2, 1);

    connect(buttonGroup, SIGNAL(buttonClicked(int)), this, SLOT(onBtnFunc(int n)));
    connect(buttonGroup, SIGNAL(buttonClicked(int)), this, SLOT(checkBox_clicked()));
}

Input::~Input()
{
    delete ui;
}


void Input::onBtnFunc(int n){

    quint16 a = buttonGroup->checkedId();
    qWarning() << "you clicked on " << a;
}


void Input::checkBox_clicked()
{
    qWarning() << "you clicked on wav";
}

