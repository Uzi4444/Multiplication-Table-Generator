#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int n,m;
printf("enter number :");
scanf("%d" , &n);
printf("end table at :");
scanf("%d" , &m);
printf("Table of %d \n" , n);
for (int i = 0; i <=m; i++)
{
    printf("%d X %d = %d \n" ,n,i, n*i);
}
printf("shown table is till %d \n" , m);
getch();
return 0;
}