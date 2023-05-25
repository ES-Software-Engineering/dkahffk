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
