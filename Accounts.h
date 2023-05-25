//
// Created by 김성민 on 2023/05/25.
//

#ifndef UNTITLED1_ACCOUNTS_H
#define UNTITLED1_ACCOUNTS_H

#include <string>
#include <vector>

using namespace std;


/*
   클래스 이름 : Account
   기능     : 유저정보 저장
*/
class Account {
public:
    string id, password, name;
    int type, num;
    Account(int type, string id, string password, string name, int num) : type(type), id(id), password(password), name(name), num(num) {}

};

/*
   클래스 이름 : Accounts
   기능     : Account의 collection class
*/
class Accounts {
private:
    vector<Account> accounts;
    int loginAccountIdx = -1;

public:
    Account CheckAuth(string id, string pw);
    string RequestLogout();
    void AddAccount(int type, string id, string pw, string name, int num);
    int RequestWithdraw(string id);
    Account GetCurrentAccount();
};


#endif //UNTITLED1_ACCOUNTS_H
