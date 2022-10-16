/*
   ����cout��printf��������ٶȵĲ��ԡ�
 * @Autor: �ڲ�Գ
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
    printf("cout�������,�벻Ҫ�����κβ���\n");
    system("timeout 5");
    int sum = 10000;
    cout_start = clock();
    while (sum--)
        cout << "����������˭";
    cout_end = clock();
    system("cls");
    printf("printf�������,�벻Ҫ�����κβ���\n");
    system("timeout 5");
    sum = 10000;
    printf_start = clock();
    while (sum--)
        printf("����������˭");
    printf_end = clock();
    system("cls");
    printf(
        "��������cout��printf�ֱ����\"����������˭\"����ʱ����\n\n"
        "cout����ʱ:%lf\n\n"
        "cout������ʱ:%lf\n\n"
        "printf����ʱ:%lf\n\nprintf������ʱ:%lf\n\n"
        "�����ԣ�����������ϣ�%s������������\n\n",
        (cout_end - cout_start) / double(CLOCKS_PER_SEC),
        (cout_end - cout_start) / double(CLOCKS_PER_SEC) / 100000,
        (printf_end - printf_start) / double(CLOCKS_PER_SEC),
        (printf_end - printf_start) / double(CLOCKS_PER_SEC) / 100000,
        (cout_end - cout_start) / double(CLOCKS_PER_SEC) < (printf_end - printf_start) / double(CLOCKS_PER_SEC) ? "cout" : "printf");
    system("pause");
    system("cls");
    printf("cout�������,�벻Ҫ�����κβ���\n");
    system("timeout 5");
    sum = 100000;
    cout_start = clock();
    while (sum--)
        cout << "0";
    cout_end = clock();
    system("cls");
    printf("printf�������,�벻Ҫ�����κβ���\n");
    system("timeout 5");
    sum = 100000;
    printf_start = clock();
    while (sum--)
        printf("0");
    printf_end = clock();
    system("cls");
    printf(
        "��������cout��printf�ֱ����\"0\"����ʱ����\n\n"
        "cout����ʱ:%lf\n\n"
        "cout������ʱ:%lf\n\n"
        "printf����ʱ:%lf\n\nprintf������ʱ:%lf\n\n"
        "�����ԣ���Ӣ������ϣ�%s������������\n\n",
        (cout_end - cout_start) / double(CLOCKS_PER_SEC),
        (cout_end - cout_start) / double(CLOCKS_PER_SEC) / 100000,
        (printf_end - printf_start) / double(CLOCKS_PER_SEC),
        (printf_end - printf_start) / double(CLOCKS_PER_SEC) / 100000,
        (cout_end - cout_start) / double(CLOCKS_PER_SEC) < (printf_end - printf_start) / double(CLOCKS_PER_SEC) ? "cout" : "printf");
    system("pause");
    return 0;
}