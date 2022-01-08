/*
*  Define And Config
*/

#include<stdio.h>

#define FALSE 0
#define TRUE !FALSE

#define FAIL -1
#define SUCCESS !FAIL

#define ERROR FAIL
#define OK    SUCCESS

int test_define(void) {
    printf("%d \t\r\n",SUCCESS);
    return 0;
}

int test_snprintf (void) {
    char str[10] = {'w', '1', '2', '3', '4', '5', '8'};
    printf("%s\n",str);
    printf("%d : %s\n", str+11, str+11);
    int ret = snprintf(str, 3, "%s", "abcdefg");
    printf("%d\n",ret);
    printf("%s\n",str);
    return SUCCESS;
}

//sizeof(date_type)
int test_sizet(void) {
    _Bool check;
    char T0;
    int  T1;
    short T2;
    long  T3;
    float T4;
    double T5;
    wchar_t T6;
    printf("_Bool:%d\nchar:%d;\nint:%d;\nshort:%d;\nlong:%d\nfloat:%d\ndouble:%d\nwchar_t:%d\n", sizeof(_Bool),
     sizeof(char), sizeof(int), sizeof(short), sizeof(long), sizeof(float), sizeof(double), sizeof(wchar_t));
    return SUCCESS;
}

/*
*  callback register
*/

