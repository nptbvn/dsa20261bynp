#ifndef MEDIADT
#define MEDIADT

/*
typedef struct {
int* emo;
} mediaEmoji;
*/

typedef struct {
int id;
FILE* mediaSource;
char* name;
int ath;
int typ;
int alb;
//author* ath;
double rate;
int[6] emoji;
comment* cmt;
} media;
#endif
