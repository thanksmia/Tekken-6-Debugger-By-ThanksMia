
// Copyright (c) 2021, ThanksMia
//##Tekken 6 Debugger By ThanksMia

//This Debugger  hacktool was written in C++ using QT 5.15.2 it should be a representation on
//how to build a multimedia hack tool, that has good backend but also provides user feedback.
//visit:thanksmianews.com for more information.

#include "Tekken6DebuggerByThanksMia.h"
#include "ui_Tekken6DebuggerByThanksMia.h"
#include <QWidget>
#include <QPixmap>
#include <QBitmap>
#include <qtimer.h>
#include <QMessageBox>
#include <qmovie.h>
#include <QFile>
#include <qimage.h>
#include <QtCore>
#include <QtMultimedia/QMediaPlayer>
#include <qfiledialog.h>
#include <qvideowidget.h>
#include <QDebug>
#include <qlabel.h>
#include <windows.h>
#include <QTime>


Tekken6DebuggerByThanksMia::Tekken6DebuggerByThanksMia(QWidget *parent)
    : QWidget(parent)

{
    ui.setupUi(this);
    
   
    
    Time = 0;
   
    



   
    
}

void Tekken6DebuggerByThanksMia::on_shit_clicked() {
     
     
    
    QMediaPlayer *music = new QMediaPlayer(this);
    music->setMedia(QUrl("qrc:/musik/resources/mlg/DamnSon.mp3"));
    
    if (music->state() == QMediaPlayer::PlayingState) {
        music->setPosition(0);
    }
    // if the sound is not playing, simply call play()
    else if (music->state() == QMediaPlayer::StoppedState) {
        music->play();
    }
    
        
       

        
    

}

void Tekken6DebuggerByThanksMia::on_TMAPI_clicked() {
    QMovie* movie = new QMovie(":/bilder/resources/kyceating.gif");
    qDebug() << "kyc";
    if (!movie->isValid()) {
        //something went Wrong
        return;
    }
    //play GIF
    auto label = new QLabel();
    label->resize(400, 216);
    label->move(-20, -15);
    label->setMovie(movie);
    label->show();
    movie->start();

    QTimer* timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
    timer->start(1000);
    //start time to close it after 10 sec
    QTimer::singleShot(10000, [label, &timer] {
        // label->close();
        
        label->deleteLater();
        

        });

    setAPI(API::TMAPI, _api);
    disconnect(timer, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
}
void Tekken6DebuggerByThanksMia::on_CCAPI_clicked() {
    QMovie* movie = new QMovie(":/videos/resources/lighntinglooksweird.gif");
    qDebug() << "test1";
    if (!movie->isValid()) {
        //something went Wrong
        return;
    }
    //play GIF
    auto label = new QLabel();
    label->resize(500, 500);
    label->move(-20, -15);
    label->setMovie(movie);
    label->show();
    movie->start();

    QTimer* timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
    timer->start(1000);
    //start time to close it after 10 sec
    QTimer::singleShot(10000, [label, &timer] {
        // label->close();
        label->deleteLater();

        });

    setAPI(API::CCAPI, _api);
    disconnect(timer, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
}

void Tekken6DebuggerByThanksMia::on_Connect_clicked()

{


    if (_api == API::TMAPI)
    {
        if (!tmapi.getLibraryState())
        {
            QMessageBox::critical(0, QString("ERROR"), QString("Library not loaded, make sure PS3tmapi.dll is in the executable directory"));
            QMovie* movie2 = new QMovie(":/videos/resources/sexlight2.jpg");

            qDebug() << "test2";



            //play GIF

            auto label2 = new QLabel();
            label2->resize(700, 700);
            label2->setMovie(movie2);
            label2->show();
            movie2->start();





            QTimer* timer2 = new QTimer(this);
            connect(timer2, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
            timer2->start(000);
            //start time to close it after 10 sec
            QTimer::singleShot(15000, [label2, &timer2] {
                // label->close();
                label2->deleteLater();



                });
            disconnect(timer2, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));

            QMessageBox::critical(0, QString("ERROR"), QString("Cannot Connect to PS3"));
            QMovie* movie = new QMovie(":/videos/resources/milos.gif");
            qDebug() << "test1";
            if (!movie->isValid()) {
                //something went Wrong
                return;
            }
            //play GIF
            auto label = new QLabel();
            label->resize(350, 200);
            label->setMovie(movie);
            label->show();
            movie->start();

            QTimer* timer = new QTimer(this);
            connect(timer, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
            timer->start(1000);
            //start time to close it after 10 sec
            QTimer::singleShot(4500, [label, &timer] {
                // label->close();
                label->deleteLater();

                });
        }
        else {
            if (!tmapi.connect()) {
                QMovie* movie = new QMovie(":/videos/resources/milos.gif");
                qDebug() << "test1";
                if (!movie->isValid()) {
                    //something went Wrong
                    return;
                }
                //play GIF
                auto label = new QLabel();
                label->resize(350, 200);
                label->setMovie(movie);
                label->show();
                movie->start();

                QTimer* timer = new QTimer(this);
                connect(timer, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
                timer->start(1000);
                //start time to close it after 10 sec
                QTimer::singleShot(15500, [label, &timer] {
                    // label->close();
                    label->deleteLater();

                    });
                disconnect(timer, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
                QMessageBox::critical(0, QString("ERROR"), QString("Cannot Connect to PS3"));
                QMovie* movie2 = new QMovie(":/videos/resources/seraxnoel.jpg");

                qDebug() << "test2";



                //play GIF

                auto label2 = new QLabel();
                label2->resize(700, 1024);
                label2->setMovie(movie2);
                label2->show();
                movie2->start();





                QTimer* timer2 = new QTimer(this);
                connect(timer2, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
                timer2->start(000);
                //start time to close it after 10 sec
                QTimer::singleShot(15000, [label2, &timer2] {
                    // label->close();
                    label2->deleteLater();



                    });
                disconnect(timer2, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));

            }

            else {
                QMovie* movie2 = new QMovie(":/videos/resources/seraxlightkissing.jpg");

                qDebug() << "test2";



                //play GIF

                auto label2 = new QLabel();
                label2->resize(700, 700);
                label2->move(-15, -20);
                label2->setMovie(movie2);
                label2->show();
                movie2->start();





                QTimer* timer2 = new QTimer(this);
                connect(timer2, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
                timer2->start(000);
                //start time to close it after 10 sec
                QTimer::singleShot(5000, [label2, &timer2] {
                    // label->close();
                    label2->deleteLater();



                    });
                disconnect(timer2, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
                QMessageBox::information(0, QString("Sucess"), QString("Connected to PS3"));
                QMovie* movie = new QMovie(":/videos/resources/frogwithglasses.gif");
                qDebug() << "test1";
                if (!movie->isValid()) {
                    //something went Wrong
                    return;
                }
                //play GIF
                auto label = new QLabel();
                label->resize(120, 110);
                label->move(-15, -10);
                label->setMovie(movie);
                label->show();
                movie->start();

                QTimer* timer = new QTimer(this);
                connect(timer, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
                timer->start(1000);
                //start time to close it after 10 sec
                QTimer::singleShot(5500, [label, &timer] {
                    // label->close();
                    label->deleteLater();

                    });
                disconnect(timer, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
                ui.Label->setText("Connected!");

            }
        }

       
    }

    else if (_api == API::CCAPI) {

        if (!ccapi.GetLibraryState()) {

            QMessageBox::critical(0, QString("ERROR"), QString("Library not loaded, make sure CCAPI.dll is in the executable directory"));
        }



        else {
            if (!ccapi.Connect(ui.lineEdit->text().toLocal8Bit().constData()) != CCAPI_OK) {

                QMessageBox::critical(0, QString("ERROR"), QString("Cannot Connect to PS3"));

            }
            else {
                QMessageBox::information(0, QString("Sucess"), QString("Connected to PS3"));

            }
        }


        //no library
    }
}





void Tekken6DebuggerByThanksMia::on_Attach_clicked() {

    if (_api == API::TMAPI)
    {
        if (!tmapi.connect()) {

            QMessageBox::critical(0, QString("ERROR"), QString("Cannot attach  to PS3"));


        }

        else {
            if (!tmapi.attach()) {
                QMovie* movie2 = new QMovie(":/videos/resources/cutelight.jpg");

                qDebug() << "test2";



                //play GIF

                auto label2 = new QLabel();
                label2->resize(440, 480);
                label2->setMovie(movie2);
                label2->show();
                movie2->start();





                QTimer* timer2 = new QTimer(this);
                connect(timer2, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
                timer2->start(000);
                //start time to close it after 10 sec
                QTimer::singleShot(9500, [label2, &timer2] {
                    // label->close();
                    label2->deleteLater();



                    });
                disconnect(timer2, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
                QMessageBox::critical(0, QString("ERROR"), QString("Cannot attach to PS3"));
                QMovie* movie = new QMovie(":/videos/resources/milos.gif");
                qDebug() << "test1";
                if (!movie->isValid()) {
                    //something went Wrong
                    return;
                }
                //play GIF
                auto label = new QLabel();
                label->resize(350, 200);
                label->setMovie(movie);
                label->show();
                movie->start();

                QTimer* timer = new QTimer(this);
                connect(timer, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
                timer->start(1000);
                //start time to close it after 10 sec
                QTimer::singleShot(4500, [label, &timer] {
                    // label->close();
                    label->deleteLater();

                    });
                disconnect(timer, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
            }
            else {

                QMovie* movie2 = new QMovie(":/bilder/resources/hopexlightning.jpg");

                qDebug() << "test2";



                //play GIF

                auto label2 = new QLabel();
                label2->resize(555, 600);
                label2->move(-15, -10);
                label2->setMovie(movie2);
                label2->show();
                movie2->start();





                QTimer* timer2 = new QTimer(this);
                connect(timer2, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
                timer2->start(000);
                //start time to close it after 10 sec
                QTimer::singleShot(3000, [label2, &timer2] {
                    // label->close();
                    label2->deleteLater();



                    });
                disconnect(timer2, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
                QMessageBox::information(0, QString("Sucess"), QString("Attached to PS3"));
                QMovie* movie = new QMovie(":/videos/resources/lightcar.gif");
                qDebug() << "test1";
                if (!movie->isValid()) {
                    //something went Wrong
                    return;
                }
                //play GIF
                auto label = new QLabel();
                label->resize(500, 230);
                label->move(-10, -23);
                label->setMovie(movie);
                label->show();
                movie->start();

                QTimer* timer = new QTimer(this);
                connect(timer, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
                timer->start(1000);
                //start time to close it after 10 sec
                QTimer::singleShot(3000, [label, &timer] {
                    // label->close();
                    label->deleteLater();
                    label->close();

                    });
                disconnect(timer, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
                ui.Label->setText("Attached!");

            }

        }
    }

    else if (_api == API::CCAPI) {


        if (ccapi.Connect(ui.lineEdit->text().toLocal8Bit().constData()) != CCAPI_OK) {

            QMessageBox::critical(0, QString("ERROR"), QString("Cannot Connect to PS3"));

        }
        else {
            bool found(false);
            u32 pid(~0);
            if (ccapi.AttachGameProcess(&found, &pid) != CCAPI_OK) {
                QMessageBox::critical(0, QString("ERROR"), QString("an Error ocurred attaching to game process"));
            }
            else if (!found) {
                QMessageBox::critical(0, QString("ERROR"), QString("cannot find game eprocess"));
            }
            else {

                QMessageBox::information(0, QString("Sucess"), QString("Attached to PS3"));

            }
        }
    }


    //no library
}









//hacks 

void Tekken6DebuggerByThanksMia::on_MAXHP_clicked() {
    uint num = tmapi.readData<int>(0xD2A56C);

    if (ui.MAXHP->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_MAXHP_clicked()));
            m_myLongTimer->start();
            uint num = tmapi.readData<int>(0xD2A56C);
            if (num == 0x5) {
                tmapi.writeByte(0xB2C141, 0xB4);


            }

        








    if (ui.MAXHP->checkState() == Qt::Unchecked) {

        m_myLongTimer->stop();
        disconnect(m_myLongTimer, SIGNAL(timeout()), this,
            SLOT(on_MAXHP_clicked()));


    }


    else {
       

    }


    }
    }
    }

void Tekken6DebuggerByThanksMia::on_nodropbreakingfloor_clicked() {
    

    if (ui.nodropbreakingfloor->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_nodropbreakingfloor_clicked()));
            m_myLongTimer->start();
            
          
            {
                BYTE bytes[] = { 0x00, 0x00, 0x00, 0x00 };
                tmapi.setMemory(0xB2C7EF, bytes, sizeof(bytes));
                tmapi.setMemory(0xB2D42F, bytes, sizeof(bytes));


            }










            if (ui.nodropbreakingfloor->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_nodropbreakingfloor_clicked()));


            }


            else {


            }


        }
    }
}
bool noclip = false;
void Tekken6DebuggerByThanksMia::on_NoClip_clicked() {
    if (!noclip) {
        BYTE bytes[] = { 0x00, 0x00, 0x00, 0x00, 0x01 };
        tmapi.setMemory(0x00b7fbfb, bytes, sizeof(bytes));
        noclip = true;
    }

    else {

    
        noclip = false;
    }


}

void Tekken6DebuggerByThanksMia::on_flymodp1_clicked() {
    if (ui.flymodp1->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_flymodp1_clicked()));
            m_myLongTimer->start();
            uint num = tmapi.readData<int>(0xBEF030) + 237U;
            {

                BYTE bytes[] = { 0x40, 0x90, 0x00, 0x00 };
                tmapi.setMemory(0xB2CC50, bytes, sizeof(bytes));


            }










            if (ui.flymodp1->checkState() == Qt::Unchecked) {
                BYTE bytes[] = { 0x3F, 0x80, 0x00, 0x00 };
                tmapi.setMemory(0xB2CC50, bytes, sizeof(bytes));
                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_flymodp1_clicked()));


            }


            else {


            }


        }
    }

}

void Tekken6DebuggerByThanksMia::on_flymodp2_clicked() {
    if (ui.flymodp2->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_flymodp2_clicked()));
            m_myLongTimer->start();
            uint num = tmapi.readData<int>(0xBEF030) + 237U;
            {

                BYTE bytes[] = { 0x40, 0x90, 0x00, 0x00 };
                tmapi.setMemory(0xB2D890, bytes, sizeof(bytes));


            }










            if (ui.flymodp2->checkState() == Qt::Unchecked) {
                BYTE bytes[] = { 0x3F, 0x80, 0x00, 0x00 };
                tmapi.setMemory(0xB2D890, bytes, sizeof(bytes));
                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_flymodp2_clicked()));


            }


            else {


            }


        }
    }

}

