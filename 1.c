#include <stdio.h>

int main () {
    int n=10;
    int *p=&n;
    *p=20;
    printf("%d",n);
    return 0;
}

