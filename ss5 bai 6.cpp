#include<stdio.h>
int main(){
	int number1,number2,tong,hieu,tich,thuong,chon;
	printf("moi ban nhap vao 1 so nguyen");
	scanf("%d",&number1);
	printf("moi ban nhap vao 1 so nguyen");
	scanf("%d",&number2);
	do{
		printf("menu\n");
		printf("1 tong 2 so\n");
		printf("2 hieu 2 so\n");
		printf("3 tich 2 so\n");
		printf("4 thuong 2 so\n");
		printf("5 thoat\n");
		printf("moi ban lua chon ");
		scanf("%d",&chon);
		
		
		switch(chon){
			case 1 :
				tong = number1 +number2;
				printf("%d + %d = %d\n",number1,number2,tong);
	        break;
	        case 2 :
	        	hieu = number1 - number2;
	        	printf("%d - %d = %d\n",number1,number2,hieu);
	        break;
	        case 3 :
	        	tich = number1 * number2;
	        	printf("%d * %d = %d\n",number1,number2,tich);
	        break;
	        case 4 :
	        	thuong = number1 / number2;
	        	printf("%d / %d = %d\n",number1,number2,thuong);
	        break;
			case 5 :
	          	printf(" chuong trinh ket thuc");
         		default:
         			printf("lua chon khong hop le");
		}
	        	
	    
	    
   }while(chon !=5);
   
   return 0;
	        	
	        	
}

