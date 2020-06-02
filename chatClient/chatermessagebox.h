#ifndef CHATERMESSAGEBOX_H
#define CHATERMESSAGEBOX_H

#include <QWidget>

namespace Ui {
class chaterMessageBox;
}

class chaterMessageBox : public QWidget
{
    Q_OBJECT

public:
    explicit chaterMessageBox(QWidget *parent = nullptr);
    ~chaterMessageBox();
    void setText(const QString &);

private:
    Ui::chaterMessageBox *ui;
};

#endif // CHATERMESSAGEBOX_H
