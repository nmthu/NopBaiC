#include<stdio.h>
#include<string.h>
int main(){
	char chuoi[100];
	int dem=0;
	printf("nhap noi dung cho chuoi");
	gets(chuoi);
	for(int i=0;i<strlen(chuoi);i++){
		if(chuoi[i]=='u'||chuoi[i]=='a'||chuoi[i]=='o'||chuoi[i]=='e'||chuoi[i]=='i'){
			dem++;
		}
	}
	printf(" phu am cua chuoi %d \n",dem);
	
}
