//
// Created by 김성민 on 2023/05/25.
//

#include "Accounts.h"

/*
   함수 이름 : Accounts::CheckAuth()
   기능     : 계정 존재 유무 확인 및 반환
   전달 인자 : string id, string pw
   반환값    : Account
*/
Account Accounts::CheckAuth(string id, string pw) {
    for (int i = 0; i < (int)accounts.size(); ++i) {
        if (accounts[i].id == id && accounts[i].password == pw) {
            loginAccountIdx = i;
            return accounts[i];
        }
    }
}

/*
   함수 이름 : Accounts::RequestLogout()
   기능     : 로그아웃 처리
   전달 인자 : 없음
   반환값    : string
*/
string Accounts::RequestLogout() {
    string ret = accounts[loginAccountIdx].id;
    loginAccountIdx = -1;
    return ret;
}

/*
   함수 이름 : Accounts::AddAccount()
   기능     : 계정추가
   전달 인자 : int type, string id, string pw, string name, int num
   반환값    : 없음
*/
void Accounts::AddAccount(int type, string id, string pw, string name, int num) {
    accounts.push_back(Account(type, id, pw, name, num));
}

/*
   함수 이름 : Accounts::RequestWithdraw()
   기능     : 계정삭제 처리
   전달 인자 : string id
   반환값    : int
*/
int Accounts::RequestWithdraw(string id) {
    int ret;
    for (int i = 0; i < (int)accounts.size(); ++i) {
        if (accounts[i].id == id) {
            ret = i;
            accounts.erase(accounts.begin() + i);
        }
    }
    return ret;
}

/*
   함수 이름 : Accounts::GetCurrentAccount()
   기능     : 현재 로그인 유저 정보반환
   전달 인자 : 없음
   반환값    : Account
*/
Account Accounts::GetCurrentAccount() {
    return accounts[loginAccountIdx];
}