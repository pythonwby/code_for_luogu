#include <cstdio>
#include <cstring>
using namespace std;

int n;
char a[35];

int main(){
    scanf("%s",a);
    if(a[strlen(a)-1]=='g'&&a[strlen(a)-2]=='n'&&a[strlen(a)-3]=='i') n=strlen(a)-3;
    if(a[strlen(a)-1]=='y'&&a[strlen(a)-2]=='l') n=strlen(a)-2;
    if(a[strlen(a)-1]=='r'&&a[strlen(a)-2]=='e') n=strlen(a)-2;
    for(int i=0;i<n;i++) printf("%c",a[i]);
    printf("\n");
    return 0;
}