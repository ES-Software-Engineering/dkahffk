//
// Created by 김성민 on 2023/05/25.
//

#include "JobInformationUI.h"

#include "JobInformationSystem.h"

void JobInformationUI::RegisterJobPosting(ifstream &fin, ofstream &fout, Account curAccount) {
    fout << "3.1. 채용 정보 등록" << endl;

    string work, deadline;
    int numOfPeople;
    fin >> work >> numOfPeople >> deadline;
    fout << "> " << work << ' ' << numOfPeople << ' ' << deadline << endl;


    jobInformationSystem->RegisterJobPosting(work, deadline, numOfPeople, curAccount);
}

void JobInformationUI::PrintMyJobPosting(ifstream &fin, ofstream &fout, Account curAccount) {

}

void JobInformationUI::SearchJobPosting(ifstream &fin, ofstream &fout, Account curAccount) {
    fout << "4.1 채용 정보 검색" << endl;

    string name;
    fin >> name;

    vector<JobInformation> matchingJobs = jobInformationSystem->SearchJobPosting(curAccount);

    for (auto it : matchingJobs) {
        fout << "> " << it.name << ' ' << it.num << ' ' << it.work << ' ' << it.numOfPeople << ' ' << it.deadline << endl;
    }
}