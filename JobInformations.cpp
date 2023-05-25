//
// Created by 김성민 on 2023/05/25.
//

#include "JobInformations.h"
#include <iostream>

void JobInformations::RegisterJobPosting(string work, string deadline, int numOfPeople, Account curAccount) {
    jobInformations.push_back(JobInformation(curAccount.id, curAccount.name, curAccount.num, work, deadline, numOfPeople));
}

vector<JobInformation> JobInformations::PrintMyJobPosting(Account curAccount) {
    vector<JobInformation> ret;

    for (int i = 0; i < (int)jobInformations.size(); ++i) {
        if (jobInformations[i].num == curAccount.num) {
            ret.push_back(jobInformations[i]);
        }
    }

    return ret;
}

vector<JobInformation> JobInformations::SearchJobPosting(string name) {
    vector<JobInformation> ret;

    for (int i = 0; i < (int)jobInformations.size(); ++i) {
        if (name == jobInformations[i].name) {
            ret.push_back(jobInformations[i]);
        }
    }

    return ret;
}

vector<JobInformation> JobInformations::PrintApplyInfo(Account curAccount) {
    vector<JobInformation> ret;
    std::cout << "JobInformations : " << &jobInformations << std::endl;
    std::cout << jobInformations[0].appliedAccount.size() << std::endl;


    for (int i = 0; i < (int)jobInformations.size(); ++i) {
        for (int j = 0; j < (int)jobInformations[i].appliedAccount.size(); ++j) {
            if (jobInformations[i].appliedAccount[j].id == curAccount.id) {
                ret.push_back(jobInformations[i]);
            }
        }
    }

    return ret;
}