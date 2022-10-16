/*
   这是cout和printf函数输出速度的测试。
 * @Autor: 乌搏猿
 * @Date: 2021-08-16 18:55:12
 * @LastEditTime: 2022-10-16 16:44:32
 * @state: Other
 * @FilePath: \code_for_luogu\cout_and_printf.cpp
 */
#include <ctime>
#include <iostream>
#include <cstdio>
using namespace std;

clock_t cout_time, printf_time, cout_start, cout_end, printf_start, printf_end;

int main()
{
    printf("cout输出测试,请不要进行任何操作\n");
    system("timeout 5");
    int sum = 10000;
    cout_start = clock();
    while (sum--)
        cout << "你好你好我是谁";
    cout_end = clock();
    system("cls");
    printf("printf输出测试,请不要进行任何操作\n");
    system("timeout 5");
    sum = 10000;
    printf_start = clock();
    while (sum--)
        printf("你好你好我是谁");
    printf_end = clock();
    system("cls");
    printf(
        "以下是用cout和printf分别输出\"你好你好我是谁\"的用时测试\n\n"
        "cout总用时:%lf\n\n"
        "cout单次用时:%lf\n\n"
        "printf总用时:%lf\n\nprintf单次用时:%lf\n\n"
        "很明显，在中文输出上，%s才是王！！！\n\n",
        (cout_end - cout_start) / double(CLOCKS_PER_SEC),
        (cout_end - cout_start) / double(CLOCKS_PER_SEC) / 100000,
        (printf_end - printf_start) / double(CLOCKS_PER_SEC),
        (printf_end - printf_start) / double(CLOCKS_PER_SEC) / 100000,
        (cout_end - cout_start) / double(CLOCKS_PER_SEC) < (printf_end - printf_start) / double(CLOCKS_PER_SEC) ? "cout" : "printf");
    system("pause");
    system("cls");
    printf("cout输出测试,请不要进行任何操作\n");
    system("timeout 5");
    sum = 100000;
    cout_start = clock();
    while (sum--)
        cout << "0";
    cout_end = clock();
    system("cls");
    printf("printf输出测试,请不要进行任何操作\n");
    system("timeout 5");
    sum = 100000;
    printf_start = clock();
    while (sum--)
        printf("0");
    printf_end = clock();
    system("cls");
    printf(
        "以下是用cout和printf分别输出\"0\"的用时测试\n\n"
        "cout总用时:%lf\n\n"
        "cout单次用时:%lf\n\n"
        "printf总用时:%lf\n\nprintf单次用时:%lf\n\n"
        "很明显，在英文输出上，%s才是王！！！\n\n",
        (cout_end - cout_start) / double(CLOCKS_PER_SEC),
        (cout_end - cout_start) / double(CLOCKS_PER_SEC) / 100000,
        (printf_end - printf_start) / double(CLOCKS_PER_SEC),
        (printf_end - printf_start) / double(CLOCKS_PER_SEC) / 100000,
        (cout_end - cout_start) / double(CLOCKS_PER_SEC) < (printf_end - printf_start) / double(CLOCKS_PER_SEC) ? "cout" : "printf");
    system("pause");
    return 0;
}