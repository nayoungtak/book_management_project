#ifndef BORROW_H
#define BORROW_H

typedef struct borrow {
    short borrowday;                //책 대여 일 수
    short Lateday;                  //연체 기간
    char LateCheck[10];             //사용자가 연체 상태인지 아닌지 TRUE / FALSE 로 구분
    char BorrowBook;                //대여한 책 권 수
    char requestClear[10];          //연체 해제 요청 TRUE / FALSE 로 구분해 요청 확인
    char requestLong[10];           //대여 일 수 연장 요청 TRUE / FALSE 로 구분해 요청 확인
}BORROW;


#endif
