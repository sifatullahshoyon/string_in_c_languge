#include<stdio.h>
int main(){
    char s[100001];

    scanf("%s" , &s);

    for(int i=0; i<s[i]; i++){
    //    Remove , & add space
        if(s[i]== ','){
            s[i] = ' ';
            printf("%c",s[i]);
        }

        if(s[i] >= 97 && s[i] <= 122){
            s[i] -= 32; // convert lowercase to uppercase
            printf("%c" , s[i]);
        }else if(s[i] >= 65 && s[i] <= 90){
            s[i] += 32; // convert uppercase to  lowercase
            printf("%c" , s[i]);
        }
               
    }
    
    return 0;
}