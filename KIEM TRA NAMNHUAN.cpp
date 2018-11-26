#incude<stdio.h>
main(){
	int nam;
	printf("mhap vao nam");
	scanf("%d",&nam);
	int kiemtra=((nam%4==0)&&(nam%100!=0)||(nam%400));
	printf("%d co phai la nam nhuan hay khong ",nam,kiemtra);
}
