#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

//int main(){

    /*int a=10;
    int *p;
     p=&a;

    //cout<<a;
printf("%d",a);
printf("%d",p);// output will be address of a 
printf("%d",*p);// output will be address of a 
return 0;
}
*/
//create an array of size 0f 5 in heap memeory 
/*int *p;

int A[5]={22,3,4,5,6};

p=(int*)malloc(20);//FOR C++ p=new int[5];
for(int i=0;i<5;i++){
cout<<A[i]<<endl;

//cout<<p<<endl;
}
delete[]p;//when we are dynamically allotlocated memory then u must realize the memory ,delete is used in c++
free(p);//free is used in c 
return 0;
}
*/
struct Rectangle
{
    /* data */
    int length ;
    int breath;

};
int main()
{
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

cout<<sizeof(p1)<<endl;
cout<<sizeof(p2)<<endl;
cout<<sizeof(p3)<<endl;
cout<<sizeof(p4)<<endl;
cout<<sizeof(p5)<<endl;

    return 0;
}
