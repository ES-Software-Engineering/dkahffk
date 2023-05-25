//
// Created by 김성민 on 2023/05/25.
//

#ifndef UNTITLED1_AUTHSYSTEM_H
#define UNTITLED1_AUTHSYSTEM_H

#include "AuthSystemUI.h"
#include "Accounts.h"

#include <string>
#include <vector>

using namespace std;





class AuthSystem {
private:
    Accounts accounts;
public:
    AuthSystemUI* authSystemUI;
    void AddAccount(int type, string id, string pw, string name, int num);
    int RequestLogout();
    Account CheckAuth(string id, string pw);
    int RequestWithdraw(string id);
    Account GetCurrentAccount();
};


#endif //UNTITLED1_AUTHSYSTEM_H
