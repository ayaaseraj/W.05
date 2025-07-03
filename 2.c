#include <stdio.h>

int add(int *a,int *b){
    int sum;
sum=*a+*b;
return sum;
}

int main () {
    int x,y,sum;
    printf("Enter two variables: ");
    scanf("%d%d",&x,&y);
    sum=add(&x,&y);
    printf("%d",sum);
    return 0;
}
