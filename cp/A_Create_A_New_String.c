#include<stdio.h>
#include<string.h>
int main(){
    char s[1001];
    scanf("%s" , &s);
    // printf("%s " , s);
    char t[1001];
    scanf("%s" , &t);
    int s_length = strlen(s);
    int t_length = strlen(t);
    printf("%d %d\n" , s_length , t_length);
    printf("%s %s" , s, t);
    return 0;
}