//Write a C program to print the following characters in a reverse way
#include<stdio.h>
int main(){
    char string[]="blah";
    int n;
    printf("enter string\n");
    // scanf("%c",&string);
    n=leng(string);
    for (int i=0;i<=n;i++){
        printf("%c",string[i]);
        printf("%d",n);}

    return 0;
}