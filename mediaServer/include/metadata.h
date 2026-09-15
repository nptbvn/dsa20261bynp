#ifndef METADATA
#define METADATA


typedef struct {
int id;
char* name;
int nom; //số bài
media* media;
} author;

typedef struct {
int id;
char* name;
int nom;
media* media;
} type;

typedef struct {
int id;
char* name;
int nom;
media* media;
} album;
#endif
