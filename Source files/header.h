#ifndef HEADER_H
#define HEADER_H

#include <unistd.h>
#include <curses.h>
#include <time.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdbool.h>

void intro();
bool check_board(int *arr);
void leaderboard();
char *mx_strstr(const char *s1, const char *s2);
int mx_strlen(char *s);
char *mx_strnew(const int size);
char *mx_strcpy(char *dst, const char *src);
char *mx_strdup(const char *str);
char *mx_strcat(char *s1, const char *s2);
char *mx_strjoin(char const *s1, char const *s2);
char *mx_file_to_str(const char *filename);
void mx_printint(int n);
void mx_printchar(char c);
int mx_strcmp(const char* s1, const char* s2);
bool mx_isspace(char c);

#endif

