#include<iostream>
using namespace std;
//call by value
/*int add(int a,int b){
    int c;
    c =a+b;
    return (c);
}



int main(){
    int x,y,z;
    x=y=10;
    z=add(x,y);
    cout<<z<<endl;
    return 0;



}
*/
//call by address 
/*void swap(int *x,int *y)
{
    int temp;
    temp =*x;
    *x=*y;
    *y=temp;
}
int main()
{
int num1=10,num2=14;
swap(&num1,&num2);
cout<<"First number"<<num1<<endl;
cout<<"Second  number"<<num2<<endl;

return 0;

}
*/

void swap(int &x,int &y)
{
    int temp;
    temp =x;
    x=y;
    y=temp;
}
int main()
{
int num1=10,num2=14;
swap(num1,num2);
cout<<"First number"<<num1<<endl;
cout<<"Second  number"<<num2<<endl;

return 0;

}
