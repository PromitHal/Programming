#include <stdio.h>
#include <stdlib.h>
#include <time.h>       // for clock_t, clock(), CLOCKS_PER_SEC
#include <unistd.h>     // for sleep()

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
    int i;
    for( i=0;i<n;i++){
       printf("\n");
       printf("%d ",*(*arr+i));
    }
}
int main()
{
	// to store the execution time of code
    double time_spent = 0.0;
      clock_t begin = clock();
    int n;
    int i;
    scanf("%d",&n);
    int* arr=(int*)malloc(n*sizeof(int));
    for (i=0;i<n;i++){
        scanf("%d",(arr+i));
    }
    insertion_sort(&arr,n);
    printf("The sorted array is: ");
    print_array(&arr,n);
    free (arr);
    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nThe elapsed time is %f seconds", time_spent);
    
    return 0;
}
