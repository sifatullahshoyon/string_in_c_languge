#include<stdio.h>
#include<string.h>
int main(){
    char s[1000001];
    scanf("%s" , &s);
    // printf("%s" , s);
    int length = 0;
    for(int i = 0; s[i] != '\0' ;i++){
        length++;
    }
    // printf("%d" , length);
    int count = 0;
    for(int i =0; i < length; i++){
        // printf("%d\n" , s[i]);
        count += s[i]-'0';
    }
    printf("%d" , count);
    return 0;
}