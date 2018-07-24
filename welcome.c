#include<stdio.h>
#include<string.h>
int sum(int,int);
int main()
{
int a,b;
printf("Enter the number a ");
scanf("%d",&a);
printf("\Enter the numbr b ");
scanf("%d",&b);
printf("\nThe sum of the two numbres is:%d",sum(a,b));
return 0;
}
int sum(int x, int y)
{
	int z;
	z=x+y;
	return z;
}

