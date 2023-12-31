#ifndef COUNTDOWN_H
#define COUNTDOWN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Countdown; }
QT_END_NAMESPACE

class Countdown : public QMainWindow
{
    Q_OBJECT

public:
    Countdown(QWidget *parent = nullptr);
    ~Countdown();

private slots:
    QString createTimeString(int hours, int minutes, int seconds);
    void resetUI();
    void ticker();
    void on_cdButton_clicked();
    void on_closeButton_clicked();
    void on_resetButton_clicked();


private:
    Ui::Countdown *ui;

    QTimer *timer;

    QString cSeconds {"00"};
    QString cMinutes {"00"};
    QString cHours {"00"};

    bool timerStarted {false};
    bool defaultState {true};
};
#endif // COUNTDOWN_H
