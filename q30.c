//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int main(){
    int n,b=0,c;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n!=0){
        c=n%10;
        b=b*10+c;
        n/=10;
    }
    printf("reversed number is :%d",b);
    return 0;    
}