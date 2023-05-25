//
// Created by 김성민 on 2023/05/25.
//

#ifndef UNTITLED1_JOBINFORMATIONS_H
#define UNTITLED1_JOBINFORMATIONS_H

#include <string>
#include "Accounts.h"

using namespace std;

/*
   클래스 이름 : JobInformation
   기능     : 채용 정보 저장
*/
class JobInformation {
public:
    string id, name;
    string work;
    string deadline;
    int numOfPeople, num;
    vector<Account> appliedAccount;
    JobInformation(string id, string name, int num, string work, string deadline, int numOfPeople) : id(id), name(name), num(num), work(work), deadline(deadline), numOfPeople(numOfPeople) {};
};

/*
   클래스 이름 : JobInformations
   기능     : JobInformation의 collection class 
*/
class JobInformations {
private:
    vector<JobInformation> jobInformations;
public:
    void RegisterJobPosting(string work, string deadline, int numOfPeople, Account curAccount);
    vector<JobInformation> PrintMyJobPosting(Account curAccount);
    vector<JobInformation> SearchJobPosting(string name);
    vector<JobInformation> PrintApplyInfo(Account curAccount);
    JobInformation ApplyJobInformation(int businessNum, Account curAccount);
};


#endif //UNTITLED1_JOBINFORMATIONS_H
