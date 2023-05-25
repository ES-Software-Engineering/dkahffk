//
// Created by 김성민 on 2023/05/25.
//

#ifndef UNTITLED1_AUTHSYSTEMUI_H
#define UNTITLED1_AUTHSYSTEMUI_H

#include <fstream>

using namespace std;


class AuthSystem;

/*
   클래스 이름 : AuthSystemUI
   기능     : 유저 관리 관련 boundary class
*/
class AuthSystemUI {
private:

public:
    AuthSystem* authSystem;
    void Login(ifstream& fin, ofstream& fout);
    void Logout(ifstream& fin, ofstream& fout);
    void Register(ifstream& fin, ofstream& fout);
    void Withdraw(ifstream& fin, ofstream& fout);
};


#endif //UNTITLED1_AUTHSYSTEMUI_H
