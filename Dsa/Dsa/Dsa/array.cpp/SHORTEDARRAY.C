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

void InsertSort(struct List *list, int x){
 int i = list->length-1;
 
 if(list->length == list->size)
  return;
 while(i >= 0 && list->B[i] > x) {
  list->B[i+1] = list->B[i];
  i--;
 }
 list->B[i+1] = x;
 list->length++;
}

int isSorted(struct List list){
    int i;
    for(i=0;i<list.length-1;i++){
        if(list.B[i]>list.B[i+1])
            return 0;
    }
    return 1;
}

void arrangeNegPos(struct List *list){
 int i, j;
 i = 0;
 j = list->length - 1;
 while(i < j){
  while (list->B[i] < 0) i++;
  while (list->B[j] >= 0) j--;
  if (i < j) swap (&list->B[i], &list->B[j]);
 }
}

int main()
{
    struct List list1={{2,3,9,16,18,21,28,32,35},10,9};
    
    printf("Before Insert:");
    Display(list1);
    
    printf("\n\n");
    
    InsertSort(&list1, 25);
    
    printf("After Insert:");
    Display(list1);
    
    return 0;
}