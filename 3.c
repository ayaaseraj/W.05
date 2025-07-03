#include <stdio.h>

void multiply(int a[5],int b[5],int res[5]){
for(int i=0;i<5;i++)
    res[i]=a[i]*b[i];
}

int main () {
    int x[5],y[5],res[5];
    printf("Enter first array: ");
    for (int i=0;i<5;i++)
    scanf("%d",&x[i]);
    printf("Enter second array: ");
    for (int i=0;i<5;i++)
    scanf("%d",&y[i]);
    multiply(&x,&y,&res);
    for (int i=0;i<5;i++)
        printf("%d  ",res[i]);
    return 0;
}
