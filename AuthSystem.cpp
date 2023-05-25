//
// Created by 김성민 on 2023/05/25.
//

#include "AuthSystem.h"


void AuthSystem::AddAccount(int type, string id, string pw, string name, int num) {
    accounts.AddAccount(type, id, pw, name, num);
}

Account AuthSystem::CheckAuth(string id, string pw) {
    return accounts.CheckAuth(id, pw);
}

int AuthSystem::RequestLogout() {
    return accounts.RequestLogout();
}

int AuthSystem::RequestWithdraw(string id) {
    return accounts.RequestWithdraw(id);
}

Account AuthSystem::GetCurrentAccount() {
    return accounts.GetCurrentAccount();
}