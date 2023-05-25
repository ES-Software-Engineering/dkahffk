//
// Created by 김성민 on 2023/05/25.
//

#include "JobInformationSystem.h"

/*
   함수 이름 : compareByCompanyName()
   기능     : 회사이름을 기준으로 비교한 결과를 반환
   전달 인자 : const JobInformation& job1, const JobInformation& job2
   반환값    : bool
*/
bool compareByCompanyName(const JobInformation& job1, const JobInformation& job2) {
    return job1.name < job2.name;
}

/*
   함수 이름 : JobInformationSystem::RegisterJobPosting()
   기능     : 새로운 채용 정보를 등록
   전달 인자 : string work, string deadline, int numOfPeople, Account curAccount
   반환값    : void
*/
void JobInformationSystem::RegisterJobPosting(string work, string deadline, int numOfPeople, Account curAccount) {
    jobInformations.RegisterJobPosting(work, deadline, numOfPeople, curAccount);
}

/*
   함수 이름 : JobInformationSystem::RegisterJobPosting()
   기능     : 현재 접속한 유저가 등록한 채용 정보 반환
   전달 인자 : Account curAccount
   반환값    : vector<JobInformation> 
*/
vector<JobInformation> JobInformationSystem::PrintMyJobPosting(Account curAccount) {

    return jobInformations.PrintMyJobPosting(curAccount);
}

/*
   함수 이름 : JobInformationSystem::SearchJobPosting()
   기능     : 등록된 채용 정보를 회사이름을 기준으로 정렬하여 반환
   전달 인자 : string name
   반환값    : vector<JobInformation> 
*/
vector<JobInformation> JobInformationSystem::SearchJobPosting(string name) {
    vector<JobInformation> ret = jobInformations.SearchJobPosting(name);
    sort(ret.begin(), ret.end(), compareByCompanyName);
    return ret;
}

/*
   함수 이름 : JobInformationSystem::PrintApplyInfo()
   기능     : 현재 접속한 유저가 지원한 채용정보를 회사이름을 기준으로 정렬하여 반환
   전달 인자 : Account curAccount
   반환값    : vector<JobInformation> 
*/
vector<JobInformation> JobInformationSystem::PrintApplyInfo(Account curAccount) {
    vector<JobInformation> ret = jobInformations.PrintApplyInfo(curAccount);

    sort(ret.begin(), ret.end(), compareByCompanyName);

    return ret;
}

/*
   함수 이름 : JobInformationSystem::ApplyJobInformation()
   기능     : 현재 접속한 유저가 선택한 채용정보에 지원처리
   전달 인자 : int businessNum, Account curAccount
   반환값    : JobInformation
*/
JobInformation JobInformationSystem::ApplyJobInformation( int businessNum, Account curAccount){
    return jobInformations.ApplyJobInformation(businessNum, curAccount);
}