//
// Created by 김성민 on 2023/05/25.
//

#ifndef UNTITLED1_MAINSYSTEM_H
#define UNTITLED1_MAINSYSTEM_H

#include "AuthSystem.h"
#include "AuthSystemUI.h"
#include "JobInformationSystem.h"
#include "JobInformationUI.h"

#include <fstream>
#include <iostream>

using namespace std;

/*
   클래스 이름 : MainSystem
   기능     : 전체 시스템 런타임에 필요한 파일, 클래스 인스턴스를 생성 및 동작하게 함
*/
class MainSystem {
private:
    ifstream fin;
    ofstream fout;

    const string inputFileName = "input.txt";
    const string outputFileName = "output.txt";

    AuthSystem* authSystem;
    AuthSystemUI* authSystemUI;

    JobInformationSystem* jobInformationSystem;
    JobInformationUI* jobInformationUI;

public:
    MainSystem();
    ~MainSystem();
    Account GetCurrentAccount();
    void run();
};


#endif //UNTITLED1_MAINSYSTEM_H
