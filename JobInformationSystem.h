//
// Created by 김성민 on 2023/05/25.
//

#ifndef UNTITLED1_JOBINFORMATIONSYSTEM_H
#define UNTITLED1_JOBINFORMATIONSYSTEM_H

#include "JobInformationUI.h"
#include "JobInformations.h"

#include <algorithm>

using namespace std;

/*
   클래스 이름 : JobInformationSystem
   기능     : 채용 정보 등록 및 관리 관련 처리를 위한 control
*/
class JobInformationSystem {
private:
    JobInformations jobInformations;

public:
    JobInformationUI* jobInformationUI;

    void RegisterJobPosting(string work, string deadline, int numOfPeople, Account curAccount);
    vector<JobInformation> PrintMyJobPosting(Account curAccount);
    vector<JobInformation> SearchJobPosting(string name);
    vector<JobInformation> PrintApplyInfo(Account curAccount);
    JobInformation ApplyJobInformation(int businessNum, Account curAccount);
};


#endif //UNTITLED1_JOBINFORMATIONSYSTEM_H
