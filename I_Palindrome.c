#include<stdio.h>
#include<string.h>
int main(){

    char s[1001];
    scanf("%s" , s); 

    int i = 0;
    int j = strlen(s)-1;

    while(i < j){
        int tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;

        i++;
        j--;
    }

    if (s[i] >= 65 && s[i] <= 90)
    {
        /* code */
         s[i] += 32;
    }
    

    if(s[i] == s[j]){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}