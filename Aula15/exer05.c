//concatenação strings
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    printf("String 1: ");
    gets(str1);
    printf("String 2: ");
    gets(str2);
    printf("%s",strcat(str1,str2));
    return 0;
}