void Tekken6DebuggerByThanksMia::on_azazelp1_clicked() {
    uint num = tmapi.readData<int>(0xBEF030) + 248U;

    if (ui.azazelp1->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_azazelp1_clicked()));
            m_myLongTimer->start();
            uint num = tmapi.readData<int>(0xBEF030) + 248U;
            {

                BYTE bytes[] = { 0x00, 0x00, 0x00, 0x44 };
                tmapi.setMemory(num, bytes, sizeof(bytes));


            }










            if (ui.azazelp1->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_azazelp1_clicked()));


            }


            else {


            }


        }
    }

}

void  Tekken6DebuggerByThanksMia::on_azazelp2_clicked() {
    uint num = tmapi.readData<int>(0xBEF030) + 252U;

    if (ui.azazelp2->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_azazelp2_clicked()));
            m_myLongTimer->start();
            uint num = tmapi.readData<int>(0xBEF030) + 252U;
            {

                BYTE bytes[] = { 0x00, 0x00, 0x00, 0x44 };
                tmapi.setMemory(num, bytes, sizeof(bytes));


            }










            if (ui.azazelp2->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_azazelp2_clicked()));


            }


            else {


            }


        }
    }


}

void Tekken6DebuggerByThanksMia::on_infinitetimer_clicked() {
    uint num = tmapi.readData<int>(0xBEF030) + 237U;

    if (ui.infinitetimer->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_infinitetimer_clicked()));
            m_myLongTimer->start();
            uint num = tmapi.readData<int>(0xBEF030) + 237U;
             {
                
                BYTE bytes[] = { 0xe1, 0x00, 0x1 };
                tmapi.setMemory(num, bytes, sizeof(bytes));


            }










            if (ui.infinitetimer->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_infinitetimer_clicked()));


            }


            else {


            }


        }
    }
}




void Tekken6DebuggerByThanksMia::on_MAXHP_Player2_clicked() {
    uint num = tmapi.readData<int>(0xD2A56C);

    if (ui.MAXHP_Player2->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_MAXHP_Player2_clicked()));
            m_myLongTimer->start();
            uint num = tmapi.readData<int>(0xD2A56C);
            if (num == 0x6) {
                tmapi.writeByte(0xB2CD81, 0xB4);


            }










            if (ui.MAXHP_Player2->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_MAXHP_Player2_clicked()));


            }


            else {


            }


        }
    }
    
}

void Tekken6DebuggerByThanksMia::on_untouchableP1_clicked() {
    

    if (ui.untouchableP1->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_untouchableP1_clicked()));
            m_myLongTimer->start();
             {
                tmapi.writeByte(0xB2CED3, 0x00);


            }










            if (ui.untouchableP1->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_untouchableP1_clicked()));


            }


            else {


            }


        }
    }

}

void Tekken6DebuggerByThanksMia::on_untouchableP2_clicked() {
    if (ui.untouchableP2->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_untouchableP2_clicked()));
            m_myLongTimer->start();
            {
                tmapi.writeByte(0xB2C293, 0x00);


            }










            if (ui.untouchableP2->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_untouchableP2_clicked()));


            }


            else {


            }


        }
    }

}
void Tekken6DebuggerByThanksMia::on_RageModeP1_clicked() {
    if (ui.RageModeP1->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_RageModeP1_clicked()));
            m_myLongTimer->start();
            {
                tmapi.writeByte(0xB2C7BC, 0xff);


            }










            if (ui.RageModeP1->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_RageModeP1_clicked()));


            }


            else {


            }


        }
    }

}
void Tekken6DebuggerByThanksMia::on_RageModeP2_clicked() {
    if (ui.RageModeP2->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_RageModeP2_clicked()));
            m_myLongTimer->start();
            {
                tmapi.writeByte(0xB2D3FC, 0xff);


            }










            if (ui.RageModeP2->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_RageModeP2_clicked()));


            }


            else {


            }


        }
    }

}
void Tekken6DebuggerByThanksMia::on_YellowChargeP1_clicked() {
    if (ui.YellowChargeP1->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_YellowChargeP1_clicked()));
            m_myLongTimer->start();
            {
                tmapi.writeByte(0xB2C77D, 0xff);


            }










            if (ui.YellowChargeP1->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_YellowChargeP1_clicked()));


            }


            else {


            }


        }
    }

}

void Tekken6DebuggerByThanksMia::on_YellowChargeP2_clicked() {
    if (ui.YellowChargeP2->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_YellowChargeP2_clicked()));
            m_myLongTimer->start();
            {
                tmapi.writeByte(0xB2D3BD, 0xff);


            }










            if (ui.YellowChargeP2->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_YellowChargeP2_clicked()));


            }


            else {


            }


        }
    }

}
void Tekken6DebuggerByThanksMia::on_FreezeP1_clicked() {
    if (ui.FreezeP1->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_FreezeP1_clicked()));
            m_myLongTimer->start();
            
            {
                
                BYTE bytes[] = { 0x10, 0x10, 0x10, 0x10 };
                tmapi.setMemory(0xB2C78D, bytes, sizeof(bytes));

            }










            if (ui.FreezeP1->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_FreezeP1_clicked()));


            }


            else {


            }


        }
    }

}

void Tekken6DebuggerByThanksMia::on_ElectricP1_clicked() {
    if (ui.ElectricP1->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_ElectricP1_clicked()));
            m_myLongTimer->start();

            {

                BYTE bytes[] = { 0x10, 0x10, 0x10, 0x10 };
                tmapi.setMemory(0xB2C7CC, bytes, sizeof(bytes));

            }










            if (ui.ElectricP1->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_ElectricP1_clicked()));


            }


            else {


            }


        }
    }

}

void Tekken6DebuggerByThanksMia::on_ElectricP2_clicked() {
    if (ui.ElectricP2->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_ElectricP2_clicked()));
            m_myLongTimer->start();

            {

                BYTE bytes[] = { 0x10, 0x10, 0x10, 0x10 };
                tmapi.setMemory(0xB2D40C, bytes, sizeof(bytes));

            }










            if (ui.ElectricP2->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_ElectricP2_clicked()));


            }


            else {


            }


        }
    }


}

void Tekken6DebuggerByThanksMia::on_FreezeP2_clicked() {
    if (ui.FreezeP2->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_FreezeP2_clicked()));
            m_myLongTimer->start();

            {

                BYTE bytes[] = { 0x10, 0x10, 0x10, 0x10 };
                tmapi.setMemory(0xB2D3CD, bytes, sizeof(bytes));

            }










            if (ui.FreezeP2->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_FreezeP2_clicked()));


            }


            else {


            }


        }
    }

}

void Tekken6DebuggerByThanksMia::on_infinite_bound1_clicked() {
    if (ui.infinite_bound1->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_infinite_bound1_clicked()));
            m_myLongTimer->start();

            {

                BYTE bytes[] = { 0x00, 0x00, 0x00, 0x00 };
                tmapi.setMemory(0xB2D44C, bytes, sizeof(bytes));

            }










            if (ui.infinite_bound1->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_infinite_bound1_clicked()));


            }


            else {


            }


        }
    }

}

void Tekken6DebuggerByThanksMia::on_infinite_bound2_clicked() {
    if (ui.infinite_bound2->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_infinite_bound2_clicked()));
            m_myLongTimer->start();

            {

                BYTE bytes[] = { 0x00, 0x00, 0x00, 0x00 };
                tmapi.setMemory(0xB2C80C, bytes, sizeof(bytes));

            }










            if (ui.infinite_bound2->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_infinite_bound2_clicked()));


            }


            else {


            }


        }
    }

}

void Tekken6DebuggerByThanksMia::on_SpeedPlayer1_clicked() {
    if (ui.SpeedPlayer1->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_SpeedPlayer1_clicked()));
            m_myLongTimer->start();

            {

                BYTE bytes[] = {0x13, 0x00};
                tmapi.setMemory(0xB2C1F6, bytes, sizeof(bytes));

            }










            if (ui.SpeedPlayer1->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_SpeedPlayer1_clicked()));


            }


            else {


            }


        }
    }

}

void Tekken6DebuggerByThanksMia::on_SpeedPlayer2_clicked() {
    if (ui.SpeedPlayer2->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_SpeedPlayer2_clicked()));
            m_myLongTimer->start();

            {

                BYTE bytes[] = { 0x13, 0x00 };
                tmapi.setMemory(0xB2CE36, bytes, sizeof(bytes));

            }










            if (ui.SpeedPlayer2->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_SpeedPlayer2_clicked()));


            }


            else {


            }


        }
    }

}
void Tekken6DebuggerByThanksMia::on_SpeedPlayer1second_clicked() {
    if (ui.SpeedPlayer1second->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_SpeedPlayer1second_clicked()));
            m_myLongTimer->start();

            {

                BYTE bytes[] = { 0x00, 0x00, 0x18, 0x00 };
                tmapi.setMemory(0xB2C1F4, bytes, sizeof(bytes));

            }










            if (ui.SpeedPlayer1second->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_SpeedPlayer1second_clicked()));


            }


            else {


            }


        }
    }

}
bool CameraModCampaign = false;
void Tekken6DebuggerByThanksMia::on_CampaignCamera_stateChanged(int arg1) {
    if(!CameraModCampaign)  {

                BYTE bytes[] = { 0x3f, 0x0A };
                tmapi.setMemory(0x96F390, bytes, sizeof(bytes));
               
                BYTE bytes2[] = {0x3e, 0xCF, 0x00  ,0x00};
                tmapi.setMemory(0x373E9B94, bytes2, sizeof(bytes2));
                CameraModCampaign = true;
            }



            else {
        BYTE bytes[] = { 0x3F, 0x80 };
        tmapi.setMemory(0x96F390, bytes, sizeof(bytes));

        BYTE bytes2[] = { 0x00, 0x00, 0x00  ,0x01 };
        tmapi.setMemory(0x373E9B94, bytes2, sizeof(bytes2));
       
        CameraModCampaign = false;

            }


     

}
bool Gold = false;
void Tekken6DebuggerByThanksMia::on_Gold_clicked() {
    if (!Gold) {
        BYTE bytes[] = { 0x3B, 0x9A, 0xC9, 0xFF };
        tmapi.setMemory(0x1169D0D4, bytes, sizeof(bytes));
        Gold = true;
    }

    else {
        BYTE bytes[] = { 0x3B, 0x9A, 0xC9, 0xFF };
        tmapi.setMemory(0x1169D0D4, bytes, sizeof(bytes));
        Gold = false;
        
    }

}
bool hitanywhere = false;
void Tekken6DebuggerByThanksMia::on_hitanywhere_stateChanged(int arg1) {
    if (!hitanywhere) {
        BYTE bytes[] = { 0x41, 0x9E, 0x02, 0x28 };
        tmapi.setMemory(0x001c27d8, bytes, sizeof(bytes));
        hitanywhere = true;
    }

    else {

        BYTE bytes[] = { 0x40, 0x9E, 0x02, 0x28 };
        tmapi.setMemory(0x001c27d8, bytes, sizeof(bytes));
        hitanywhere = false;
    }

}
bool CameraMod = false;
void Tekken6DebuggerByThanksMia::on_CameraMod_stateChanged(int arg1) {

    if (!CameraMod) {
        BYTE bytes[] = { 0x3E, 0xCF, 0x00, 0x00 };
        tmapi.setMemory(0x96F390, bytes, sizeof(bytes));
        CameraMod = true;
    }

    else {

        BYTE bytes[] = { 0x3F, 0x80 };
        tmapi.setMemory(0x96F390, bytes, sizeof(bytes));
        CameraMod = false;
    }

}
bool CpuP1 = false;
void Tekken6DebuggerByThanksMia::on_CpuP1_stateChanged(int arg1) {
    if (!CpuP1) {
        BYTE bytes[] = { 0x00, 0x00, 0x00, 0x01 };
        tmapi.setMemory(0xB2C370, bytes, sizeof(bytes));
        CpuP1 = true;
    }

    else {

        BYTE bytes[] = { 0x00, 0x00, 0x00, 0x00 };
        tmapi.setMemory(0xB2C370, bytes, sizeof(bytes));
        CpuP1 = false;
    }

}

