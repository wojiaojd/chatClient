#ifndef CHATERMESSAGEBOX_H
#define CHATERMESSAGEBOX_H

#include <QWidget>

namespace Ui {
class chaterMessageBox;
}

class ChaterMessageBox : public QWidget
{
    Q_OBJECT

public:
    explicit ChaterMessageBox(QWidget *parent = nullptr);
    ~ChaterMessageBox();
    void setText(const QString &);

private:
    Ui::chaterMessageBox *ui;
};

#endif // CHATERMESSAGEBOX_H
