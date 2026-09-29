#ifndef HISTORYDT
#define HISTORYDT


typedef struct {
int id;
int current; //vị trí đang xem trc khi thoát media
int* pP; //các mốc tg Pause
int* plP; //các mốc play
int time1; 
//play media...
int time2;
int usrID;
} view;


typedef struct {
int id;
int time;
int type;
int usrID;
} emoji;

typedef struct {
int id;
int mediaID;
int time;
char* cmt;
int usrID;
} comment;

typedef struct {
int id;
int mediaID;
int time;
double rate; //he so 10;
int usrID;
} rate;

typedef struct {
int id;
int time1;
//online...
int time2;
int usrID;
int ip;
} accessRec;

typedef struct {
int id;
int time1;
//online...
int time2;
//int usrID;
int ip;
} iaccessRec;

#endif
