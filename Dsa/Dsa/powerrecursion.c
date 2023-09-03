#include<stdio.h>

int power(int m,int n){
    if (n==0)
return 1;
else{
    return power(m,n-1)*m;

}
}
int main(){
    int r =power(2,9);
    printf("%d",r);
    return  0;

}
