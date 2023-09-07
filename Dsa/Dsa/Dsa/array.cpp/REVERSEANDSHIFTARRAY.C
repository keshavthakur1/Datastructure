#include<stdio.h>
#include<stdlib.h>
struct List{
    int B[15];
    int size;
    int length;
};

void Display(struct List list){
    int i;
    printf("\nElements are\n");
    for(i=0;i<list.length;i++)
        printf("%d ",list.B[i]);
 }

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

//Method 2 

void Reverse(struct List *list){
    int *C;
    int i,j;
 
    C=(int *)malloc(list->length*sizeof(int));
    for(i=list->length-1,j=0;i>=0;i--,j++)
        C[j]=list->B[i];  //COPY THE ELEMENT OF ELEMENT OF ARRAY OF A TO ARRAY B 
    for(i=0;i<list->length;i++)
        list->B[i]=C[i];
}
 //METHOD USING SWapping 
void Reverse2(struct List *list){
    int i,j;
    for(i=0,j=list->length-1;i<j;i++,j--){
        swap(&list->B[i],&list->B[j]);
    }
}

int main()
{
    struct List list1={{2,3,9,16,18,21,28,32,35},10,9};
    
    printf("Before Reverse:");
    Display(list1);
    
    printf("\n\n");
    
    Reverse(&list1);
    
    printf("After Reverse:");
    Display(list1);
    
    return 0;
}