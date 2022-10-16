/*
   P7072 [CSP-J2020] 直播获奖
 * @Author: 乌搏猿
 * @Date: 2022-10-16 15:24:22
 * @LastEditTime: 2022-10-16 16:37:19
 * @State: AC
 * @FilePath: \code_for_luogu\luogu\P7072.cpp
 * @提示: Crtl + Win + I 添加文件头
 */
//注释为超时代码(每次输入都重新排序)
#include <cstdio>

int n, w, a[100005], s[605];

int max(int x, int y) { return x > y ? x : y; }
void tong_sort(int x, int y)
{
    int sum = 0;
    s[y]++;
    int idx = 0;
    for (int i = 600; i > -1; i--)
    {
        // if (s[i] != 0)
        // {
        //     for (int j = 0; j < s[i]; j++)
        //     {
        //         a[idx++] = i;
        //     }
        // }
        sum += s[i];
        if (sum >= max(1, x * w / 100))
        {
            printf("%d ", i);
            break;
        }
    }
}
int main()
{
    scanf("%d%d", &n, &w);
    for (int i = 0; i < n; i++)
    {
        int y;
        scanf("%d", &y);
        tong_sort(i + 1, y);
        // printf("%d ", a[max(1, int((i + 1) * w / 100)) - 1]);
    }
    printf("\n");
    system("pause");
    return 0;
}