#ifndef GETTINGDATE_H
#define GETTINGDATE_H
/**
 *#include <ctime> para g++, y
 *#include <time.h> para gcc
 *time_t now = time(0);
 *tm *ltm = localtime(&now);
 */
typedef struct tm tm;
int get_year(tm*);
int get_month(tm*);
int get_day(tm*);
int get_hour(tm*);
int get_min(tm*);
int get_sec(tm*);

#endif /*GETTINGDATE_H*/

