
// Copyright (c) 2021, ThanksMia
//##Tekken 6 Debugger By ThanksMia

//This Debugger  hacktool was written in C++ using QT 5.15.2 it should be a representation on
//how to build a multimedia hack tool, that has good backend but also provides user feedback.
//visit:thanksmianews.com for more information.

#pragma once
#include <QtWidgets/QWidget>
#include "ui_Tekken6DebuggerByThanksMia.h"
#include <QDebug>
#include "tmapi.h"
#include "ccapi.h"
#include "api.h"
#include <qtimer.h>
#include <qmultimedia.h>
#include <QMediaPlayer>
#include <QDebug>
#include <QVideoWidget>
#include <qsettings.h>
#include <QVariant>






class Tekken6DebuggerByThanksMia : public QWidget
{
    Q_OBJECT

public:
    Tekken6DebuggerByThanksMia(QWidget *parent = Q_NULLPTR);



private slots:
    void on_Connect_clicked();

    void on_Attach_clicked();

    void on_TMAPI_clicked();

    void on_CCAPI_clicked();

    void on_CameraMod_stateChanged(int arg1);

    void on_MAXHP_clicked();
    void on_MAXHP_Player2_clicked();
    void on_untouchableP1_clicked();
    void on_untouchableP2_clicked();
    void on_RageModeP1_clicked();
    void on_RageModeP2_clicked();
    void on_YellowChargeP1_clicked();
    void on_YellowChargeP2_clicked();
    void on_FreezeP1_clicked();
    void on_FreezeP2_clicked();
    void on_ElectricP1_clicked();
    void on_ElectricP2_clicked();
    void on_infinite_bound1_clicked();
    void on_infinite_bound2_clicked();
    void on_SpeedPlayer1_clicked();
    void on_SpeedPlayer1second_clicked();
    void on_SpeedPlayer2_clicked();
    void on_CampaignCamera_stateChanged(int arg1);
    void on_Gold_clicked();
    void on_hitanywhere_stateChanged(int arg1);
    void on_CpuP1_stateChanged(int arg1);
    void on_CpuP2_stateChanged(int arg1);
    void on_KillP1_clicked();
    void on_KillP2_clicked();
    void on_selecttokillp1_clicked();
    void on_selecttokillp2_clicked();
    void on_infinitetimer_clicked();
    void on_nodropbreakingfloor_clicked();
    void on_flymodp1_clicked();
    void on_flymodp2_clicked();
    void on_azazelp1_clicked();
    void on_azazelp2_clicked();
    void on_uniquestartazazel_clicked();
    void on_nancyuniquestart_clicked();

    void on_clickme_clicked();

    void on_lightningstarting_clicked();
    void on_Infinite_Juggle_clicked();
    void on_Infinite_JuggleP2_clicked();
    void on_ElectricFountain_clicked();
    void e_water();
    void on_MysticalForest_clicked();
    void forest();
    void on_WarZone_clicked();
    void War();
    void on_ManjiValley_clicked();
    void on_GymStage_clicked();
    void Gym();
    void on_FUJIAN_clicked();
    void FUJ();
    void on_WESTDISTRICT13_clicked();
    void west13();
    void on_ChinaTown_clicked();
    void China();
    void on_abyss_clicked();
    void door();
    void on_MishimaMansion_clicked();
    void Mishima();
    void on_UNDERGROUNDPASSENGER_clicked();
    void UNDERGROUND();
    void on_CENTRALDISTRICTSTREET11_clicked();
    void CENTRALDISTRICT();
    void on_GREATSEAHORSEHOTEL_clicked();
    void GREATSEA();
    void on_TRAINOFTHENIGHTMARES_clicked();
    void TRAINOF();
    void on_CORPORATIONGTOWER_clicked();
    void CORPORATION();
    void on_CENTRALUNDERGROUNDROAD_clicked();
    void CENTRALUNDER();
    void on_MYSTICVILLAGE_clicked();
    void MYSTICV();
    void on_SOUTHFOREST_clicked();
    void SOUTH();
    void on_SOUTHBAY_clicked();
    void SOUTHB();
    void on_TERMINALOFCONTAINERS_clicked();
    void TERMINALOF();
    void on_TERMINALOFCONTAINERS2_clicked();
    void TERMINALOF2();
    void on_LOSTCEMETERY_clicked();
    void LOST();
    void on_TERMINALOFCONTAINERS7_clicked();
    void TERMINALOF7();
    void on_MISHIMAPOLYTECHNIC_clicked();
    void MISHIMAP();
    void on_YOSHIMITSUDOJO_clicked();
    void YOSHIMITS();
    void on_INDUSTRIALCOMPLEX_clicked();
    void INDUSTRIALCOM();
    void on_INDUSTRIALHIGHWAY_clicked();
    void INDUSTRIALH();
    void on_NORTHNATURALPARK_clicked();
    void NORTHNATURAL();
    void on_ARCHAEOLOGICALEXPEDITION_clicked();
    void ARCHAEOLOGICAL();
    void on_Mokujinstage_clicked();
    void Mokujin();
    void on_CHINATOWNAFTERNOON_clicked();
    void CHINATOWNAFTER();
    void on_Extrastage4_clicked();
    void Extra4();
    void on_Extrastage2_clicked();
    void Extra2();
    void on_Extrastage1_clicked();
    void Extra1();
    void on_LABORATORIO_clicked();
    void LABOR();
    void on_VIOLETSYSTEMS_clicked();
    void VIOLET();
    void on_KAZAMADOJO_clicked();
    void KAZAMA();
    void on_Matahorn_clicked();
    void Mata();

  
    void on_shit_clicked();
    void on_lightgif_clicked();
    void on_yugiho_clicked();
    void on_tekken7_clicked();
    void on_lightning_poses_clicked();
    void on_pillow_clicked();
    void on_teletubie_clicked();
    void on_antivirus_clicked();
    void on_weed_clicked();
    void on_jackie1_clicked();
    void on_jackie2_clicked();
    void on_valhalla_clicked();
    void on_victory_clicked();
    void on_duckhunt_clicked();
    void on_lightkid_clicked();
    void on_approved_clicked();
    void on_sparta_clicked();
    void on_daigo_clicked();
    void on_apple_clicked();
    void on_ww2_clicked();
    void on_bibo_clicked();
    void on_duane_clicked();
    void on_hot_clicked();
    void on_lightningtrain_clicked();
    void on_soulcal_clicked();
    void on_astraeacry_clicked();
    void on_MoveSet_Change_P1_clicked();
    void on_Player1_face_clicked();
    void on_Player2_face_clicked();
    void on_comboBox_MoveSet_P1_activated(int index);
    void on_MoveSet_Change_P2_clicked();
    void on_comboBox_MoveSet_P2_activated(int index);
    void on_Credits_clicked();
    void on_NoClip_clicked();
   
    
private:
    
    Ui::Tekken6DebuggerByThanksMiaClass ui;
    TMAPI tmapi;
    CCAPI ccapi;
    API _api;
    int Time;
    
    
    
    

   
    
};
