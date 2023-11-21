#include<stdio.h>
int main(){
	int n, m;
	printf("Nhap so dong cua mang: \n");
	scanf("%d", &n);
	printf("Nhap so cot cua mang: \n");
	scanf("%d", &m);
	int number[n][m];
	do{
		printf("*****************MENU**************");
		printf("1. Nhap gia tri cac phan tu cua mang: \n");
		printf("2. In gia tri cac phan tu trong mang theo ma tran: \n");
		printf("3. Tinh so luong cac phan tu le chia het cho 5 trong mang: \n");
		printf("4. In ra cac phan tu co gia tri lon nhat, nho nhat nam tren duong bien, duong cheo phu: \n");
		printf("5. Su dung thuat toan sap xep lua chon sap xep các phan tu giam dan theo dong cua mang: \n");
		printf("6. Tinh tong cac phan tu la so nguyên to trong mang: \n");
		printf("7. Su dung thuat toan chen sap xep cac phan tu tren duong cheo phu cua mang tang dan: \n");
		printf("8. Nhap gia tri mot mang 1 chieu gom n phan tu và chi so cot muon chen vao mang, thuc hien chen vao mang 2 chieu: \n");
		printf("9. Thoat: \n");
		scanf(" %d ", &choice);
		switch(choice){
			case 1:
				for (int i=0; i++){
					printf("Nhap gia tri cac phan tu: \n");
					scanf("%d", &array);
				}
				break;
			case 2:
			for (int i=0; i<n; i++){
				for (int j=0; j<m; j++){
					printf("%d\t", numbers[i][j]);
				    }
				    printf("\n");
			   }
			   break;
			case 3:
				for (int i=0; i<n; i++){
					for (int j=0; j<m; j++){
						if (numbers[i][j] % 5 = 0){
							sum+=numbers[i][j];
							printf("numbers[%d][%d]=%d\n",i,j,numbers[i][j]);
						}
					}
					printf("Cac phan tu le chia het cho 5 la:\n");
				}
				break;
			case 4:
			 for (int i=0; i<size; i++){
			 	if (border[i] > max; secondary diagonal[i] > max){
			 		max = border[i]; max = secondary diagonal[i] 
				   }
				   else if (border[i]<min; secondary diagonal[i]<min){
				 	min = border[i]; min = secondary diagonal[i] 
				   } 
				   printf("n gia tri lon nhat tren duong bien, duong cheo phu la: %d\n gia tri nho nhat tren duong bien, duong cheo phu la: %d\n");
			   }
			   break;
			case 5:
				break;
			case 6:
			for (int i=0; i<array[i]; i++){
				for (int j=2; j<array[i]; j++){
					if(array[i] % j == 0){
						flag = 1;
						break; 
					} 
				}
				if (flag == 0){
					printf("%d\n", array[i]);
					sum+=array[i]; 
				    } 
			   }
			    printf("Tong cac phan tu so nguyen to la:%d\n", sum);	 
			   	break;
			case 7:
				break;
			case 8:
				break;
			case 9:
				printf("Thoat");
				break;    
		}
	}
}
