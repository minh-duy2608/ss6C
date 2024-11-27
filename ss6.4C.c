#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c, x1, x2, delta;
	printf("nhap so a, b, c:");
	scanf("%f %f %f", &a, &b, &c);

	
	if(a==0){
		printf("Nhap so a khac 0");
	}else{
		if(delta>0){
			x1 = (-b+sqrt(delta))/(2*a);
			x2 = (-b-sqrt(delta))/(2*a);
			printf("Phuong trinh co nghiem phan biet:x1=%.2f va x2=%.2f", x1, x2);
			
		}else if(delta==0){
			x1 = -b/(2*a);
			printf("Phuong trinh co 2 nghiem phan biet:x1=x2=%.2f",x1);
		
		}else{
				printf("Phuong trinh vo nghiem");
		}
			
	}
}	
