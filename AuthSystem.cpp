//
// Created by 김성민 on 2023/05/25.
//

#include "AuthSystem.h"


/*
   함수 이름 : AuthSystem::AddAccount()
   기능     : 입력받은 정보로 계정추가
   전달 인자 : int type, string id, string pw, string name, int num
   반환값    : 없음
*/
void AuthSystem::AddAccount(int type, string id, string pw, string name, int num) {
    accounts.AddAccount(type, id, pw, name, num);
}

/*
   함수 이름 : AuthSystem::CheckAuth()
   기능     : 이미 존재하는 계정인지 확인하고 반환
   전달 인자 : string id, string pw
   반환값    : Account
*/
Account AuthSystem::CheckAuth(string id, string pw) {
    return accounts.CheckAuth(id, pw);
}

/*
   함수 이름 : AuthSystem::RequestLogout()
   기능     : 로그아웃 요청 및 로그아웃한 유저 반환
   전달 인자 : 없음
   반환값    : string
*/
string AuthSystem::RequestLogout() {
    return accounts.RequestLogout();
}

/*
   함수 이름 : AuthSystem::RequestWithdraw()
   기능     : 계정삭제 요청 및 삭제 유저 반환
   전달 인자 : string id
   반환값    : int
*/
int AuthSystem::RequestWithdraw(string id) {
    return accounts.RequestWithdraw(id);
}

/*
   함수 이름 : AuthSystem::GetCurrentAccount()
   기능     : 현재 로그인한 계정 정보반환
   전달 인자 : 없음
   반환값    : Account
*/
Account AuthSystem::GetCurrentAccount() {
    return accounts.GetCurrentAccount();
}