//
// Created by 김성민 on 2023/05/25.
//

#include "AuthSystemUI.h"

#include "AuthSystem.h"

/*
   함수 이름 : AuthSystemUI::Login()
   기능     : 사용자 정보를 입력받고 로그인 처리
   전달 인자 : ifstream& fin, ofstream& fout
   반환값    : 없음
*/
void AuthSystemUI::Login(ifstream& fin, ofstream& fout) {
    fout << "2.1. 로그인" << endl;

    string id, pw;
    fin >> id >> pw;

    Account res = authSystem->CheckAuth(id, pw);

    fout << "> " << res.id << ' ' << res.password << endl;

}

/*
   함수 이름 : AuthSystemUI::Logout()
   기능     : 사용자 정보를 입력받고 로그아웃 처리
   전달 인자 : ifstream& fin, ofstream& fout
   반환값    : 없음
*/
void AuthSystemUI::Logout(ifstream& fin, ofstream& fout) {
    fout << "2.2. 로그아웃" << endl;
    fout << "> " << authSystem->RequestLogout() << endl;
}

/*
   함수 이름 : AuthSystemUI::Register()
   기능     : 사용자 정보를 입력받고 회원가입 처리
   전달 인자 : ifstream& fin, ofstream& fout
   반환값    : 없음
*/
void AuthSystemUI::Register(ifstream& fin, ofstream& fout) {
    fout << "1.1. 회원가입" << endl;
    int type, num;
    string name, id, pw;
    fin >> type;

    fin >> name >> num >> id >> pw;
    authSystem->AddAccount(type, id, pw, name, num);
    fout << "> " << type << ' ' << name << ' ' << num << ' ' << id << ' ' << pw << endl;
}

/*
   함수 이름 : AuthSystemUI::Withdraw()
   기능     : 사용자 정보를 입력받고 회원탈퇴 처리
   전달 인자 : ifstream& fin, ofstream& fout
   반환값    : 없음
*/
void AuthSystemUI::Withdraw(ifstream& fin, ofstream& fout) {
    fout << "1.2. 회원탈퇴" << endl;
    string id;
    fin >> id;

    fout << "> " << authSystem->RequestWithdraw(id) << endl;
}