bool CpuP2 = false;
void Tekken6DebuggerByThanksMia::on_CpuP2_stateChanged(int arg1) {
    if (!CpuP2) {
        BYTE bytes[] = { 0x00, 0x00, 0x00, 0x01 };
        tmapi.setMemory(0xB2CFB0, bytes, sizeof(bytes));
        CpuP2 = true;
    }

    else {

        BYTE bytes[] = { 0x00, 0x00, 0x00, 0x00 };
        tmapi.setMemory(0xB2CFB0, bytes, sizeof(bytes));
        CpuP2 = false;
    }

}
void Tekken6DebuggerByThanksMia::on_KillP1_clicked() {
    if (ui.KillP1->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_KillP1_clicked()));
        m_myLongTimer->start();

        BYTE bytes[] = { 0x00, 0x00, 0x00, 0x00 };
        tmapi.setMemory(0xB2C141, bytes, sizeof(bytes));










        if (ui.KillP1->checkState() == Qt::Unchecked) {

            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(on_KillP1_clicked()));


        }


        else {

        }


    }


}


void Tekken6DebuggerByThanksMia::on_KillP2_clicked() {
    if (ui.KillP2->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_KillP2_clicked()));
        m_myLongTimer->start();

        BYTE bytes[] = { 0x00, 0x00, 0x00, 0x00 };
        tmapi.setMemory(0xB2CD81, bytes, sizeof(bytes));










        if (ui.KillP2->checkState() == Qt::Unchecked) {

            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(on_KillP2_clicked()));


        }


        else {

        }


    }


}


void Tekken6DebuggerByThanksMia::on_selecttokillp1_clicked() {
    uint num = tmapi.readData<int>(0xD2A56C);

    if (ui.selecttokillp1->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_selecttokillp1_clicked()));
            m_myLongTimer->start();
            uint num = tmapi.readData<int>(0xD2A56C);
            if (num == 0x5) {
                BYTE bytes[] = { 0x00, 0x00, 0x00, 0x00 };
                tmapi.setMemory(0xB2C141, bytes, sizeof(bytes));


            }










            if (ui.selecttokillp1->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_selecttokillp1_clicked()));


            }


            else {


            }


        }
    }
}

void Tekken6DebuggerByThanksMia::on_selecttokillp2_clicked() {
    uint num = tmapi.readData<int>(0xD2A56C);

    if (ui.selecttokillp2->checkState() == Qt::Checked) {
        QTime dieTime = QTime::currentTime().addMSecs(10);
        while (QTime::currentTime() < dieTime) {
            QCoreApplication::processEvents(QEventLoop::AllEvents, 10);


            QTimer* m_myLongTimer = new QTimer(this);
            m_myLongTimer->setInterval(10);
            m_myLongTimer->setSingleShot(true);
            connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_selecttokillp2_clicked()));
            m_myLongTimer->start();
            uint num = tmapi.readData<int>(0xD2A56C);
            if (num == 0x6) {
                BYTE bytes[] = { 0x00, 0x00, 0x00, 0x00 };
                tmapi.setMemory(0xB2CD81, bytes, sizeof(bytes));


            }










            if (ui.selecttokillp2->checkState() == Qt::Unchecked) {

                m_myLongTimer->stop();
                disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                    SLOT(on_selecttokillp2_clicked()));


            }


            else {


            }


        }
    }
}
void Tekken6DebuggerByThanksMia::on_Infinite_Juggle_clicked() {
    if (ui.Infinite_Juggle->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(3900);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_Infinite_Juggle_clicked()));
        m_myLongTimer->start();
        {
        tmapi.writeSByte(0xB2C2B3, 0x00);
        tmapi.writeSByte(0xB2CEDF, 0x00);
        tmapi.writeSByte(0xB2CEF7, 0x00);
       
        }








        if (ui.Infinite_Juggle->checkState() == Qt::Unchecked) {

            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(on_Infinite_Juggle_clicked()));


        }


        else {

        }


    }
    







}

void Tekken6DebuggerByThanksMia::on_nancyuniquestart_clicked() {
    if (ui.nancyuniquestart->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_nancyuniquestart_clicked()));
        m_myLongTimer->start();

        tmapi.writeSByte(0xB8F1B7, 82);
        ccapi.WriteMemory(0xB8F1B7, 82);










        if (ui.nancyuniquestart->checkState() == Qt::Unchecked) {

            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(on_nancyuniquestart_clicked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_uniquestartazazel_clicked() {
    if (ui.uniquestartazazel->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_uniquestartazazel_clicked()));
        m_myLongTimer->start();

        tmapi.writeSByte(0xB8F1B7, 68);
        ccapi.WriteMemory(0xB8F1B7, 68);
       









        if (ui.uniquestartazazel->checkState() == Qt::Unchecked) {

            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(on_uniquestartazazelclicked()));


        }


        else {

        }


    }


}

void Tekken6DebuggerByThanksMia::on_Infinite_JuggleP2_clicked() {


    if (ui.Infinite_JuggleP2->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_Infinite_JuggleP2_clicked()));
        m_myLongTimer->start();

        tmapi.writeSByte(0xB2C29F, 0x00);
        tmapi.writeSByte(0xB2C2B7, 0x00);
        tmapi.writeSByte(0xB2C469, 0x00);
        tmapi.writeSByte(0xB2CEF3, 0x00);









        if (ui.Infinite_JuggleP2->checkState() == Qt::Unchecked) {

            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(on_Infinite_JuggleP2_clicked()));


        }


        else {

        }


    }




}

//stages
void  Tekken6DebuggerByThanksMia::e_water() {
   

    if (ui.ElectricFountain->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(e_water()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 18);
        }








        if (ui.ElectricFountain->checkState() == Qt::Unchecked) {
           

            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.ElectricFountain->checkState() == Qt::Checked()));


        }


        else {

        }


    }



}



void Tekken6DebuggerByThanksMia::on_ElectricFountain_clicked() {
    
    QTimer::singleShot(00000, this, SLOT(e_water()));
      
       
    if (ui.ElectricFountain->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/e-water.jpg");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(800, 450);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/stages/Tekken 6   Electric Fountain  Arcade.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }
    
    QTimer::singleShot(74000, label2, SLOT(close()));
    if (ui.ElectricFountain->checkState() == Qt::Unchecked) {
        QTimer::singleShot(00, label2, SLOT(close()));
        
        
    }
    }


    }

//
void Tekken6DebuggerByThanksMia::forest() {

    if (ui.MysticalForest->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(forest()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 0);
        }








        if (ui.MysticalForest->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.MysticalForest->checkState() == Qt::Checked()));


        }


        else {

        }


    }

}



