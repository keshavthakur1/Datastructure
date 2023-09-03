#include<stdio.h>

//Basic about recusive function 
void fun(int n){
    if (n>0)
    {
      printf("%d",n);  // fun(n-1); 
    
        fun(n-1);  //   printf("%d",n); both are different thing in this case first the function are called the print the value 
    }
}

int main(){
int x=3;
fun(x);


    return 0;

}