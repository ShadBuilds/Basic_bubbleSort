#include <stdio.h>
void bubble_sort(int a[],int n) {
     int temp,i,j;
    for (i=0;i<n;i++){
        for (j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                // swap
                temp = a[j+1];
              a[j+1] = a[j];
               a[j] = temp;
            }
        }
    } }
    void display_array ( int a[], int n){
        int i;
    for (i=0;i<n;i++){
    printf("%d " , a[i]);
    }
    }
void main()
{
    int N,i;
  //int a[6] = {23,34,2,19,99,1};
   printf("Enter The length of number ( counting kitte h ) ");
   scanf("%d", &N);
   int a[N];

 for (i=0;i<N;i++){
printf("Enter %d th number " , N-i);
scanf("%d", &a[i]);
 }
 bubble_sort(a,N);
 display_array(a,N);

}
