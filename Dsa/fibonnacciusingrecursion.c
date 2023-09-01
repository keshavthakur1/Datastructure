#include<stdio.h>

// int fib(int n)
// {
//     int t0 = 0,t1=1,s,i;
//     if(n<=1)return n;
//     for (i=2;i<=n;i++)
//     {
//         s=t0+t1;
//         t0=t1;
//         t1=s;
//     }
//     return s;

// }
// int rfib(int n)
// {
//     if(n<=1)return n;
//     return rfib(n-2)+ rfib(n-1);
// }
// int main (){
//     printf("%d\n",fib(10));
//     return 0;

// }


#include <stdio.h>

int rfib(int n) {
    if (n <= 1)
        return n;
    return rfib(n - 2) + rfib(n - 1);
}
int F[10];

int main() {
    int i;
    for(i=0;i<10;i++)
    F[i]=-1;
    printf("%d\n", rfib(10));
    return 0;
}