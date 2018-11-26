#include<stdio.h>
#include<conio.h>
#include<Math.h>
void Nhapmang(int array[50],int n)
{
	for (int i=0; i<n; i++)
	{
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	 }
	 
}
void Inmang(int array[50],int n)
{
	for (int i=0;i<n;i++)
	{
		printf("array[%d]= %d\n",i,array[i]);
		
	}
}

int GiaiThua(int array[50],int n){
	int GT=1;
	for (int i=0;i<n;i++)
	{	for(int j=1;j<=array[i];j++)
		GT+=GT*j;}
	return GT;
}
int main ()
{
 	int array[50], n;
	printf("Nhap so phan tu trong mang : \n");
	scanf("%d",&n);
	Nhapmang(array, n);
	Inmang(array, n);
	printf("Tong Giai Thua Ban Nhap la: %d",GiaiThua(array,n));  
}