void Tekken6DebuggerByThanksMia::on_MysticalForest_clicked() {
    QTimer::singleShot(00000, this, SLOT(forest()));


    if (ui.MysticalForest->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/misticforrest.jpg");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(800, 450);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/stages/Mystical Forest Tekken 6 Bloodline Rebellion Music Extended 000000000 000115955.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(74000, label2, SLOT(close()));
        if (ui.MysticalForest->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }


}


void Tekken6DebuggerByThanksMia::War() {
    if (ui.WarZone->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(War()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 10);
        }








        if (ui.WarZone->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.WarZone->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}

void Tekken6DebuggerByThanksMia::on_WarZone_clicked() {
    QTimer::singleShot(00000, this, SLOT(War()));


    if (ui.WarZone->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/warzone2.jpg");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(800, 450);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/stages/Tekken 6   Urban Warzone  Extended  000059150 000219420.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(80000, label2, SLOT(close()));
        if (ui.WarZone->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }

}

void Tekken6DebuggerByThanksMia::on_ManjiValley_clicked() {
    if (ui.ManjiValley->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_ManjiValley_clicked()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 7);
        }








        if (ui.ManjiValley->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.ManjiValley->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}

void Tekken6DebuggerByThanksMia::Gym() {
    if (ui.GymStage->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(Gym()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 50);
        }








        if (ui.GymStage->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.GymStage->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}


void Tekken6DebuggerByThanksMia::on_GymStage_clicked() {
    QTimer::singleShot(00000, this, SLOT(Gym()));


    if (ui.GymStage->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/gym.jpg");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(480, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/stages/Tekken 6   Electric Fountain  Arcade.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.GymStage->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }

}

void Tekken6DebuggerByThanksMia::FUJ() {
    if (ui.FUJIAN->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(FUJ()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 46);
        }








        if (ui.FUJIAN->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.FUJIAN->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_FUJIAN_clicked() {
    QTimer::singleShot(00000, this, SLOT(FUJ()));


    if (ui.FUJIAN->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/fujei.jpg");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(480, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/stages/Tekken 6   Electric Fountain  Arcade.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();
           





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.FUJIAN->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}
void Tekken6DebuggerByThanksMia::west13() {
    if (ui.WESTDISTRICT13->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(west13()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 47);
        }








        if (ui.WESTDISTRICT13->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.WESTDISTRICT13->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_WESTDISTRICT13_clicked() {
    QTimer::singleShot(00000, this, SLOT(west13()));


    if (ui.WESTDISTRICT13->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/westdistrict13-min.jpg");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(480, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/stages/Tekken 6   Electric Fountain  Arcade.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.WESTDISTRICT13->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}
void Tekken6DebuggerByThanksMia::China() {
    if (ui.ChinaTown->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(China()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 52);
        }








        if (ui.ChinaTown->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.ChinaTown->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}

void Tekken6DebuggerByThanksMia::on_ChinaTown_clicked() {

    QTimer::singleShot(00000, this, SLOT(China()));


    if (ui.ChinaTown->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/china.jpg");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(480, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/stages/Tekken 6 OST West District Chinatown  Calm Beginning  000028510 000130799.mp3"));
        music->setVolume(2);
        music->play();
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.ChinaTown->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}

void Tekken6DebuggerByThanksMia::door() {
    if (ui.abyss->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(door()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 53);
        }








        if (ui.abyss->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.abyss->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_abyss_clicked() {
    QTimer::singleShot(00000, this, SLOT(door()));


    if (ui.abyss->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/doorabyss.jpg");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(480, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));
        
        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.abyss->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}
void Tekken6DebuggerByThanksMia::Mishima() {
    if (ui.MishimaMansion->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(Mishima()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 62);
        }








        if (ui.MishimaMansion->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.MishimaMansion->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_MishimaMansion_clicked() {
    QTimer::singleShot(00000, this, SLOT(Mishima()));


    if (ui.MishimaMansion->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/mishimamansion.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(480, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.MishimaMansion->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}

void Tekken6DebuggerByThanksMia::UNDERGROUND() {
    if (ui.UNDERGROUNDPASSENGER->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(UNDERGROUND()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 61);
        }








        if (ui.UNDERGROUNDPASSENGER->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.UNDERGROUNDPASSENGER->checkState() == Qt::Checked()));


        }


        else {

        }


    }

}

void Tekken6DebuggerByThanksMia::on_UNDERGROUNDPASSENGER_clicked() {
    QTimer::singleShot(00000, this, SLOT(UNDERGROUND()));


    if (ui.UNDERGROUNDPASSENGER->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/unerground.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(480, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.UNDERGROUNDPASSENGER->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }

}

void Tekken6DebuggerByThanksMia::CENTRALDISTRICT()
{
    if (ui.CENTRALDISTRICTSTREET11->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(CENTRALDISTRICT()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 63);
        }








        if (ui.CENTRALDISTRICTSTREET11->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.CENTRALDISTRICTSTREET11->checkState() == Qt::Checked()));


        }


        else {

        }


    }
    }

void Tekken6DebuggerByThanksMia::on_CENTRALDISTRICTSTREET11_clicked() {
    QTimer::singleShot(00000, this, SLOT(CENTRALDISTRICT()));


    if (ui.CENTRALDISTRICTSTREET11->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/centraldistr.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(480, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.CENTRALDISTRICTSTREET11->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }

}

void Tekken6DebuggerByThanksMia::GREATSEA() {
    if (ui.GREATSEAHORSEHOTEL->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(GREATSEA()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 64);
        }








        if (ui.GREATSEAHORSEHOTEL->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.GREATSEAHORSEHOTEL->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_GREATSEAHORSEHOTEL_clicked() {
    QTimer::singleShot(00000, this, SLOT(GREATSEA()));


    if (ui.GREATSEAHORSEHOTEL->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/hotel.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(480, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/stages/Tekken 6   Electric Fountain  Arcade.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.GREATSEAHORSEHOTEL->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }

}
void Tekken6DebuggerByThanksMia::TRAINOF() {
    if (ui.TRAINOFTHENIGHTMARES->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(TRAINOF()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 69);
        }








        if (ui.TRAINOFTHENIGHTMARES->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.TRAINOFTHENIGHTMARES->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_TRAINOFTHENIGHTMARES_clicked() {
    QTimer::singleShot(00000, this, SLOT(TRAINOF()));


    if (ui.TRAINOFTHENIGHTMARES->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/trainof.jpg");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(480, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.TRAINOFTHENIGHTMARES->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}
void Tekken6DebuggerByThanksMia::CORPORATION() {
    if (ui.CORPORATIONGTOWER->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(CORPORATION()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 73);
        }








        if (ui.CORPORATIONGTOWER->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.CORPORATIONGTOWER->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_CORPORATIONGTOWER_clicked() {
    QTimer::singleShot(00000, this, SLOT(CORPORATION()));


    if (ui.CORPORATIONGTOWER->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/pianotower.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(480, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/stages/Tekken 6   Electric Fountain  Arcade.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.CORPORATIONGTOWER->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}

void Tekken6DebuggerByThanksMia::CENTRALUNDER() {
    if (ui.CENTRALUNDERGROUNDROAD->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(CENTRALUNDER()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 76);
        }








        if (ui.CENTRALUNDERGROUNDROAD->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.CENTRALUNDERGROUNDROAD->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_CENTRALUNDERGROUNDROAD_clicked() {
    QTimer::singleShot(00000, this, SLOT(CENTRALUNDER()));


    if (ui.CENTRALUNDERGROUNDROAD->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/trainunder.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(480, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.CENTRALUNDERGROUNDROAD->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}

void Tekken6DebuggerByThanksMia::MYSTICV() {
    if (ui.MYSTICVILLAGE->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(MYSTICV()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 80);
        }








        if (ui.MYSTICVILLAGE->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.MYSTICVILLAGE->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_MYSTICVILLAGE_clicked() {
    QTimer::singleShot(00000, this, SLOT(MYSTICV()));


    if (ui.MYSTICVILLAGE->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/azazeltemple outside.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(480, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.MYSTICVILLAGE->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}
void Tekken6DebuggerByThanksMia::SOUTH() {
    if (ui.SOUTHFOREST->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(SOUTH()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 41);
        }








        if (ui.SOUTHFOREST->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.SOUTHFOREST->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_SOUTHFOREST_clicked() {
    QTimer::singleShot(00000, this, SLOT(SOUTH()));


    if (ui.SOUTHFOREST->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/southforest.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(300, 170);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/stages/Tekken 6   Electric Fountain  Arcade.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.SOUTHFOREST->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}


void Tekken6DebuggerByThanksMia::SOUTHB() {
    if (ui.SOUTHBAY->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(SOUTHB()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 42);
        }








        if (ui.SOUTHBAY->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.SOUTHBAY->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_SOUTHBAY_clicked() {
    QTimer::singleShot(00000, this, SLOT(SOUTHB()));


    if (ui.SOUTHBAY->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/southbay.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(300, 170);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/stages/Tekken 6   Electric Fountain  Arcade.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.SOUTHBAY->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}
void Tekken6DebuggerByThanksMia::TERMINALOF() {
    if (ui.TERMINALOFCONTAINERS->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(TERMINALOF()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 43);
        }








        if (ui.TERMINALOFCONTAINERS->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.TERMINALOFCONTAINERS->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_TERMINALOFCONTAINERS_clicked() {
    QTimer::singleShot(00000, this, SLOT(TERMINALOF()));


    if (ui.TERMINALOFCONTAINERS->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/terminalofcontainers.jpg");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(380, 300);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/stages/Tekken 6   Electric Fountain  Arcade.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.TERMINALOFCONTAINERS->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}



void Tekken6DebuggerByThanksMia::TERMINALOF2() {
    if (ui.TERMINALOFCONTAINERS2->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(TERMINALOF2()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 44);
        }








        if (ui.TERMINALOFCONTAINERS2->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.TERMINALOFCONTAINERS2->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_TERMINALOFCONTAINERS2_clicked() {
    QTimer::singleShot(00000, this, SLOT(TERMINALOF2()));


    if (ui.TERMINALOFCONTAINERS2->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/containers2.jpg");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(380, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/stages/Tekken 6   Electric Fountain  Arcade.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.TERMINALOFCONTAINERS2->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}

void Tekken6DebuggerByThanksMia::LOST() {
    if (ui.LOSTCEMETERY->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(LOST()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 48);
        }








        if (ui.LOSTCEMETERY->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.LOSTCEMETERY->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_LOSTCEMETERY_clicked() {
    QTimer::singleShot(00000, this, SLOT(LOST()));


    if (ui.LOSTCEMETERY->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/lostcementery.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(380, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.LOSTCEMETERY->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}


void Tekken6DebuggerByThanksMia::TERMINALOF7() {
    if (ui.TERMINALOFCONTAINERS7->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(TERMINALOF7()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 44);
        }








        if (ui.TERMINALOFCONTAINERS7->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.TERMINALOFCONTAINERS7->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_TERMINALOFCONTAINERS7_clicked() {
    QTimer::singleShot(00000, this, SLOT(TERMINALOF7()));


    if (ui.TERMINALOFCONTAINERS7->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/containers2.jpg");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(380, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/stages/Tekken 6   Electric Fountain  Arcade.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.TERMINALOFCONTAINERS7->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}

void Tekken6DebuggerByThanksMia::MISHIMAP() {
    if (ui.MISHIMAPOLYTECHNIC->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(MISHIMAP()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 51);
        }








        if (ui.MISHIMAPOLYTECHNIC->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.MISHIMAPOLYTECHNIC->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_MISHIMAPOLYTECHNIC_clicked() {
    QTimer::singleShot(00000, this, SLOT(MISHIMAP()));


    if (ui.MISHIMAPOLYTECHNIC->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/polytenic.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(380, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.MISHIMAPOLYTECHNIC->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}

void Tekken6DebuggerByThanksMia::YOSHIMITS() {
    if (ui.YOSHIMITSUDOJO->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(YOSHIMITS()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 54);
        }








        if (ui.YOSHIMITSUDOJO->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.YOSHIMITSUDOJO->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_YOSHIMITSUDOJO_clicked() {
    QTimer::singleShot(00000, this, SLOT(YOSHIMITS()));


    if (ui.YOSHIMITSUDOJO->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/yoshicampaign.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(380, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.YOSHIMITSUDOJO->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}
void Tekken6DebuggerByThanksMia::INDUSTRIALCOM() {
    if (ui.INDUSTRIALCOMPLEX->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(INDUSTRIALCOM()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 55);
        }








        if (ui.INDUSTRIALCOMPLEX->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.YOSHIMITSUDOJO->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_INDUSTRIALCOMPLEX_clicked() {
    QTimer::singleShot(00000, this, SLOT(INDUSTRIALCOM()));


    if (ui.INDUSTRIALCOMPLEX->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/complexindustrial.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(380, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.INDUSTRIALCOMPLEX->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}

void Tekken6DebuggerByThanksMia::INDUSTRIALH() {
    if (ui.INDUSTRIALHIGHWAY->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(INDUSTRIALH()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 56);
        }








        if (ui.INDUSTRIALHIGHWAY->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.INDUSTRIALHIGHWAY->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_INDUSTRIALHIGHWAY_clicked() {
    QTimer::singleShot(00000, this, SLOT(INDUSTRIALH()));


    if (ui.INDUSTRIALHIGHWAY->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/southbay.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(380, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.INDUSTRIALHIGHWAY->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}

void Tekken6DebuggerByThanksMia::NORTHNATURAL() {
    if (ui.NORTHNATURALPARK->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(NORTHNATURAL()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 60);
        }








        if (ui.NORTHNATURALPARK->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.NORTHNATURALPARK->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}


void Tekken6DebuggerByThanksMia::on_NORTHNATURALPARK_clicked() {
    QTimer::singleShot(00000, this, SLOT(NORTHNATURAL()));


    if (ui.NORTHNATURALPARK->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/yoshicampaign.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(380, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.NORTHNATURALPARK->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}
void Tekken6DebuggerByThanksMia::ARCHAEOLOGICAL() {
    if (ui.ARCHAEOLOGICALEXPEDITION->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(ARCHAEOLOGICAL()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 65);
        }








        if (ui.ARCHAEOLOGICALEXPEDITION->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.ARCHAEOLOGICALEXPEDITION->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
//mishimas mansion
void Tekken6DebuggerByThanksMia::on_ARCHAEOLOGICALEXPEDITION_clicked() {
    QTimer::singleShot(00000, this, SLOT(ARCHAEOLOGICAL()));


    if (ui.ARCHAEOLOGICALEXPEDITION->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/yoshicampaign.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(380, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.ARCHAEOLOGICALEXPEDITION->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}

void Tekken6DebuggerByThanksMia::Mokujin() {
    if (ui.Mokujinstage->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(Mokujin()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 66);
        }








        if (ui.Mokujinstage->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.Mokujinstage->checkState() == Qt::Checked()));


        }


        else {

        }


    }

}

void Tekken6DebuggerByThanksMia::on_Mokujinstage_clicked() {
    QTimer::singleShot(00000, this, SLOT(Mokujin()));


    if (ui.Mokujinstage->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/hotel.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(380, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.Mokujinstage->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }

}

void Tekken6DebuggerByThanksMia::CHINATOWNAFTER() {
    if (ui.CHINATOWNAFTERNOON->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(CHINATOWNAFTER()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 67);
        }








        if (ui.CHINATOWNAFTERNOON->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.CHINATOWNAFTERNOON->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_CHINATOWNAFTERNOON_clicked() {
    QTimer::singleShot(00000, this, SLOT(CHINATOWNAFTER()));


    if (ui.CHINATOWNAFTERNOON->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/mishimamansion.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(380, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/stages/Tekken 6   Electric Fountain  Arcade.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.CHINATOWNAFTERNOON->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }

}


void Tekken6DebuggerByThanksMia::Extra4() {

    if (ui.Extrastage4->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(Extra4()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 81);
        }








        if (ui.Extrastage4->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.Extrastage4->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_Extrastage4_clicked() {
    QTimer::singleShot(00000, this, SLOT(Extra4()));


    if (ui.Extrastage4->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/azazeltemple outside.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(380, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();
        music->setVolume(2);
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.Extrastage4->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}


void Tekken6DebuggerByThanksMia::Extra2() {

    if (ui.Extrastage2->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(Extra2()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 74);
        }








        if (ui.Extrastage2->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.Extrastage2->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_Extrastage2_clicked() {
    QTimer::singleShot(00000, this, SLOT(Extra2()));


    if (ui.Extrastage2->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/bruce.jpg");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(380, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();
        
        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.Extrastage2->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}






void Tekken6DebuggerByThanksMia::Extra1() {

    if (ui.Extrastage1->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(Extra1()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 72);
        }








        if (ui.Extrastage1->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.Extrastage1->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}
void Tekken6DebuggerByThanksMia::on_Extrastage1_clicked() {
    QTimer::singleShot(00000, this, SLOT(Extra1()));


    if (ui.Extrastage1->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/extra1.jpg");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(380, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();

        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.Extrastage1->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}

void Tekken6DebuggerByThanksMia::LABOR() {
    if (ui.LABORATORIO->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(LABOR()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 71);
        }








        if (ui.LABORATORIO->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.LABORATORIO->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}

void Tekken6DebuggerByThanksMia::on_LABORATORIO_clicked() {
    QTimer::singleShot(00000, this, SLOT(LABOR()));


    if (ui.LABORATORIO->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/labor.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(480, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();

        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.LABORATORIO->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}


void Tekken6DebuggerByThanksMia::VIOLET() {
    if (ui.VIOLETSYSTEMS->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(VIOLET()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 70);
        }








        if (ui.VIOLETSYSTEMS->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.VIOLETSYSTEMS->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}

void Tekken6DebuggerByThanksMia::on_VIOLETSYSTEMS_clicked() {
    QTimer::singleShot(00000, this, SLOT(VIOLET()));


    if (ui.VIOLETSYSTEMS->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/violet.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(480, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();

        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.VIOLETSYSTEMS->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}


void Tekken6DebuggerByThanksMia::KAZAMA() {
    if (ui.KAZAMADOJO->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(KAZAMA()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 68);
        }








        if (ui.KAZAMADOJO->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.KAZAMADOJO->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}

void Tekken6DebuggerByThanksMia::on_KAZAMADOJO_clicked() {
    QTimer::singleShot(00000, this, SLOT(KAZAMA()));


    if (ui.KAZAMADOJO->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/polytenic.png");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(480, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();

        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.KAZAMADOJO->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}

void Tekken6DebuggerByThanksMia::Mata() {
    if (ui.Matahorn->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(Mata()));
        m_myLongTimer->start();


        uint num = tmapi.readData<int>(12513328U) + 247u; {
            tmapi.writeByte(num, 65);
        }








        if (ui.Matahorn->checkState() == Qt::Unchecked) {


            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(ui.Matahorn->checkState() == Qt::Checked()));


        }


        else {

        }


    }
}

void Tekken6DebuggerByThanksMia::on_Matahorn_clicked() {
    QTimer::singleShot(00000, this, SLOT(Mata()));


    if (ui.Matahorn->checkState() == Qt::Checked) {
        QMovie* movie2 = new QMovie(":/bilder/resources/stages/retrat.jpg");

        qDebug() << "sis";
        if (!movie2->isValid()) {
            //something went Wrong
            return;
        }




        //play GIF

        auto label2 = new QLabel();
        label2->resize(480, 360);
        label2->setMovie(movie2);

        label2->move(-5, -5);
        label2->show();
        movie2->start();

        QMediaPlayer* music = new QMediaPlayer(label2);
        music->setMedia(QUrl("qrc:/bilder/resources/mlg/What in the F_ck was that_   Gaming Sound Effect _HD_.mp3"));

        music->play();

        label2->setAttribute(Qt::WA_DeleteOnClose);



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);

        }


        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {

            music->play();





        }

        QTimer::singleShot(70400, label2, SLOT(close()));
        if (ui.Matahorn->checkState() == Qt::Unchecked) {
            QTimer::singleShot(00, label2, SLOT(close()));


        }
    }
}



//moveset change
bool index = false;
void Tekken6DebuggerByThanksMia::on_MoveSet_Change_P1_clicked() {

    connect(ui.MoveSet_Change_P1, SIGNAL(update()), this,
        SLOT(on_comboBox_MoveSet_P1_activated()));
    
    

    if (ui.MoveSet_Change_P1->checkState() == Qt::Checked) {
        ui.comboBox_MoveSet_P1->addItem("Paul 0");
        ui.comboBox_MoveSet_P1->addItem("Law 1");
        ui.comboBox_MoveSet_P1->addItem("Lei 2");
        ui.comboBox_MoveSet_P1->addItem("King 3");
        ui.comboBox_MoveSet_P1->addItem("Yoshimitsu 4");
        ui.comboBox_MoveSet_P1->addItem("Nina 5");
        ui.comboBox_MoveSet_P1->addItem("Hwoarang 6");
        ui.comboBox_MoveSet_P1->addItem("Xiaoyu 7");
        ui.comboBox_MoveSet_P1->addItem("Christie 8");
        ui.comboBox_MoveSet_P1->addItem("Eddy 9");
        ui.comboBox_MoveSet_P1->addItem("Jin 10");
        ui.comboBox_MoveSet_P1->addItem("Julia 11");
        ui.comboBox_MoveSet_P1->addItem("Kuma 12");
        ui.comboBox_MoveSet_P1->addItem("Panda 13");
        ui.comboBox_MoveSet_P1->addItem("Bryan 14");
        ui.comboBox_MoveSet_P1->addItem("Heihachi 15");
        ui.comboBox_MoveSet_P1->addItem("Kazuya 16");
        ui.comboBox_MoveSet_P1->addItem("Lee 17");
        ui.comboBox_MoveSet_P1->addItem("Steve 18");
        ui.comboBox_MoveSet_P1->addItem("Marduk 19");
        ui.comboBox_MoveSet_P1->addItem("Jack 20");
        ui.comboBox_MoveSet_P1->addItem("Roger 21");
        ui.comboBox_MoveSet_P1->addItem("Anna 22");
        ui.comboBox_MoveSet_P1->addItem("Wang 23");
        ui.comboBox_MoveSet_P1->addItem("Ganryu 24");
        ui.comboBox_MoveSet_P1->addItem("Asuka 25");
        ui.comboBox_MoveSet_P1->addItem("Bruce 26");
        ui.comboBox_MoveSet_P1->addItem("Baek 27");
        ui.comboBox_MoveSet_P1->addItem("Devil Jin 28");
        ui.comboBox_MoveSet_P1->addItem("Raven 29");
        ui.comboBox_MoveSet_P1->addItem("Feng 30");
        ui.comboBox_MoveSet_P1->addItem("Armor King 31");
        ui.comboBox_MoveSet_P1->addItem("Lili 32");
        ui.comboBox_MoveSet_P1->addItem("Dragunov 33");
        ui.comboBox_MoveSet_P1->addItem("Azazel 34");
        ui.comboBox_MoveSet_P1->addItem("Bob 35");
        ui.comboBox_MoveSet_P1->addItem("Zafina 36");
        ui.comboBox_MoveSet_P1->addItem("Miguel 37");
        ui.comboBox_MoveSet_P1->addItem("Leo 38");
        ui.comboBox_MoveSet_P1->addItem("Lars 39");
        ui.comboBox_MoveSet_P1->addItem("Alisa 40");
        ui.comboBox_MoveSet_P1->addItem("Nancy-MI847J 41");

        ui.comboBox_MoveSet_P1->currentIndex();
        ui.comboBox_MoveSet_P1->setEnabled(true);
        ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());
        bool index = true;

    }

    if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
        disconnect(ui.MoveSet_Change_P1, SIGNAL(update()), this,
            SLOT(on_comboBox_MoveSet_P1_activated()));
        ui.comboBox_MoveSet_P1->clear();
        
        
        bool index = false;
    }

    else {
    }
}





void Tekken6DebuggerByThanksMia::on_Player1_face_clicked() {


    if (ui.Player1_face->checkState() == Qt::Checked) {
       
        
       QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_Player1_face_clicked()));
        m_myLongTimer->start();
       
        BYTE bytes[] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01,};

        tmapi.setMemory(0x00B2CC94, bytes, sizeof(bytes));

        
       
       
 
       
       


        if (ui.Player1_face->checkState() == Qt::Unchecked) {
            
        m_myLongTimer->stop();
        disconnect(m_myLongTimer, SIGNAL(timeout()), this,
            SLOT(on_Player1_face_clicked()));
        
           
        }


        else {

        }


    }




}
void Tekken6DebuggerByThanksMia::on_comboBox_MoveSet_P1_activated(int index) {
    uint num = tmapi.readData<int>(0xB2FE10) - 6477;
    uint num2 = tmapi.readData<int>(0xB2FE10) - 6797;
    QTime dieTime = QTime::currentTime().addMSecs(1);
    while (QTime::currentTime() < dieTime) {
        QCoreApplication::processEvents(QEventLoop::AllEvents, 1);










        if (index == 0) {


            while (index == 0) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 0);
                    tmapi.writeByte(num2, 0);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 0) { break; }
            }
        }
        if (index == 1) {


            while (index == 1) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 2);
                    tmapi.writeByte(num2, 2);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 1) { break; }
            }
        }



        if (index == 2) {


            while (index == 2) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 4);
                    tmapi.writeByte(num2, 4);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 2) { break; }
            }
        }

        if (index == 3) {


            while (index == 3) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 6);
                    tmapi.writeByte(num2, 6);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 3) { break; }
            }
        }

        if (index == 4) {


            while (index == 4) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 8);
                    tmapi.writeByte(num2, 8);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 4) { break; }
            }
        }
        if (index == 5) {


            while (index == 5) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 10);
                    tmapi.writeByte(num2, 10);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 5) { break; }
            }
        }


        if (index == 6) {


            while (index == 6) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 12);
                    tmapi.writeByte(num2, 12);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 6) { break; }
            }
        }

        if (index == 7) {


            while (index == 7) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 14);
                    tmapi.writeByte(num2, 14);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 7) { break; }
            }
        }

        if (index == 8) {


            while (index == 8) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 16);
                    tmapi.writeByte(num2, 16);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 8) { break; }
            }
        }


        if (index == 9) {


            while (index == 9) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 18);
                    tmapi.writeByte(num2, 18);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 9) { break; }
            }
        }

        if (index == 10) {


            while (index == 10) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 20);
                    tmapi.writeByte(num2, 20);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 10) { break; }
            }
        }
        if (index == 11) {


            while (index == 11) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 22);
                    tmapi.writeByte(num2, 22);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 11) { break; }
            }
        }

        if (index == 12) {


            while (index == 12) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 24);
                    tmapi.writeByte(num2, 24);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 12) { break; }
            }
        }
        if (index == 13) {


            while (index == 13) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 25);
                    tmapi.writeByte(num2, 25);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 13) { break; }
            }
        }

        if (index == 14) {


            while (index == 14) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 26);
                    tmapi.writeByte(num2, 26);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 14) { break; }
            }
        }

        if (index == 15) {


            while (index == 15) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 28);
                    tmapi.writeByte(num2, 28);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 15) { break; }
            }
        }

        if (index == 16) {


            while (index == 16) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 30);
                    tmapi.writeByte(num2, 30);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 16) { break; }
            }
        }

        if (index == 17) {


            while (index == 17) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 32);
                    tmapi.writeByte(num2, 32);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 17) { break; }
            }
        }

        if (index == 18) {


            while (index == 18) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 34);
                    tmapi.writeByte(num2, 34);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 18) { break; }
            }
        }
        if (index == 19) {


            while (index == 19) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 36);
                    tmapi.writeByte(num2, 36);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 19) { break; }
            }
        }

        if (index == 20) {


            while (index == 20) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 40);
                    tmapi.writeByte(num2, 40);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 20) { break; }
            }
        }
        if (index == 21) {


            while (index == 21) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 42);
                    tmapi.writeByte(num2, 42);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 21) { break; }
            }
        }

        if (index == 22) {


            while (index == 22) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 44);
                    tmapi.writeByte(num2, 44);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 22) { break; }
            }
        }
        if (index == 23) {


            while (index == 23) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 46);
                    tmapi.writeByte(num2, 46);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 23) { break; }
            }
        }

        if (index == 24) {


            while (index == 24) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 48);
                    tmapi.writeByte(num2, 48);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 24) { break; }
            }
        }

        if (index == 25) {


            while (index == 25) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 50);
                    tmapi.writeByte(num2, 50);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 25) { break; }
            }
        }

        if (index == 26) {


            while (index == 26) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 52);
                    tmapi.writeByte(num2, 52);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 26) { break; }
            }
        }

        if (index == 27) {


            while (index == 27) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 54);
                    tmapi.writeByte(num2, 54);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 27) { break; }
            }
        }

        if (index == 28) {


            while (index == 28) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 56);
                    tmapi.writeByte(num2, 56);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 28) { break; }
            }
        }

        if (index == 29) {


            while (index == 29) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 58);
                    tmapi.writeByte(num2, 58);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 29) { break; }
            }
        }

        if (index == 30) {


            while (index == 30) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 60);
                    tmapi.writeByte(num2, 60);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 30) { break; }
            }
        }

        if (index == 31) {


            while (index == 31) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 62);
                    tmapi.writeByte(num2, 62);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 31) { break; }
            }
        }

        if (index == 32) {


            while (index == 32) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 64);
                    tmapi.writeByte(num2, 64);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 32) { break; }
            }
        }


        if (index == 33) {


            while (index == 33) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 66);
                    tmapi.writeByte(num2, 66);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 33) { break; }
            }
        }

        if (index == 34) {


            while (index == 34) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 68);
                    tmapi.writeByte(num2, 68);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 34) { break; }
            }
        }

        if (index == 35) {


            while (index == 35) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 70);
                    tmapi.writeByte(num2, 70);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 35) { break; }
            }
        }
        if (index == 36) {


            while (index == 36) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 72);
                    tmapi.writeByte(num2, 72);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 36) { break; }
            }
        }

        if (index == 37) {


            while (index == 37) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 74);
                    tmapi.writeByte(num2, 74);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 37) { break; }
            }
        }

        if (index == 38) {


            while (index == 38) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 76);
                    tmapi.writeByte(num2, 76);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 38) { break; }
            }
        }

        if (index == 39) {


            while (index == 39) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 78);
                    tmapi.writeByte(num2, 78);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 39) { break; }
            }
        }

        if (index == 40) {


            while (index == 40) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 80);
                    tmapi.writeByte(num2, 80);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 40) { break; }
                
            }
        }

        if (index == 41) {


            while (index == 41) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));
                ui.comboBox_MoveSet_P1->itemData(ui.comboBox_MoveSet_P1->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P1_activated(int index)));

                    tmapi.writeByte(num, 82);
                    tmapi.writeByte(num2, 82);






                }

                if (ui.MoveSet_Change_P1->checkState() == Qt::Unchecked)  {
                    break;
                }
                if(!index == 41) { break; }
            }

        }




    }
}

