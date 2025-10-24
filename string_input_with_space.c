#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    // scanf("%s" , &str);
    // gets(str);
    // fgets(str , size , stdin);
    fgets(str , 19 , stdin);
    printf("%s" , str);
    return 0;
}