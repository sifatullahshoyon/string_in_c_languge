#include<stdio.h>
int main(){
    char s[100001];
    scanf("%s" , &s);
    for(int i=0; i<s[i]; i++){
        // printf("%c" , s[i]);
        // !==============================

          if(s[i]== ','){
            s[i] = ' ';
            printf("%c",s[i]);
        }


        if(s[i] >= 97 && s[i] <= 122){
            s[i] -= 32;
            printf("%c" , s[i]);
        }else if(s[i] >= 65 && s[i] <= 90){
            s[i] += 32;
            printf("%c" , s[i]);
        }
        // !=============================

        // if(s[i]== ','){
        //     s[i] = ' ';
        //     // printf("%c",s[i]);
        //     if(s[i] >= 97 && s[i] <= 122){
        //         s[i] -= 32;
        //         printf("%c" , s[i]);
        //     }else if(s[i] >= 65 && s[i] <= 90){
        //         s[i] += 32;
        //         printf("%c" , s[i]);
        //     }
        // }

        //   if(s[i] >= 97 && s[i] <= 122){
        //     s[i] -= 32;
        //     printf("%c" , s[i]);
        // }else if(s[i] >= 65 && s[i] <= 90){
        //     s[i] += 32;
        //     printf("%c" , s[i]);
        // }

        // !==============================
        // if(s[i]== ','){
        //     s[i] = ' ';
        //     printf("%c",s[i]);
        // }
    }
    // printf("%s" , s);
    return 0;
}