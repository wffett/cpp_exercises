#include <iostream>
#include <stdio.h>
#include <ctime>

using namespace std;

void showtime()
{
    time_t rawtime;
    struct tm *ptime_info;

    time(&rawtime);
    ptime_info = localtime(&rawtime);
    printf("Current: %02d-%02d-%02d %02d:%02d:%02d\n",
           ptime_info->tm_year+1900,
           ptime_info->tm_mon+1,
           ptime_info->tm_mday,
           ptime_info->tm_hour,
           ptime_info->tm_min,
           ptime_info->tm_sec);
}
