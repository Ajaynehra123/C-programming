//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>
int main(){
   int a,b,c;
   double x,y,z;
   printf("enter the value of a,b,c:");
   scanf("%d %d %d",&a,&b,&c);
   x=(b*b)-4*a*c;
   if(x>0){
    y=(-b+sqrt(x))/(2.0*a);
    z=(-b-sqrt(x))/(2.0*a);
    printf("Roots are real and different: %g, %g", y, z);
    }
    else if(x==0){
        y=(-b)/(2.0*a);
        printf("Roots are real and same: %g", y);
    }
    else{
        printf("Roots are complex");
    }
    return 0;
   } 