void Tekken6DebuggerByThanksMia::on_Player2_face_clicked() {
    if (ui.Player2_face->checkState() == Qt::Checked) {


        QTimer* m_myLongTimer = new QTimer(this);
        m_myLongTimer->setInterval(0000000000);
        m_myLongTimer->setSingleShot(true);
        connect(m_myLongTimer, SIGNAL(timeout()), SLOT(on_Player2_face_clicked()));
        m_myLongTimer->start();

        BYTE bytes[] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, };

        tmapi.setMemory(0x00b2d8d4, bytes, sizeof(bytes));









        if (ui.Player2_face->checkState() == Qt::Unchecked) {

            m_myLongTimer->stop();
            disconnect(m_myLongTimer, SIGNAL(timeout()), this,
                SLOT(on_Player2_face_clicked()));


        }


        else {

        }


    }
}

 
void Tekken6DebuggerByThanksMia::on_MoveSet_Change_P2_clicked() {
    connect(ui.MoveSet_Change_P2, SIGNAL(update()), this,
        SLOT(on_comboBox_MoveSet_P2_activated()));



    if (ui.MoveSet_Change_P2->checkState() == Qt::Checked) {
        ui.comboBox_MoveSet_P2->addItem("Paul 0");
        ui.comboBox_MoveSet_P2->addItem("Law 1");
        ui.comboBox_MoveSet_P2->addItem("Lei 2");
        ui.comboBox_MoveSet_P2->addItem("King 3");
        ui.comboBox_MoveSet_P2->addItem("Yoshimitsu 4");
        ui.comboBox_MoveSet_P2->addItem("Nina 5");
        ui.comboBox_MoveSet_P2->addItem("Hwoarang 6");
        ui.comboBox_MoveSet_P2->addItem("Xiaoyu 7");
        ui.comboBox_MoveSet_P2->addItem("Christie 8");
        ui.comboBox_MoveSet_P2->addItem("Eddy 9");
        ui.comboBox_MoveSet_P2->addItem("Jin 10");
        ui.comboBox_MoveSet_P2->addItem("Julia 11");
        ui.comboBox_MoveSet_P2->addItem("Kuma 12");
        ui.comboBox_MoveSet_P2->addItem("Panda 13");
        ui.comboBox_MoveSet_P2->addItem("Bryan 14");
        ui.comboBox_MoveSet_P2->addItem("Heihachi 15");
        ui.comboBox_MoveSet_P2->addItem("Kazuya 16");
        ui.comboBox_MoveSet_P2->addItem("Lee 17");
        ui.comboBox_MoveSet_P2->addItem("Steve 18");
        ui.comboBox_MoveSet_P2->addItem("Marduk 19");
        ui.comboBox_MoveSet_P2->addItem("Jack 20");
        ui.comboBox_MoveSet_P2->addItem("Roger 21");
        ui.comboBox_MoveSet_P2->addItem("Anna 22");
        ui.comboBox_MoveSet_P2->addItem("Wang 23");
        ui.comboBox_MoveSet_P2->addItem("Ganryu 24");
        ui.comboBox_MoveSet_P2->addItem("Asuka 25");
        ui.comboBox_MoveSet_P2->addItem("Bruce 26");
        ui.comboBox_MoveSet_P2->addItem("Baek 27");
        ui.comboBox_MoveSet_P2->addItem("Devil Jin 28");
        ui.comboBox_MoveSet_P2->addItem("Raven 29");
        ui.comboBox_MoveSet_P2->addItem("Feng 30");
        ui.comboBox_MoveSet_P2->addItem("Armor King 31");
        ui.comboBox_MoveSet_P2->addItem("Lili 32");
        ui.comboBox_MoveSet_P2->addItem("Dragunov 33");
        ui.comboBox_MoveSet_P2->addItem("Azazel 34");
        ui.comboBox_MoveSet_P2->addItem("Bob 35");
        ui.comboBox_MoveSet_P2->addItem("Zafina 36");
        ui.comboBox_MoveSet_P2->addItem("Miguel 37");
        ui.comboBox_MoveSet_P2->addItem("Leo 38");
        ui.comboBox_MoveSet_P2->addItem("Lars 39");
        ui.comboBox_MoveSet_P2->addItem("Alisa 40");
        ui.comboBox_MoveSet_P2->addItem("Nancy-MI847J 41");

        ui.comboBox_MoveSet_P2->currentIndex();
        ui.comboBox_MoveSet_P2->setEnabled(true);
        ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());
       
       

    }

    if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
        disconnect(ui.MoveSet_Change_P2, SIGNAL(update()), this,
            SLOT(on_comboBox_MoveSet_P2_activated()));
        ui.comboBox_MoveSet_P2->clear();


       
    }

    else {
    }
}

