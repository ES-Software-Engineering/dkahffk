//
// Created by 김성민 on 2023/05/25.
//

#include "JobInformations.h"

/*
   함수 이름 : JobInformations::RegisterJobPosting()
   기능     : 새로운 채용정보 추가
   전달 인자 : string work, string deadline, int numOfPeople, Account curAccount
   반환값    : 없음
*/
void JobInformations::RegisterJobPosting(string work, string deadline, int numOfPeople, Account curAccount) {
    jobInformations.push_back(JobInformation(curAccount.id, curAccount.name, curAccount.num, work, deadline, numOfPeople));
}

/*
   함수 이름 : JobInformations::PrintMyJobPosting()
   기능     : 현재 접속한 유저가 등록한 채용정보 반환
   전달 인자 : Account curAccount
   반환값    : vector<JobInformation>
*/
vector<JobInformation> JobInformations::PrintMyJobPosting(Account curAccount) {
    vector<JobInformation> ret;

    for (int i = 0; i < (int)jobInformations.size(); ++i) {
        if (jobInformations[i].num == curAccount.num) {
            ret.push_back(jobInformations[i]);
        }
    }

    return ret;
}

/*
   함수 이름 : JobInformations::SearchJobPosting()
   기능     : 등록된 채용정보 반환
   전달 인자 : string name
   반환값    : vector<JobInformation>
*/
vector<JobInformation> JobInformations::SearchJobPosting(string name) {
    vector<JobInformation> ret;

    for (int i = 0; i < (int)jobInformations.size(); ++i) {
        if (name == jobInformations[i].name) {
            ret.push_back(jobInformations[i]);
        }
    }

    return ret;
}

/*
   함수 이름 : JobInformations::PrintApplyInfo()
   기능     : 지원한 채용정보 반환
   전달 인자 : Account curAccount
   반환값    : vector<JobInformation>
*/
vector<JobInformation> JobInformations::PrintApplyInfo(Account curAccount) {
    vector<JobInformation> ret;

    for (int i = 0; i < (int)jobInformations.size(); ++i) {
        for (int j = 0; j < (int)jobInformations[i].appliedAccount.size(); ++j) {
            if (jobInformations[i].appliedAccount[j].id == curAccount.id) {
                ret.push_back(jobInformations[i]);
            }
        }
    }

    return ret;
}

/*
   함수 이름 : JobInformations::ApplyJobInformation()
   기능     : 채용 지원 후 해당 채용정보 반환
   전달 인자 : int businessNum, Account curAccount
   반환값    : JobInformation
*/
JobInformation JobInformations::ApplyJobInformation(int businessNum, Account curAccount){
     for (int i = 0; i < (int)jobInformations.size(); ++i) {
        if (jobInformations[i].num == businessNum) {
            jobInformations[i].appliedAccount.push_back(curAccount);
            return jobInformations[i];
        }
    }
}
