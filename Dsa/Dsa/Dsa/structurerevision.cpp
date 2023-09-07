#include<iostream>
using namespace std;

struct Rectangle

{
    /* data */
    int length ;
    int breath;

};

int main(){
    struct Rectangle r1 ={10,5};
 
 printf("%d",sizeof(r1));

r1.length =12;
r1.breath=33;

    cout<<"AreaofRectangle"<<r1.length*r1.breath<<endl;
return 0;
}
