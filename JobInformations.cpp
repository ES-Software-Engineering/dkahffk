//
// Created by 김성민 on 2023/05/25.
//

#include "JobInformations.h"

void JobInformations::RegisterJobPosting(string work, string deadline, int numOfPeople, Account curAccount) {
    jobInformations.push_back(JobInformation(curAccount.id, curAccount.name, curAccount.num, work, deadline, numOfPeople));
}

vector<JobInformation> JobInformations::SearchJobPosting(Account curAccount) {
    vector<JobInformation> ret;

    for (int i = 0; i < (int)jobInformations.size(); ++i) {
        if (curAccount.id == jobInformations[i].id) {
            ret.push_back(jobInformations[i]);
        }
    }

    return ret;
}