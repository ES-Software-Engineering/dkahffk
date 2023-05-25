//
// Created by 김성민 on 2023/05/25.
//

#ifndef UNTITLED1_JOBINFORMATIONS_H
#define UNTITLED1_JOBINFORMATIONS_H

#include <string>
#include "Accounts.h"

using namespace std;

class JobInformation {
public:
    string id, name;
    string work;
    string deadline;
    int numOfPeople, num;
    JobInformation(string id, string name, int num, string work, string deadline, int numOfPeople) : id(id), name(name), num(num), work(work), deadline(deadline), numOfPeople(numOfPeople) {};
};

class JobInformations {
private:
    vector<JobInformation> jobInformations;
public:
    vector<JobInformation> getJobInformations() {
        return jobInformations;
    };
    void RegisterJobPosting(string work, string deadline, int numOfPeople, Account curAccount);
    vector<JobInformation> SearchJobPosting(Account curAccount);
};


#endif //UNTITLED1_JOBINFORMATIONS_H
