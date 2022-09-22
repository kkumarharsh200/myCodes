#include<stdio.h>

struct array{
    int a[20];
    int size;
    int len;
};


void display(struct array arr){
    int i;
    for(i=0;i<arr.len;i++){
        printf("%d ",arr.a[i]);
    }
} 


//This is modifing the array so use call by address.  
void append(struct array *arr, int x){  
    if(arr->len<arr->size){ 
        arr->a[arr->len] = x;                   
        arr->len++;
    }
}
//(*arr).len =>in this we first enter in arr structre through address then visiting the len with (.)operater
// above command can be written as arr->len

void insert(struct array *arr,int index, int value){
    int i;
    if (index<=arr->len){
        for(i=arr->len;i >index;i--){
            arr->a[i] = arr->a[i-1];
        }
        arr->a[index] = value;
        arr->len++;
    }
}


int main(){
    struct array arr;
    arr.size = 20;
    printf("Enter the length of Array: ");
    scanf("%d",&arr.len);
    printf("Enter the element of array:\n");
    int i;
    for(i=0;i<arr.len;i++){
        scanf("%d",&arr.a[i]);
    }
    display(arr);
    int x;
    printf("\nEnter the number to append: ");
    scanf("%d",&x);
    append(&arr,x);
    printf("Appended Array: ");
    display(arr);
    int a,b;
    printf("\nEnter index and value to be Inserted: ");
    scanf("%d %d",&a,&b);
    insert(&arr,a,b);
    printf("Inserted array: ");
    display(arr);
    return 0;
}