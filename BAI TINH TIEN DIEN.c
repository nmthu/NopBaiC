 #include<stdio.h>
#include<conio.h>

main (){
	float somoi, socu, tiendien, tieuthu;
	printf(" Nhap so moi");
	scanf("%f", & somoi);
	printf(" Nhap so cu ");
	scanf("%f", & socu);
	if (somoi>socu){
		tieuthu = somoi - socu;
	if (tieuthu<50) {
		tiendien = 1500*tieuthu;
	printf("Tien la %f",tiendien);
	}
    else if(tieuthu>=50 && tieuthu<=100){
     tiendien = 49*1500+(tieuthu-49)*2000;
    	printf("Tiendien la %f",tiendien);
	
	}
	
    
	else {
		tiendien = 49*1500+51*2000+(tieuthu-100)*3000;
    	printf("Tien dien la %f",tiendien);
	    }
}
}
