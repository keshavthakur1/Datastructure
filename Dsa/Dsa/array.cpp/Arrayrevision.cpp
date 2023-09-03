#include<iostream>
#include<stdio.h> // Add header file of c program
using namespace std;
int main(){
int i;

int A[5]={1,2,3,4,5};
//Method -01
/*for(i=0;i<5;i++)//we can also acess array with of for loop 
{  

   cout<<A[i]<<endl;
}
//cout<<sizeof(A)<<endl;
//printf("%d\n",A[2]); //inside c++ program we can also run c program 
*/
//Method - 02
for(int x:A) 
/*Here is a breakdown of how the code works:
"for" is a keyword in C++ used to create loops.
"int x:A" creates a variable "x" of type int that is used to store the current element being iterated over, and "A" is the name of the container being iterated over.
The colon (:) symbol is used to specify the range that will be iterated over.
The loop body, enclosed in curly braces ({}) consists of a single statement: "cout<<x<<endl;", which prints the value of "x" to the console followed by a newline character.
Overall, this loop iterates over each element in the container "A", assigning each element in turn to the variable "x", and printing the value of "x" to the console followed by a newline character.*/
{
    cout<<x<<endl;
}




return 0;
}

