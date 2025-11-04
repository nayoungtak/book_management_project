#ifndef LOGIN_H
#define LOGIN_H

typedef struct login {
    char accountType[10];           //사용자의 타입 ADMIN, USER 중 하나
    char name[20];                  //사용자의 이름
    char phone[20];                 //사용자의 전화번호
    char ID[20];                    //사용자 아이디
    char PW[20];                    //사용자의 비밀번호
}LOGIN;


#endif