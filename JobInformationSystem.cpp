//
// Created by 김성민 on 2023/05/25.
//

#include "JobInformationSystem.h"


void JobInformationSystem::RegisterJobPosting(string work, string deadline, int numOfPeople, Account curAccount) {
    jobInformations.RegisterJobPosting(work, deadline, numOfPeople, curAccount);
}

vector<JobInformation> JobInformationSystem::PrintMyJobPosting(Account curAccount) {

    return jobInformations.PrintMyJobPosting(curAccount);
}



vector<JobInformation> JobInformationSystem::SearchJobPosting(string name) {
    vector<JobInformation> ret = jobInformations.SearchJobPosting(name);
//   TODO sort(ret.begin(), ret.end()); // 정렬해야해!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    return ret;
}

vector<JobInformation> JobInformationSystem::PrintApplyInfo(Account curAccount) {
    vector<JobInformation> ret = jobInformations.PrintApplyInfo(curAccount);
    // TODO sort

    return ret;
}

JobInformation JobInformationSystem::ApplyJobInformation( int businessNum, Account curAccount){
    vector<JobInformation> jobs = jobInformations.getJobInformations();

    for (auto jobInfo : jobs) {
        if (jobInfo.num == businessNum) {
            return jobInfo;
        }
    }
    // for (auto jobInfo : jobInformations) {
    //     if(jobInfo.getBusinessNum() == businessNum) {
    //         int curUserNum = authSystem.getAccountNum();
    //         appliedJobInformations[curUserNum].push_back(jobInfo);
    //         fout << "> " << jobInfo.getCompanyName() << ' ' << jobInfo.getBusinessNum() << ' ' << jobInfo.getWork() << endl;
    //     }
    // }
}