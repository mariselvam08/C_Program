#include<stdio.h>
#include<conio.h>
void main(){
int i,j,s,n;
clrscr();
printf("Enter the number");
scanf("%d",&n);
for(i=1;i<n-1;i++){
for(s=2;s<=n-i;s++){
printf(" ");
}
for(j=2;j<=2*i;j++){
if(j==2||j==2*i)
printf("*");
else
printf(" ");
}
printf("\n");
}
for(i=0;i<n-1;i++)
printf("* ");
getch();
}
