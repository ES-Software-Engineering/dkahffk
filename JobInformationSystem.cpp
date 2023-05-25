//
// Created by 김성민 on 2023/05/25.
//

#include "JobInformationSystem.h"


void JobInformationSystem::RegisterJobPosting(string work, string deadline, int numOfPeople, Account curAccount) {
    jobInformations.RegisterJobPosting(work, deadline, numOfPeople, curAccount);
}

vector<JobInformation> JobInformationSystem::SearchJobPosting(Account curAccount) {
    vector<JobInformation> ret = jobInformations.SearchJobPosting(curAccount);
//    sort(ret.begin(), ret.end()); // 정렬해야해!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    return ret;
}