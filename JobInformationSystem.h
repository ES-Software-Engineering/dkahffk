//
// Created by 김성민 on 2023/05/25.
//

#ifndef UNTITLED1_JOBINFORMATIONSYSTEM_H
#define UNTITLED1_JOBINFORMATIONSYSTEM_H

#include "JobInformationUI.h"
#include "JobInformations.h"

#include <algorithm>

using namespace std;

class JobInformationSystem {
private:
    JobInformations jobInformations;

public:
    JobInformationUI* jobInformationUI;

    void RegisterJobPosting(string work, string deadline, int numOfPeople, Account curAccount);
    vector<JobInformation> ListMyJobPosting(Account curAccout);
    vector<JobInformation> SearchJobPosting(Account curAccount);
    JobInformation ApplyJobInformation(int businessNum, Account curAccount);
};


#endif //UNTITLED1_JOBINFORMATIONSYSTEM_H
