#include <stdio.h>

int main () {
    int x,y,z;
    int *px,*py,*pz;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&x,&y,&z);
    px=&x; py=&y; pz=&z;
    printf("x= %d, y= %d, z= %d \npx= %d, py= %d, pz= %d \n*px= %d, *py= %d, *pz= %d\n",x,y,z,px,py,pz,*px,*py,*pz);
    printf("Swapping pointers.. \n");
    int t=pz; pz=px; px=py; py=t;
    printf("x= %d, y= %d, z= %d \npx= %d, py= %d, pz= %d \n*px= %d, *py= %d, *pz= %d\n",x,y,z,px,py,pz,*px,*py,*pz);
    return 0;
}
