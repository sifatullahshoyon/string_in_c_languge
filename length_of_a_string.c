#include<stdio.h>
#include<string.h>
int main(){
    char str[101];
    scanf("%s" , &str);
    // printf("%s" , str);

    // int count = 0;
    // for(int i = 0; str[i] != '\0' ; i++){
    //     count++;
    // }

    // printf("%d" , count);

    // TODO: Short version
    int str_size = strlen(str);
    printf("%d" , str_size);

    return 0;
}