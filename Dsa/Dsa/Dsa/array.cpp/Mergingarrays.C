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

struct List* Merge(struct List *list1, struct List *list2){
 int i,j,k;
  i = j = k = 0;
 
  struct List *list3=(struct List *)malloc(sizeof(struct List));
 
  while(i < list1->length && j < list2->length){
   if(list1->B[i] < list2->B[j])
    list3->B[k++] = list1->B[i++];
   else
    list3->B[k++] = list2->B[j++];
  }
  for(; i < list1->length; i++)
  list3->B[k++] = list1->B[i];
  for(; j < list2->length; j++)
   list3->B[k++] = list2->B[j];
  list3->length = list1->length + list2->length;
  list3->size = 10;
 
 return list3;
}

int main(){
  struct List list1 = {{3, 8,16,20,25},10,5}; 
        struct List list2 = {{4,10,12,22,23},10,5}; 
  struct List *list3; 
  
  printf("First Array:");
  Display(list1);
  
  printf("\n\n");
  
  printf("Second Array:");
  Display(list2);
  
  printf("\n\nArray after Merging:"); 
        list3 = Merge(&list1,&list2); 
        Display(*list3);
 
        return 0; 
}