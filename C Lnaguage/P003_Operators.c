#include<stdio.h>

void main(){
    //1.Arithmetic -> +,-,*,/,%
    int i= 12;
    int j =2;
    int a= i+j;
    printf("a = %d\n",a);
    int b = i-j;
    printf("b = %d\n",b);
    int c = i*j;
    printf("c= %d\n",c);
    int d = i/j;
    printf("d = %d\n",d);
    int e = i%j;
    printf("e = %d",e);

    //2.Assignment operator -> =,+=,-=,*=,/=
    int p = 1;
    p += 10; //p = p+10
    printf(" p = %d\n",p); //11
    p -= 2; //p = p-2
    printf("p = %d\n",p);
    p *= 2; //p = p*2
    printf("p = %d\n",p);
    p /= 2; //p = p / 2
    printf("p = %d\n",p); //9
    int q = 13;
    p += q; //p = p+q

    //3.relational operator -> >,>=,<,<=,==,!=

    //4.unary -> ++,--

    //5.logical -> &&, || ,!

    //6.turnary ->

    //7.bitwise

    //8.shift operator
}