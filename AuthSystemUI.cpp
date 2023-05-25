//
// Created by 김성민 on 2023/05/25.
//

#include "AuthSystemUI.h"

#include "AuthSystem.h"

void AuthSystemUI::Login(ifstream& fin, ofstream& fout) {
    fout << "2.1 로그인" << endl;

    string id, pw;
    fin >> id >> pw;

    Account res = authSystem->CheckAuth(id, pw);

    fout << "> " << res.id << ' ' << res.password << endl;
}

void AuthSystemUI::Logout(ifstream& fin, ofstream& fout) {
    fout << "2.2 로그아웃" << endl;
    fout << "> " << authSystem->RequestLogout() << endl;
}

void AuthSystemUI::Register(ifstream& fin, ofstream& fout) {
    fout << "1.1 회원가입" << endl;
    int type, num;
    string name, id, pw;
    fin >> type;

    fin >> name >> num >> id >> pw;
    authSystem->AddAccount(type, id, pw, name, num);

}

void AuthSystemUI::Withdraw(ifstream& fin, ofstream& fout) {
    fout << "1.2 회원탈퇴" << endl;
    string id;
    fin >> id;

    fout << "> " << authSystem->RequestWithdraw(id) << endl;
}