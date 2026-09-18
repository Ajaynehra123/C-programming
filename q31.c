//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>
int main(){
    int a,b=0,c,d=1;
    printf("enter an integer:");
    scanf("%d", &a);
    while (a!=0){
        c=a%2;
        b=b+c*d;
        d=d*10;
        a/=2;
    }
    printf("binar number is :%d",b);
    return 0;
}