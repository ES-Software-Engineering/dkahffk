//
// Created by 김성민 on 2023/05/25.
//

#include "Accounts.h"

Account Accounts::CheckAuth(string id, string pw) {
    for (int i = 0; i < (int)accounts.size(); ++i) {
        if (accounts[i].id == id && accounts[i].password == pw) {
            return accounts[i];
        }
    }
}
int Accounts::RequestLogout() {
    int ret = loginAccountIdx;
    loginAccountIdx = -1;
    return ret;
}

void Accounts::AddAccount(int type, string id, string pw, string name, int num) {
    accounts.push_back(Account(type, id, pw, name, num));
}

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

Account Accounts::GetCurrentAccount() {
    return accounts[loginAccountIdx];
}