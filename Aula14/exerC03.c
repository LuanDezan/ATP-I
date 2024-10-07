//ler uma string e apresentar quantas letras 'a', 'e','i','o','u' estão nela
#include<stdio.h>
int main(){
    char str[100];
    int n=0,a=0,e=0,i=0,o=0,u=0;
    printf("Digite sua string: ");
    fgets(str,100,stdin);
    while(str[n]!='\0'){
        if(str[n]=='a'){
            a++;
        }else if(str[n]=='e'){
            e++;
        }else if(str[n]=='i'){
            i++;
        }else if(str[n]=='o'){
            o++;
        }else if(str[n]=='u'){
            u++;
        }
    n++;
    }
    printf("'a': %d\n'e': %d\n'i': %d\n'o': %d\n'u': %d\n",a,e,i,o,u);
    return 0;
}
