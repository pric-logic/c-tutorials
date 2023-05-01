#include<stdio.h>

int main() {
    int a,b,c;
    a=4;
    b=c=1;
    int sum=a+b+c;
    int difference=a-b-c;
    int multiply=a*b*c;
    int divide=a/(b+c);
    int remainder=(a+b)%(b+c);
    int nremainder=-(a+b)%(b+c);
    printf("%d\n",sum);
    printf("%d\n",difference);
    printf("%d\n",multiply);
    printf("%d\n",divide);
    printf("%d\n",remainder);
    printf("%d\n",nremainder);
    //operator precedence and associativity
    printf("%d\n",5*2-3*2);
    printf("%d\n",5*2/2*3);
    // relational operators
    printf("%d\n",a<=12);
    printf("%d\n",a>=b);
    printf("%d\n",a==b);
    printf("%d\n",c!=a);
    



    return 0;


}