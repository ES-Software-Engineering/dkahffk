//
// Created by 김성민 on 2023/05/25.
//

#include "JobInformationSystem.h"


void JobInformationSystem::RegisterJobPosting(string work, string deadline, int numOfPeople, Account curAccount) {
    jobInformations.RegisterJobPosting(work, deadline, numOfPeople, curAccount);
}

vector<JobInformation> JobInformationSystem::ListMyJobPosting(Account curAccout) {
    vector<JobInformation> registedJobs;
    vector<JobInformation> jobs = jobInformations.getJobInformations();

    for (auto jobInfo : jobs) {
        if (jobInfo.id == curAccout.id) {
            registedJobs.push_back(jobInfo);
        }
    }

    return registedJobs;
}

vector<JobInformation> JobInformationSystem::SearchJobPosting(Account curAccount) {
    vector<JobInformation> ret = jobInformations.SearchJobPosting(curAccount);
//    sort(ret.begin(), ret.end()); // 정렬해야해!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

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
