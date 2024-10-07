//concatenando strings
#include<stdio.h>
int main(){
    char str1[100],str2[100];
    int i=0,n=0;
    printf("String 1: ");
    scanf("%s",&str1);
    fflush(stdin);
    printf("String 2: ");
    scanf("%s",&str2);
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[n]!='\0'){
        str1[i]=str2[n];
        i++;
        n++;
    }
    str1[i]=str2[n];
    printf("Strings concatenada:%s",str1);
    return 0;
}
