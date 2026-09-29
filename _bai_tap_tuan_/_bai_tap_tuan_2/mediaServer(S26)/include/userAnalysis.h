#ifndef USRANLYSIS
#define USRANLYSIS

/*
typedef struct {
} usrhis;
*/

typedef struct {
int id;
//usrhis history;
//int* history;
view* history; //chuỗi lịch sử xem
comment* cmt;
rate* rateHis;
emoji* emo;
} usrAnl;

typedef struct {
bool isLikeDao;
bool itbayto;
bool cayView;
bool lungtung;
bool clone;
bool likeshort;
bool likemedium;
bool likelong;
} usrbasicAnl;

typedef struct {
char** hashtag;
char** main;
char** scence;
char** unique;
int* typeList;
} usrkey;

typedef struct {
int* mostPlayTime;
double* timepermedia; //ti le, ko phai thoi gian that
int[30] timeperdaytrend;
} usrAnlTime;
#endif
