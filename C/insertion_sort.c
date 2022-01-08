#include <stdio.h>
#include <stdlib.h>


void insertion_sort(int** arr,int n){
    int j;
    int i;
    for(i=1;i<n;i++){
       int  key=*(*arr+i);
        j=i-1;
        while(j>=0 && *(*arr+j)>key){
           *(*arr+j+1)=*(*arr+j);
            j=j-1;
        }
        *(*arr+j+1)=key;
    }
    
}

void print_array(int **arr,int n){

    for(int i=0;i<n;i++){
       printf("%d \n ",*(*arr+i));
    }
}
int main()
{
    int n;
    int i;
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    for (i=0;i<n;i++){
        scanf("%d",(arr+i));
    }
    insertion_sort(&arr,n);
    print_array(&arr,n);
    free (arr);
    return 0;
}