void Tekken6DebuggerByThanksMia::on_comboBox_MoveSet_P2_activated(int index) {
    uint num = tmapi.readData<int>(0xB2FE10) - 14733;
    uint num2 = tmapi.readData<int>(0xB2FE10) - 15053;
    QTime dieTime = QTime::currentTime().addMSecs(1);
    while (QTime::currentTime() < dieTime) {
        QCoreApplication::processEvents(QEventLoop::AllEvents, 1);










        if (index == 0) {


            while (index == 0) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 0);
                    tmapi.writeByte(num2, 0);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 0) { break; }
            }
        }
        if (index == 1) {


            while (index == 1) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 2);
                    tmapi.writeByte(num2, 2);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 1) { break; }
            }
        }



        if (index == 2) {


            while (index == 2) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 4);
                    tmapi.writeByte(num2, 4);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 2) { break; }
            }
        }

        if (index == 3) {


            while (index == 3) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 6);
                    tmapi.writeByte(num2, 6);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 3) { break; }
            }
        }

        if (index == 4) {


            while (index == 4) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 8);
                    tmapi.writeByte(num2, 8);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 4) { break; }
            }
        }
        if (index == 5) {


            while (index == 5) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 10);
                    tmapi.writeByte(num2, 10);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 5) { break; }
            }
        }


        if (index == 6) {


            while (index == 6) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 12);
                    tmapi.writeByte(num2, 12);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 6) { break; }
            }
        }

        if (index == 7) {


            while (index == 7) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 14);
                    tmapi.writeByte(num2, 14);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 7) { break; }
            }
        }

        if (index == 8) {


            while (index == 8) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 16);
                    tmapi.writeByte(num2, 16);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 8) { break; }
            }
        }


        if (index == 9) {


            while (index == 9) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 18);
                    tmapi.writeByte(num2, 18);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 9) { break; }
            }
        }

        if (index == 10) {


            while (index == 10) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 20);
                    tmapi.writeByte(num2, 20);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 10) { break; }
            }
        }
        if (index == 11) {


            while (index == 11) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 22);
                    tmapi.writeByte(num2, 22);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 11) { break; }
            }
        }

        if (index == 12) {


            while (index == 12) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 24);
                    tmapi.writeByte(num2, 24);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 12) { break; }
            }
        }
        if (index == 13) {


            while (index == 13) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 25);
                    tmapi.writeByte(num2, 25);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 13) { break; }
            }
        }

        if (index == 14) {


            while (index == 14) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 26);
                    tmapi.writeByte(num2, 26);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 14) { break; }
            }
        }

        if (index == 15) {


            while (index == 15) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 28);
                    tmapi.writeByte(num2, 28);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 15) { break; }
            }
        }

        if (index == 16) {


            while (index == 16) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 30);
                    tmapi.writeByte(num2, 30);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 16) { break; }
            }
        }

        if (index == 17) {


            while (index == 17) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 32);
                    tmapi.writeByte(num2, 32);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 17) { break; }
            }
        }

        if (index == 18) {


            while (index == 18) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 34);
                    tmapi.writeByte(num2, 34);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 18) { break; }
            }
        }
        if (index == 19) {


            while (index == 19) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 36);
                    tmapi.writeByte(num2, 36);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 19) { break; }
            }
        }

        if (index == 20) {


            while (index == 20) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 40);
                    tmapi.writeByte(num2, 40);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 20) { break; }
            }
        }
        if (index == 21) {


            while (index == 21) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 42);
                    tmapi.writeByte(num2, 42);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 21) { break; }
            }
        }

        if (index == 22) {


            while (index == 22) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 44);
                    tmapi.writeByte(num2, 44);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 22) { break; }
            }
        }
        if (index == 23) {


            while (index == 23) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 46);
                    tmapi.writeByte(num2, 46);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 23) { break; }
            }
        }

        if (index == 24) {


            while (index == 24) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 48);
                    tmapi.writeByte(num2, 48);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 24) { break; }
            }
        }

        if (index == 25) {


            while (index == 25) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 50);
                    tmapi.writeByte(num2, 50);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 25) { break; }
            }
        }

        if (index == 26) {


            while (index == 26) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 52);
                    tmapi.writeByte(num2, 52);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 26) { break; }
            }
        }

        if (index == 27) {


            while (index == 27) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 54);
                    tmapi.writeByte(num2, 54);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 27) { break; }
            }
        }

        if (index == 28) {


            while (index == 28) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 56);
                    tmapi.writeByte(num2, 56);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 28) { break; }
            }
        }

        if (index == 29) {


            while (index == 29) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 58);
                    tmapi.writeByte(num2, 58);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 29) { break; }
            }
        }

        if (index == 30) {


            while (index == 30) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 60);
                    tmapi.writeByte(num2, 60);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 30) { break; }
            }
        }

        if (index == 31) {


            while (index == 31) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 62);
                    tmapi.writeByte(num2, 62);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 31) { break; }
            }
        }

        if (index == 32) {


            while (index == 32) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 64);
                    tmapi.writeByte(num2, 64);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 32) { break; }
            }
        }


        if (index == 33) {


            while (index == 33) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 66);
                    tmapi.writeByte(num2, 66);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 33) { break; }
            }
        }

        if (index == 34) {


            while (index == 34) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 68);
                    tmapi.writeByte(num2, 68);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 34) { break; }
            }
        }

        if (index == 35) {


            while (index == 35) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 70);
                    tmapi.writeByte(num2, 70);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 35) { break; }
            }
        }
        if (index == 36) {


            while (index == 36) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 72);
                    tmapi.writeByte(num2, 72);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 36) { break; }
            }
        }

        if (index == 37) {


            while (index == 37) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 74);
                    tmapi.writeByte(num2, 74);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 37) { break; }
            }
        }

        if (index == 38) {


            while (index == 38) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 76);
                    tmapi.writeByte(num2, 76);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 38) { break; }
            }
        }

        if (index == 39) {


            while (index == 39) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 78);
                    tmapi.writeByte(num2, 78);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 39) { break; }
            }
        }

        if (index == 40) {


            while (index == 40) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 80);
                    tmapi.writeByte(num2, 80);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 40) { break; }

            }
        }

        if (index == 41) {


            while (index == 41) {

                QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));
                ui.comboBox_MoveSet_P2->itemData(ui.comboBox_MoveSet_P2->currentIndex());

                QTime dieTime = QTime::currentTime().addMSecs(1);
                while (QTime::currentTime() < dieTime) {
                    QCoreApplication::processEvents(QEventLoop::AllEvents, 1);
                    QTimer::singleShot(00000, this, SLOT(on_comboBox_MoveSet_P2_activated(int index)));

                    tmapi.writeByte(num, 82);
                    tmapi.writeByte(num2, 82);






                }

                if (ui.MoveSet_Change_P2->checkState() == Qt::Unchecked) {
                    break;
                }
                if (!index == 41) { break; }
            }

        }




    }
}

