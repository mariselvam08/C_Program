#include<stdio.h>
#include<conio.h>

void main(){
int i,j,r,k;
clrscr();
printf("Enter number");
scanf("%d",&r);
for(i=1;i<=r;i++){
for(j=i;j<=r;j++){
printf(" ");
}
for(k=1;k<=i;k++){
printf("*");
}
printf("\n");
}
getch();
}
