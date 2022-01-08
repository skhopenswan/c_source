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

int test_string() {
    char str1[] = "begin";
    char str2[3] = {'o', 'p', 'e'};
    char str3[3] = "skh";
    printf(" str1 = %s;\n str2 = %s;\n str3 = %s\n", str1, str2, str3);

    int count = 10,i = 0;
    char* pn;

    //Alias,只代表块内存

    while (i < count)
    {
        /* code */
        pn = str1+i*sizeof(char);
        printf("str1[%d], 地址 = 0x%x, 数值 = %d, ASCII字符 = %d : %c, 当前字符串 = %s;\n",
                     i, pn, pn, *pn, *pn, pn);
        i++;
    }
    
    i = 0;
    do
    {
        /* code */
        pn = str2+i*sizeof(char);
        printf("str2[%d], 地址 = 0x%x, 数值 = %d, ASCII字符 = %d : %c, 当前字符串 = %s;\n",
                     i, pn, pn, *pn, *pn, pn);
        i++;
    } while (i < count);

    for (i = 0; i < count; i++)
    {
        /* code */
        pn = str3+i*sizeof(char);
        printf("str3[%d], 地址 = 0x%x, 数值 = %d, ASCII字符 = %d : %c, 当前字符串 = %s;\n",
                     i, pn, pn, *pn, *pn, pn);
    }


}

/*
*  Pointer ： int string
*/
int test_pointer(void) {
    int a =1;
    char b ='y';
    char str[] = "test";
    char* Pn;

    Pn = str;
    // Pn<=>str<=>&str[0]
    printf("取地址（指针） = %d \n", Pn);
    printf("数值 = %d \n", Pn);
    printf("字符 = %c \n", *(Pn+1));
    printf("字符串 = %s \n\n", Pn+1);
    return SUCCESS;
}


/*
*  callback register
*/

