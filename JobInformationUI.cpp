//
// Created by 김성민 on 2023/05/25.
//

#include "JobInformationUI.h"

#include "JobInformationSystem.h"



/*
   함수 이름 : JobInformationUI::RegisterJobPosting()
   기능     : 사용자에게 전달받은 정보로 새로운 채용정보를 등록하고 해당 정보를 출력
   전달 인자 : ifstream &fin, ofstream &fout, Account curAccount
   반환값    : 없음
*/
void JobInformationUI::RegisterJobPosting(ifstream &fin, ofstream &fout, Account curAccount) {

    fout << "3.1. 채용 정보 등록" << endl;

    string work, deadline;
    int numOfPeople;
    fin >> work >> numOfPeople >> deadline;
    fout << "> " << work << ' ' << numOfPeople << ' ' << deadline << endl;

    jobInformationSystem->RegisterJobPosting(work, deadline, numOfPeople, curAccount);
}

/*
   함수 이름 : JobInformationUI::PrintMyJobPosting()
   기능     : 현재 사용자가 등록한 채용 정보를 받아서 출력
   전달 인자 : ifstream &fin, ofstream &fout, Account curAccount
   반환값    : 없음
*/
void JobInformationUI::PrintMyJobPosting(ifstream &fin, ofstream &fout, Account curAccount) {
    fout << "3.2. 등록된 채용 정보 조회" << endl;

    vector<JobInformation> matchingJobs = jobInformationSystem->PrintMyJobPosting(curAccount);

    for (auto it : matchingJobs) {
        fout << "> " << it.work << ' ' << it.numOfPeople << ' ' << it.deadline << endl;
    }

}

/*
   함수 이름 : JobInformationUI::SearchJobPosting()
   기능     : 등록된 채용정보를 받아서 출력
   전달 인자 : ifstream &fin, ofstream &fout
   반환값    : 없음
*/
void JobInformationUI::SearchJobPosting(ifstream &fin, ofstream &fout) {
    fout << "4.1. 채용 정보 검색" << endl;

    string name;
    fin >> name;

    vector<JobInformation> matchingJobs = jobInformationSystem->SearchJobPosting(name);

    for (auto it : matchingJobs) {
        fout << "> " << it.name << ' ' << it.num << ' ' << it.work << ' ' << it.numOfPeople << ' ' << it.deadline << endl;
    }
}

/*
   함수 이름 : JobInformationUI::PrintApplyInfo()
   기능     : 현재 접속한 사용자가 지원한 채용 정보를 전달받아 출력
   전달 인자 : ifstream &fin, ofstream &fout, Account curAccount
   반환값    : 없음
*/
void JobInformationUI::PrintApplyInfo(ifstream &fin, ofstream &fout, Account curAccount) {
    fout << "4.3. 지원 정보 조회" << endl;

    vector<JobInformation> matchingJobs = jobInformationSystem->PrintApplyInfo(curAccount);

    for (auto it : matchingJobs) {
        fout << "> " << it.name << ' ' << it.num << ' ' << it.work << ' ' << it.numOfPeople << ' ' << it.deadline << endl;
    }
}

/*
   함수 이름 : JobInformationUI::ApplyJobPosting()
   기능     : 접속한 유저의 정보를 입력받아 채용 지원 처리를 하고 출력
   전달 인자 : ifstream &fin, ofstream &fout, Account curAccount
   반환값    : 없음
*/
void JobInformationUI::ApplyJobPosting(ifstream &fin, ofstream &fout, Account curAccount) {
    fout << "4.2. 채용 지원" << endl;

    int businessNum;
    fin >> businessNum;

    JobInformation appliedJob = jobInformationSystem->ApplyJobInformation(businessNum, curAccount);
 
    fout << "> " << appliedJob.name << ' ' << appliedJob.num << ' ' << appliedJob.work << endl;
}