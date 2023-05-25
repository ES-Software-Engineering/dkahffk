//
// Created by 김성민 on 2023/05/25.
//

#include "MainSystem.h"

MainSystem::MainSystem() {
    authSystem = new AuthSystem;
    authSystemUI = new AuthSystemUI;

    jobInformationSystem = new JobInformationSystem;
    jobInformationUI = new JobInformationUI;

    authSystem->authSystemUI = authSystemUI;
    authSystemUI->authSystem = authSystem;

    jobInformationSystem->jobInformationUI = jobInformationUI;
    jobInformationUI->jobInformationSystem = jobInformationSystem;
}

MainSystem::~MainSystem() {
    delete authSystem;
    delete authSystemUI;
    delete jobInformationSystem;
    delete jobInformationUI;
}

Account MainSystem::GetCurrentAccount() {
    return authSystem->GetCurrentAccount();
}


void MainSystem::run() {

    while (true) {
        int menuLv1, menuLv2;
        cin >> menuLv1 >> menuLv2;

        if (menuLv1 == 1 && menuLv2 == 1) { // 회원 가입
            authSystemUI->Register(fin, fout);
        } else if (menuLv1 == 1 && menuLv2 == 2) { // 회원 탈퇴
            authSystemUI->Withdraw(fin, fout);
        } else if (menuLv1 == 2 && menuLv2 == 1) { // 로그인
            authSystemUI->Login(fin, fout);
        } else if (menuLv1 == 2 && menuLv2 == 2) { // 로그아웃
            authSystemUI->Logout(fin, fout);
        } else if (menuLv1 == 3 && menuLv2 == 1) { // 채용 정보 등록
            jobInformationUI->RegisterJobPosting(fin, fout, GetCurrentAccount());
        } else if (menuLv1 == 3 && menuLv2 == 2) { // 등록된 채용 정보 조회
            jobInformationUI->PrintMyJobPosting(fin, fout, GetCurrentAccount());
        } else if (menuLv1 == 4 && menuLv2 == 1) { // 채용 정보 검색
            jobInformationUI->SearchJobPosting(fin, fout);
        } else if (menuLv1 == 4 && menuLv2 == 2) { // 채용 지원;
        } else if (menuLv1 == 4 && menuLv2 == 3) { // 지원 정보 조회
        } else if (menuLv1 == 6 && menuLv2 == 1) { // 종료
            cout << "6.1. 종료" << endl;
            break;
        }
    }
}