//
// Created by 김성민 on 2023/05/25.
//

#ifndef UNTITLED1_JOBINFORMATIONUI_H
#define UNTITLED1_JOBINFORMATIONUI_H

#include <fstream>

#include "Accounts.h"

using namespace std;

class JobInformationSystem;

class JobInformationUI {
private:

public:
    JobInformationSystem* jobInformationSystem;

    void RegisterJobPosting(ifstream& fin, ofstream& fout, Account curAccount);
    void PrintMyJobPosting(ifstream& fin, ofstream& fout, Account curAccount);
    void SearchJobPosting(ifstream& fin, ofstream& fout);
    void ApplyJobPosting(ifstream& fin, ofstream& fout, Account curAccount);
    void PrintApplyInfo(ifstream& fin, ofstream& fout, Account curAccount);
};


#endif //UNTITLED1_JOBINFORMATIONUI_H
