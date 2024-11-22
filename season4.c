#include <stdio.h>

int main(){
	//Bai tap 1
	int num;
	printf("Nhap vao mot so nguyen: ");
	scanf("%d",&num);
	if(num>0){
		printf("%d la so duong\n",num);
	}else{
		printf("%d la so am\n",num);
	}
	
	//Bai tap 2
	int numberTwo;
	printf("nhap vao mot so nguyen: ");
	scanf("%d",&numberTwo);
	if(numberTwo%2==0){
		printf("%d la so chan\n",numberTwo);
	}else{
		printf("%d la so le\n",numberTwo);
	}
	
	//Bai tap 3
	int numberThree;
	printf("nhap vao mot so nguyen: ");
	scanf("%d",&numberThree);
	if(numberThree%3==0 && numberThree%5==0){
		printf("%d chia het cho 3 va 5\n",numberThree);
	}
	else if(numberThree%5==0){
		printf("%d chia het cho 5\n",numberThree);
	}
	else{
		printf("%d chia het cho 3\n",numberThree);
	}
	
	//Bai tap 4
	int month;
	printf("Nhap vao so thang (1-12): ");
    scanf("%d", &month);
    switch (month) {
        case 1:  
        case 3:  
        case 5:  
        case 7:  
        case 8:  
        case 10: 
        case 12: 
            printf("Thang %d co 31 ngay.\n", month);
            break;
        case 4:  
        case 6:  
        case 9:  
        case 11: 
            printf("Thang %d co 30 ngay.\n", month);
            break;
        case 2:  
            printf("Thang 2 co 28 hoac 29 ngay (tuy nam nhuan).\n");
            break;
        default:  
            printf("So thang khong hop le.\n");
    }
    
    //Bai tap 5
    int num1, num2, num3;
    printf("Nhap vao 3 so nguyen:\n");
    printf("So thu nhat: ");
    scanf("%d", &num1);
    printf("So thu hai: ");
    scanf("%d", &num2);
    printf("So thu ba: ");
    scanf("%d", &num3);
    if ((num3 > num2 && num3 < num1) || (num3 < num2 && num3 > num1)) {
        printf("So %d nam trong khoang giua %d va %d.\n", num3, num1, num2);
    } else {
        printf("So %d khong nam trong khoang giua %d va %d.\n", num3, num1, num2);
    }
    
    //Bai tap 6
    float old,new,use;
    printf("Nhap chi so cong to dien dau thang:\n");
    scanf("%f",&old);
    printf("Nhap chi so cong to dien cuoi thang:\n");
    scanf("%f",&new);
    use=old-new;
    if(0<=use && use<50){
    	printf("tien tieu thu cua thang la 10.000vnd\n");
    }else if(50<=use && use<100){
    	printf("tien tieu thu cua thang la 15.000vnd\n");
    }else if(100<=use && use<150){
    	printf("tien tieu thu cua thang la 20.000vnd\n");
	}else if(150<=use && use<200){
		printf("tien tieu thu cua thang la 25.000vnd\n");
	}else{
		printf("tien tieu thu cua thang la 30.000vnd\n");
	}

    //Bai tap 7
    int year;
    printf("Nhap vao mot so nam: ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Nam %d la nam nhuan.\n", year);
    } else {
        printf("Nam %d khong la nam nhuan.\n", year);
    }
    
    //Bai tap 8
    float a, b, c;
    printf("Nhap vao 3 canh cua tam giac:\n");
    printf("Canh a: ");
    scanf("%f", &a);
    printf("Canh b: ");
    scanf("%f", &b);
    printf("Canh c: ");
    scanf("%f", &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("La 3 canh tam giac.\n");
    } else {
        printf("Khong phai 3 canh tam giac.\n");
    }
    
    //Bai tap 10
    int a2, b2, c2;
    printf("Nhap vao 3 so nguyen:\n");
    printf("So a: ");
    scanf("%d", &a2);
    printf("So b: ");
    scanf("%d", &b2);
    printf("So c: ");
    scanf("%d", &c2);
    if (a2 > b2) {
        int temp = a2;
        a2 = b2;
        b2 = temp;
    }
    if (a2 > c2) {
        int temp = a2;
        a2 = c2;
        c2 = temp;
    }
    if (b2 > c2) {
        int temp = b2;
        b2 = c2;
        c2 = temp;
    }
    printf("Cac so theo thu tu tu nhon den lon: %d, %d, %d\n", a2, b2, c2);


	return 0;
}