//RADIO buttons
void Tekken6DebuggerByThanksMia::on_clickme_clicked() {

    QMovie* movie2 = new QMovie(":/videos/resources/hotlightandsera.jpg");

    qDebug() << "sis";
    if (!movie2->isValid()) {
        //something went Wrong
        return;
    }




    //play GIF

    auto label2 = new QLabel();
    label2->resize(600, 450);
    label2->setMovie(movie2);

    label2->move(-15, -19);
    label2->show();
    movie2->start();

    QMediaPlayer* music = new QMediaPlayer(label2);
    music->setMedia(QUrl("qrc:/musik/resources/mlg/trickshot.mp3"));
    music->setVolume(1);
    music->play();
    
    
    label2->setAttribute(Qt::WA_DeleteOnClose);



    if (music->state() == QMediaPlayer::PlayingState) {
        music->setPosition(0);
        music->setVolume(2);

    }


    // if the sound is not playing, simply call play()
    else if (music->state() == QMediaPlayer::StoppedState) {
        music->setVolume(2);
        music->play();





    }
    QTimer::singleShot(30000, label2, SLOT(close()));
}


void Tekken6DebuggerByThanksMia::on_lightningstarting_clicked() {


   
   
    
    
    
    
    
    
   
    QMovie* movie2 = new QMovie(":/videos/resources/sisters.jpg");
    qDebug() << "sis";
    if (!movie2->isValid()) {
        //something went Wrong
        return;
    }



    //play GIF

    auto label2 = new QLabel();
    label2->resize(730, 1000);
    label2->move(-10, -5);
    label2->setMovie(movie2);
    label2->show();
    movie2->start();
    


   


    QTimer* timer2 = new QTimer(this);
    connect(timer2, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
    timer2->start(1000);
    //start time to close it after 10 sec
    QTimer::singleShot(5000, [label2, &timer2] {
        // label->close();
        
        label2->deleteLater();
        label2->close();
        




        });
    disconnect(timer2, SIGNAL(timeout()), this, SLOT(PrintDebugInTimer()));
    QMediaPlayer* music = new QMediaPlayer(this);
        music->setMedia(QUrl("qrc:/musik/resources/mlg/DamnSon.mp3"));



        if (music->state() == QMediaPlayer::PlayingState) {
            music->setPosition(0);
        }

        // if the sound is not playing, simply call play()
        else if (music->state() == QMediaPlayer::StoppedState) {
            music->play();


          

        }
 
}


void Tekken6DebuggerByThanksMia::on_lightgif_clicked() {

    QMovie* movie2 = new QMovie(":/videos/resources/notyoursister.jpg");

    qDebug() << "sis";
    if (!movie2->isValid()) {
        //something went Wrong
        return;
    }




    //play GIF

    auto label2 = new QLabel();
    label2->resize(369, 222);
    label2->setMovie(movie2);

    label2->move(-15, -1);
    label2->show();
    movie2->start();

    QMediaPlayer* music = new QMediaPlayer(label2);
    music->setMedia(QUrl("qrc:/musik/resources/MOM.mp3"));
    music->setVolume(55);
    music->play();
    label2->setAttribute(Qt::WA_DeleteOnClose);



    if (music->state() == QMediaPlayer::PlayingState) {
        music->setPosition(0);
        music->setVolume(55);

    }


    // if the sound is not playing, simply call play()
    else if (music->state() == QMediaPlayer::StoppedState) {
        music->setVolume(55);
        music->play();

        





    }
    QTimer::singleShot(16000, label2, SLOT(close()));
}


void Tekken6DebuggerByThanksMia::on_yugiho_clicked() {




    
   
    
    QVideoWidget* vw = new QVideoWidget(this);
    QMediaPlayer* mp = new QMediaPlayer(vw);

    


    //layout->addWidget(PAUSE);
    mp->setMedia(QUrl("qrc:/videos/resources/mlg/yugiho.mp4"));
    mp->setVideoOutput(vw);

    vw->setGeometry(1020, 600, 620, 500);
    vw->move(0, 200);
    
    vw->show();
    vw->setAttribute(Qt::WA_DeleteOnClose);
   
    
    mp->play();


   
    
    
    //start time to close it after 5 sec
    
  
    
    QTimer::singleShot(28000, [vw,mp] {
        // label->close();
        
        vw->close();
        mp->stop();
        
        
       








        });





    
}


void Tekken6DebuggerByThanksMia::on_tekken7_clicked() {
    QVideoWidget* vw = new QVideoWidget();
    QMediaPlayer* mp = new QMediaPlayer(vw);



    //layout->addWidget(PAUSE);
    mp->setMedia(QUrl("qrc:/videos/resources/mlg/tekken9.mp4"));
    mp->setVideoOutput(vw);

    vw->setGeometry(1280, 720, 680, 420);
    vw->move(-15, 150);
    vw->show();
    vw->setAttribute(Qt::WA_DeleteOnClose);

    mp->play();





    if (mp->state() == QMediaPlayer::PlayingState) {
        mp->setPosition(0);

    }


    // if the sound is not playing, simply call play()
    else if (mp->state() == QMediaPlayer::StoppedState) {

        mp->play();





    }
    QTimer::singleShot(25000, vw, SLOT(close()));

}
//elfenlied
void Tekken6DebuggerByThanksMia::on_lightning_poses_clicked() {
    QVideoWidget* vw = new QVideoWidget();
    QMediaPlayer* mp = new QMediaPlayer(vw);



    //layout->addWidget(PAUSE);
    mp->setMedia(QUrl("qrc:/videos/resources/mlg/Elfen Lied Komplett.mp4"));
    mp->setVideoOutput(vw);

    vw->setGeometry(1280, 720, 680, 420);
    vw->move(-15, 250);
    vw->show();
    vw->setAttribute(Qt::WA_DeleteOnClose);

    mp->play();

    



    if (mp->state() == QMediaPlayer::PlayingState) {
        mp->setPosition(0);

    }


    // if the sound is not playing, simply call play()
    else if (mp->state() == QMediaPlayer::StoppedState) {

        mp->play();





    }
    QTimer::singleShot(111000, vw, SLOT(close()));

}
//pillow
void Tekken6DebuggerByThanksMia::on_pillow_clicked() {
    QVideoWidget* vw = new QVideoWidget();
    QMediaPlayer* mp = new QMediaPlayer(vw);



    //layout->addWidget(PAUSE);
    mp->setMedia(QUrl("qrc:/videos/resources/mlg/pillow.mp4"));
    mp->setVideoOutput(vw);

    vw->setGeometry(1280, 720, 680, 420);
    vw->move(-15, 450);
    vw->show();
    vw->setAttribute(Qt::WA_DeleteOnClose);

    mp->play();





    if (mp->state() == QMediaPlayer::PlayingState) {
        mp->setPosition(0);

    }


    // if the sound is not playing, simply call play()
    else if (mp->state() == QMediaPlayer::StoppedState) {

        mp->play();





    }
    QTimer::singleShot(36000, vw, SLOT(close()));


}

//teletubie
void Tekken6DebuggerByThanksMia::on_teletubie_clicked() {
    QVideoWidget* vw = new QVideoWidget(this);
    QMediaPlayer* mp = new QMediaPlayer(vw);




    //layout->addWidget(PAUSE);
    mp->setMedia(QUrl("qrc:/videos/resources/mlg/teletubies.mp4"));
    mp->setVideoOutput(vw);

    vw->setGeometry(720, 480, 620, 300);
    vw->move(0, 200);

    vw->show();
    vw->setAttribute(Qt::WA_DeleteOnClose);


    mp->play();





    //start time to close it after 5 sec



    QTimer::singleShot(27000, [vw, mp] {
        // label->close();

        vw->close();
        mp->stop();

        });

}


void Tekken6DebuggerByThanksMia::on_antivirus_clicked() {
    
    QVideoWidget* vw = new QVideoWidget();
    QMediaPlayer* mp = new QMediaPlayer(vw);



    //layout->addWidget(PAUSE);
    mp->setMedia(QUrl("qrc:/videos/resources/mlg/antivirus.mp4"));
    mp->setVideoOutput(vw);

    vw->setGeometry(1280, 720, 680, 420);
    vw->move(-15, 220);
    vw->show();
    vw->setAttribute(Qt::WA_DeleteOnClose);

    mp->play();

    vw->setAttribute(Qt::WA_DeleteOnClose);



    if (mp->state() == QMediaPlayer::PlayingState) {
        mp->setPosition(0);

    }


    // if the sound is not playing, simply call play()
    else if (mp->state() == QMediaPlayer::StoppedState) {

        mp->play();





    }
    QTimer::singleShot(119000, vw, SLOT(close()));

}


void Tekken6DebuggerByThanksMia::on_weed_clicked() {






    QMovie* movie2 = new QMovie(":/bilder/resources/lightninghenati.jpg");

    qDebug() << "sis";
    if (!movie2->isValid()) {
        //something went Wrong
        return;
    }




    //play GIF

    auto label2 = new QLabel();
    label2->resize(800, 450);
    label2->setMovie(movie2);

    label2->move(-5, -5);
    label2->show();
    movie2->start();

    QMediaPlayer* music = new QMediaPlayer(label2);
    music->setMedia(QUrl("qrc:/videos2/resources/mlg/DamnsonWow_.mp3"));
    
    music->play();
    label2->setAttribute(Qt::WA_DeleteOnClose);


    
    if (music->state() == QMediaPlayer::PlayingState) {
        music->setPosition(0);

    }


    // if the sound is not playing, simply call play()
    else if (music->state() == QMediaPlayer::StoppedState) {
        
        music->play();





    }
    QTimer::singleShot(19000, label2, SLOT(close()));


}

void Tekken6DebuggerByThanksMia::on_jackie1_clicked() {
    QVideoWidget* vw = new QVideoWidget(this);
    QMediaPlayer* mp = new QMediaPlayer(vw);




    //layout->addWidget(PAUSE);
    mp->setMedia(QUrl("qrc:/videos2/resources/mlg/jackiechan.mp4"));
    mp->setVideoOutput(vw);

    vw->setGeometry(720, 480, 620, 300);
    vw->move(0, 200);

    vw->show();
    vw->setAttribute(Qt::WA_DeleteOnClose);


    mp->play();





    //start time to close it after 5 sec



    QTimer::singleShot(23000, [vw, mp] {
        // label->close();

        vw->close();
        mp->stop();

        });
}
//duane not jackie2
void Tekken6DebuggerByThanksMia::on_jackie2_clicked() {
    QVideoWidget* vw = new QVideoWidget();
    QMediaPlayer* mp = new QMediaPlayer(vw);



    //layout->addWidget(PAUSE);
    mp->setMedia(QUrl("qrc:/videos2/resources/mlg/duane.mp4"));
    mp->setVideoOutput(vw);

    vw->setGeometry(1280, 720, 680, 420);
    vw->move(-15, 250);
    vw->show();
    vw->setAttribute(Qt::WA_DeleteOnClose);

    mp->play();





    if (mp->state() == QMediaPlayer::PlayingState) {
        mp->setPosition(0);

    }


    // if the sound is not playing, simply call play()
    else if (mp->state() == QMediaPlayer::StoppedState) {

        mp->play();





    }
    QTimer::singleShot(33000, vw, SLOT(close()));
}
//valhalla
void Tekken6DebuggerByThanksMia::on_valhalla_clicked() {
    QVideoWidget* vw = new QVideoWidget(this);
    QMediaPlayer* mp = new QMediaPlayer(vw);

    mp->setMedia(QUrl("qrc:/videos/resources/mlg/valhalla.mp4"));
    mp->setVideoOutput(vw);

    vw->setGeometry(720, 480, 620, 300);
    vw->move(0, 200);

    vw->show();
    vw->setAttribute(Qt::WA_DeleteOnClose);


    mp->play();





    //start time to close it after 5 sec



    QTimer::singleShot(33000, [vw, mp] {
        // label->close();

        vw->close();
        mp->stop();

        });
}

void Tekken6DebuggerByThanksMia::on_victory_clicked() {

    QVideoWidget* vw = new QVideoWidget();
    QMediaPlayer* mp = new QMediaPlayer(vw);



    //layout->addWidget(PAUSE);
    mp->setMedia(QUrl("qrc:/videos/resources/mlg/forredditvictory.mp4"));
    mp->setVideoOutput(vw);

    vw->setGeometry(1280, 720, 680, 420);
    vw->move(115, 350);
    vw->show();
    vw->setAttribute(Qt::WA_DeleteOnClose);

    mp->play();





    if (mp->state() == QMediaPlayer::PlayingState) {
        mp->setPosition(0);

    }


    // if the sound is not playing, simply call play()
    else if (mp->state() == QMediaPlayer::StoppedState) {

        mp->play();





    }
    QTimer::singleShot(27000, vw, SLOT(close()));


}

void Tekken6DebuggerByThanksMia::on_duckhunt_clicked() {

    QVideoWidget* vw = new QVideoWidget();
    QMediaPlayer* mp = new QMediaPlayer(vw);



    //layout->addWidget(PAUSE);
    mp->setMedia(QUrl("qrc:/videos/resources/mlg/duckhunt.mp4"));
    mp->setVideoOutput(vw);

    vw->setGeometry(1280, 720, 680, 420);
    vw->move(-15, 450);
    vw->show();
    vw->setAttribute(Qt::WA_DeleteOnClose);

    mp->play();





    if (mp->state() == QMediaPlayer::PlayingState) {
        mp->setPosition(0);

    }


    // if the sound is not playing, simply call play()
    else if (mp->state() == QMediaPlayer::StoppedState) {

        mp->play();





    }
    QTimer::singleShot(38000, vw, SLOT(close()));
}

void Tekken6DebuggerByThanksMia::on_lightkid_clicked() {

    QVideoWidget* vw = new QVideoWidget();
    QMediaPlayer* mp = new QMediaPlayer(vw);



    //layout->addWidget(PAUSE);
    mp->setMedia(QUrl("qrc:/videos/resources/mlg/lightkid.mp4"));
    mp->setVideoOutput(vw);

    vw->setGeometry(1280, 720, 680, 420);
    vw->move(-15, 350);
    vw->show();
    vw->setAttribute(Qt::WA_DeleteOnClose);

    mp->play();





    if (mp->state() == QMediaPlayer::PlayingState) {
        mp->setPosition(0);

    }


    // if the sound is not playing, simply call play()
    else if (mp->state() == QMediaPlayer::StoppedState) {

        mp->play();





    }
    QTimer::singleShot(46000, vw, SLOT(close()));


}

void Tekken6DebuggerByThanksMia::on_approved_clicked() {

    QMovie* movie2 = new QMovie(":/bilder/resources/fuckingapprovedgif.gif");

    qDebug() << "sis";
    if (!movie2->isValid()) {
        //something went Wrong
        return;
    }




    //play GIF

    auto label2 = new QLabel();
    label2->resize(600, 300);
    label2->setMovie(movie2);

    label2->move(-5, 369);
    label2->show();
    movie2->start();

    QMediaPlayer* music = new QMediaPlayer(label2);
    music->setMedia(QUrl("qrc:/musik/resources/fuckingapproved.mp3"));

    music->play();
    label2->setAttribute(Qt::WA_DeleteOnClose);



    if (music->state() == QMediaPlayer::PlayingState) {
        music->setPosition(0);

    }


    // if the sound is not playing, simply call play()
    else if (music->state() == QMediaPlayer::StoppedState) {

        music->play();





    }
    QTimer::singleShot(6000, label2, SLOT(close()));

}

void  Tekken6DebuggerByThanksMia::on_sparta_clicked() {
    
        QVideoWidget* vw = new QVideoWidget(this);
        QMediaPlayer* mp = new QMediaPlayer(vw);

        mp->setMedia(QUrl("qrc:/videos/resources/mlg/sparta.mp4"));
        mp->setVideoOutput(vw);

        vw->setGeometry(720, 480, 620, 300);
        vw->move(0, 200);

        vw->show();
        vw->setAttribute(Qt::WA_DeleteOnClose);


        mp->play();





        //start time to close it after 5 sec



        QTimer::singleShot(19000, [vw, mp] {
            // label->close();

            vw->close();
            mp->stop();

            });


}
void  Tekken6DebuggerByThanksMia::on_daigo_clicked() {
    QVideoWidget* vw = new QVideoWidget(this);
    QMediaPlayer* mp = new QMediaPlayer(vw);

    mp->setMedia(QUrl("qrc:/videos/resources/mlg/daigo.mp4"));
    mp->setVideoOutput(vw);

    vw->setGeometry(720, 480, 620, 300);
    vw->move(0, 200);

    vw->show();
    vw->setAttribute(Qt::WA_DeleteOnClose);


    mp->play();





    //start time to close it after 5 sec



    QTimer::singleShot(25000, [vw, mp] {
        // label->close();

        vw->close();
        mp->stop();

        });


}

void  Tekken6DebuggerByThanksMia::on_apple_clicked() {
    QVideoWidget* vw = new QVideoWidget(this);
    QMediaPlayer* mp = new QMediaPlayer(vw);

    mp->setMedia(QUrl("qrc:/videos/resources/mlg/apple.mp4"));
    mp->setVideoOutput(vw);

    vw->setGeometry(720, 480, 620, 300);
    vw->move(0, 200);

    vw->show();
    vw->setAttribute(Qt::WA_DeleteOnClose);


    mp->play();





    //start time to close it after 5 sec



    QTimer::singleShot(44000, [vw, mp] {
        // label->close();

        vw->close();
        mp->stop();

        });


}

void  Tekken6DebuggerByThanksMia::on_ww2_clicked() {

    QVideoWidget* vw = new QVideoWidget(this);
    QMediaPlayer* mp = new QMediaPlayer(vw);

    mp->setMedia(QUrl("qrc:/videos/resources/mlg/ww2.mp4"));
    mp->setVideoOutput(vw);

    vw->setGeometry(720, 480, 620, 300);
    vw->move(0, 200);

    vw->show();
    vw->setAttribute(Qt::WA_DeleteOnClose);


    mp->play();





    //start time to close it after 5 sec



    QTimer::singleShot(14000, [vw, mp] {
        // label->close();

        vw->close();
        mp->stop();

        });

}

void  Tekken6DebuggerByThanksMia::on_bibo_clicked() {

    QVideoWidget* vw = new QVideoWidget();
    QMediaPlayer* mp = new QMediaPlayer(vw);



    //layout->addWidget(PAUSE);
    mp->setMedia(QUrl("qrc:/videos/resources/mlg/bibo.mp4"));
    mp->setVideoOutput(vw);

    vw->setGeometry(1280, 720, 680, 420);
    vw->move(-15, 250);
    vw->show();
    vw->setAttribute(Qt::WA_DeleteOnClose);

    mp->play();





    if (mp->state() == QMediaPlayer::PlayingState) {
        mp->setPosition(0);

    }


    // if the sound is not playing, simply call play()
    else if (mp->state() == QMediaPlayer::StoppedState) {

        mp->play();





    }
    QTimer::singleShot(59000, vw, SLOT(close()));
}

void Tekken6DebuggerByThanksMia::on_duane_clicked() {

    QMovie* movie2 = new QMovie(":/videos/resources/mlg/duane2.gif");

    qDebug() << "sis";
    if (!movie2->isValid()) {
        //something went Wrong
        return;
    }




    //play GIF

    auto label2 = new QLabel();
    label2->resize(260, 200);
    label2->setMovie(movie2);

    label2->move(369, 369);
    label2->show();
    movie2->start();

    QMediaPlayer* music = new QMediaPlayer(label2);
    music->setMedia(QUrl("qrc:/musik/resources/mlg/combo.mp3"));

    music->play();
    label2->setAttribute(Qt::WA_DeleteOnClose);



    if (music->state() == QMediaPlayer::PlayingState) {
        music->setPosition(0);

    }


    // if the sound is not playing, simply call play()
    else if (music->state() == QMediaPlayer::StoppedState) {

        music->play();





    }
    QTimer::singleShot(22000, label2, SLOT(close()));
}


void Tekken6DebuggerByThanksMia::on_hot_clicked() {
    QMovie* movie2 = new QMovie(":/bilder/resources/lightsserahconversaisch.jpg");

    qDebug() << "sis";
    if (!movie2->isValid()) {
        //something went Wrong
        return;
    }




    //play GIF

    auto label2 = new QLabel();
    label2->resize(580, 777);
    label2->setMovie(movie2);

    label2->move(-15, -19);
    label2->show();
    movie2->start();

    QMediaPlayer* music = new QMediaPlayer(label2);
    music->setMedia(QUrl("qrc:/musik/resources/Final Fantasy XIII 2 Hip Hop Remix.mp3"));

    music->play();
    label2->setAttribute(Qt::WA_DeleteOnClose);



    if (music->state() == QMediaPlayer::PlayingState) {
        music->setPosition(0);

    }


    // if the sound is not playing, simply call play()
    else if (music->state() == QMediaPlayer::StoppedState) {

        music->play();





    }
    QTimer::singleShot(60000, label2, SLOT(close()));

}

void Tekken6DebuggerByThanksMia::on_lightningtrain_clicked() {

    QMovie* movie2 = new QMovie(":/videos/resources/lightningretuns.jpg");

    qDebug() << "sis";
    if (!movie2->isValid()) {
        //something went Wrong
        return;
    }




    //play GIF

    auto label2 = new QLabel();
    label2->resize(280, 888);
    label2->setMovie(movie2);

    label2->move(-15, -19);
    label2->show();
    movie2->start();

    QMediaPlayer* music = new QMediaPlayer(label2);
    music->setMedia(QUrl("qrc:/musik/resources/mlg/NOONE.mp3"));

    music->play();
    label2->setAttribute(Qt::WA_DeleteOnClose);



    if (music->state() == QMediaPlayer::PlayingState) {
        music->setPosition(0);

    }


    // if the sound is not playing, simply call play()
    else if (music->state() == QMediaPlayer::StoppedState) {

        music->play();





    }
    QTimer::singleShot(6500, label2, SLOT(close()));
}

void Tekken6DebuggerByThanksMia::on_soulcal_clicked() {
    QMovie* movie2 = new QMovie(":/videos/resources/frogcolor.gif");

    qDebug() << "sis";
    if (!movie2->isValid()) {
        //something went Wrong
        return;
    }




    //play GIF

    auto label2 = new QLabel();
    label2->resize(390, 330);
    label2->setMovie(movie2);

    label2->move(-9, 500);
    label2->show();
    movie2->start();

    QMediaPlayer* music = new QMediaPlayer(label2);
    music->setMedia(QUrl("qrc:/musik/resources/History Unfolds   Soul Calibur II.mp3"));

    music->play();
    label2->setAttribute(Qt::WA_DeleteOnClose);



    if (music->state() == QMediaPlayer::PlayingState) {
        music->setPosition(0);

    }


    // if the sound is not playing, simply call play()
    else if (music->state() == QMediaPlayer::StoppedState) {

        music->play();





    }
    QTimer::singleShot(60000, label2, SLOT(close()));

}


void Tekken6DebuggerByThanksMia::on_astraeacry_clicked() {
    QVideoWidget* vw = new QVideoWidget();
    QMediaPlayer* mp = new QMediaPlayer(vw);



    //layout->addWidget(PAUSE);
    mp->setMedia(QUrl("qrc:/video/resources/astraeal.mp4"));
    mp->setVideoOutput(vw);

    vw->setGeometry(1280, 720, 680, 420);
    vw->move(-15, 250);
    vw->show();
    vw->setAttribute(Qt::WA_DeleteOnClose);

    mp->play();





    if (mp->state() == QMediaPlayer::PlayingState) {
        mp->setPosition(0);

    }


    // if the sound is not playing, simply call play()
    else if (mp->state() == QMediaPlayer::StoppedState) {

        mp->play();





    }
    QTimer::singleShot(67000, vw, SLOT(close()));

}

void Tekken6DebuggerByThanksMia::on_Credits_clicked() {
    QMovie* movie2 = new QMovie(":/video/resources/firelink.gif");

    qDebug() << "sis";
    if (!movie2->isValid()) {
        //something went Wrong
        return;
    }




    //play GIF

    auto label2 = new QLabel();
    label2->resize(390, 330);
    label2->setMovie(movie2);

    label2->move(-9, -10);
    label2->show();
    movie2->start();

    QMediaPlayer* music = new QMediaPlayer(label2);
    music->setMedia(QUrl("qrc:/video/resources/Nameless Song.mp3"));

    music->play();
    label2->setAttribute(Qt::WA_DeleteOnClose);



    if (music->state() == QMediaPlayer::PlayingState) {
        music->setPosition(0);

    }


    // if the sound is not playing, simply call play()
    else if (music->state() == QMediaPlayer::StoppedState) {

        music->play();





    }
    QTimer::singleShot(90300, label2, SLOT(close()));
}