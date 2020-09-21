#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);

signals:

public slots:

    /*Private function*/
private:
    void _initWindow();
    void _createStatusBar();
};

#endif // MAINWINDOW_H
