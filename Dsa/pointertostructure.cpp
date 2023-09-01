//pointer to structure 
#include<iostream>
using namespace std;



    struct rectangle
    {
        int length;
        int breath;

    };
    
    
    int main(){
      rectangle r{10,5};
      cout<<r.length<<endl;
      cout<<r.breath<<endl;
        
       rectangle *p=&r
       cout<<p->32';
        return 0;
    }
