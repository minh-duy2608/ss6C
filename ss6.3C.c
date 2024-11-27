#include<stdio.h>

int main(){
	int i = 5555;
	int n;
	
	do{
		printf("Ban hay doan mat khau gom 4 chu so: \n");
		scanf("%d",&n);
		
		if(n<1000 || n>9999){
			printf("Khong hop le\n");
		}
		if(n==i){
		printf("Ban da doan dung mat khau\n");
		break;
		}else{
			printf("Ban doan sai roi, hay doan lai nhe\n");
		}
	} 
	while(n<1000 || n>9999);

}

