//
// Created by 김성민 on 2023/05/25.
//

#include "JobInformationSystem.h"

bool compareByCompanyName(const JobInformation& job1, const JobInformation& job2) {
    return job1.name < job2.name;
}

void JobInformationSystem::RegisterJobPosting(string work, string deadline, int numOfPeople, Account curAccount) {
    jobInformations.RegisterJobPosting(work, deadline, numOfPeople, curAccount);
}

vector<JobInformation> JobInformationSystem::PrintMyJobPosting(Account curAccount) {

    return jobInformations.PrintMyJobPosting(curAccount);
}



vector<JobInformation> JobInformationSystem::SearchJobPosting(string name) {
    vector<JobInformation> ret = jobInformations.SearchJobPosting(name);
    sort(ret.begin(), ret.end(), compareByCompanyName);
    return ret;
}

vector<JobInformation> JobInformationSystem::PrintApplyInfo(Account curAccount) {
    vector<JobInformation> ret = jobInformations.PrintApplyInfo(curAccount);

    sort(ret.begin(), ret.end(), compareByCompanyName);

    return ret;
}

JobInformation JobInformationSystem::ApplyJobInformation( int businessNum, Account curAccount){
    return jobInformations.ApplyJobInformation(businessNum, curAccount);
}