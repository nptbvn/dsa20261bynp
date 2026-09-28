#ifndef DS_TABLE
#define DS_TABLE
#include<stdbool.h>

//direct-address tables
typedef struct {
int key;
int dt;
} datdt;

typedef struct {
int max;
datdt** datable;
} datable;

bool datinit (datable* x, int n);
bool datexpand (datable* x, int n);
datdt* datsearch (datable* x, int k);
bool dainsert (datable* x, datdt* y);
bool dadelete (datable* x, datdt* y);
bool freedatable (datable* x);
#endif
