#include<stdio.h>
#include<conio.h>

void main(){
int i,j,r;
clrscr();
printf("Enter number");
scanf("%d",&r);
for(i=0;i<=r-1;i++){
for(j=0;j<=i;j++){
printf("* \t");
}
printf("\n");
}
getch();
}
