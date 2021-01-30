#ifndef DGST_H
#define DGST_H

#include <QWidget>

namespace Ui {
class dgst;
}

class dgst : public QWidget
{
    Q_OBJECT

public:
    explicit dgst(QWidget *parent = nullptr);
    ~dgst();

private:
    Ui::dgst *ui;
};

#endif // DGST_H
