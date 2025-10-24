#include<stdio.h>
int main(){
    char n[6];
   
    for(int i=0; i<6;i++){
        scanf("%c" , &n[i]);
    }
    for(int i=0; i<6;i++){
        printf("%c\n" , n[i]);
    }
    return 0;
}