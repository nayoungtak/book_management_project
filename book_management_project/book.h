#ifndef BOOK_H
#define BOOK_H

typedef struct books {
    char bookID[30];        //책 고유 아이디 ex) 430.1가357
    char bookName[255];      //책 제목
    char writer[255];        //저자
    char translator[255];    //번역가, 옮긴이
    char bookOX[20];        //Available 과 No Available 로 대여상태 구분
    char maker[255];         //출판사
}BOOKS;

#endif
