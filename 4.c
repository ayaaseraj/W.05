#include <stdio.h>

void bubble(int x[],int n){
for(int i=0;i<n-1;i++)
    {
       for(int j=0;j<n-i-1;j++)
       {
           if(x[j]>x[j+1])
           {
               int t=x[j];
               x[j]=x[j+1];
               x[j+1]=t;
           }
       }
    }
}

int main () {
    int n;
    printf("Enter number of elements of array: ");
    scanf("%d",&n);
    int x[n];
    printf("Enter array: ");
    for (int i=0;i<n;i++)
    scanf("%d",&x[i]);
    bubble(&x,n);
    for (int i=0;i<n;i++)
        printf("%d  ",x[i]);
    return 0;
}
