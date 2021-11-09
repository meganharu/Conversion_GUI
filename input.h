#ifndef INPUT_H
#define INPUT_H

#include <QWidget>
#include <QButtonGroup>
#include <QCheckBox>

namespace Ui {
class Input;
}

class Input : public QWidget
{
    Q_OBJECT

public:
    explicit Input(QWidget *parent = nullptr);
    ~Input();

private slots:

    void onBtnFunc(int n);
    void checkBox_clicked();

private:

    Ui::Input *ui;
    QButtonGroup *buttonGroup;


};

#endif // INPUT_H
