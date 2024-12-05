#include<stdio.h>
int main(){
	int n, choice, max, secondMax, pos, value, temp, check;
	int arr[n];
	printf("\tMENU\t\n");
	printf("1.Nhap so phan tu va gia tri cho mang.\n");
	printf("2.In ra gia tri cac phan tu trong mang.\n");
	printf("3.Dem so luong cac so hoan hao co trong mang.\n");
	printf("4.Tim gia tri lon thu 2 trong mang.\n");
	printf("5.Them mot phan tu vao vi tri nguoi dung chon.\n");
	printf("6.Xoa phan tu tai mot vi tri cu the.\n");
	printf("7.Sap xep mang theo thu tu tang dan.\n");
	printf("8.Tim kiem phan tu trong mang.\n");
	printf("9.Sap xep mang theo so chan dung truoc, sp le dung sau.\n");
	printf("10.Dao nguoc thu tu cua cac phan tu co trong mang.\n");
	printf("11.Thoat\n");
	do{
		printf("Moi ban nhap lua chon: ");
		scanf("%d", &choice);
		switch(choice){
			case 1: //Nhap so phan tu va gia tri cho mang
				printf("So phan tu ban muon: ");
				scanf("%d", &n);
				if(n<=0){
					printf("Moi ban nhap lai mot so nguyen duong: ");
					scanf("%d", &n);
				}
				for(int i = 1; i <= n; i++){
					printf("Gia tri cua phan tu arr[%d] ban muon: ",i-1);
					scanf("%d", &arr[i-1]);	
				}
			break;
			case 2: //In ra gia tri cac phan tu trong mang
				printf("Cac phan tu trong mang la: \n");
				for(int i = 0; i < n; i++){
					printf("arr[%d]= %d\n", i, arr[i]);
				}
			break;
			case 3:
				
			break;
			case 4:
				max=0;
				secondMax=0;
				for(int i=0;i<n;i++){
					if(arr[i]>max){
						max=arr[i];
					}
				}
				for(int i=0;i<n;i++){
					if(arr[i]>secondMax&&arr[i]<max){
						secondMax=arr[i];
					}
				}
				printf("So lon thu 2 trong mang la: %d\n", secondMax);
			break;
			case 5:
				printf("Moi ban nhap vao so muon them: ");
				scanf("%d", &value);
				printf("Vi tri ban muon them: ");
				scanf("%d", &pos);
				if(0>=pos||pos>=n){
					printf("Nhap lai vi tri hop le");
					scanf("%d", &pos);
				}
				for(int i=n;i>pos;i--){
					arr[i+1]=arr[i];
				}
				arr[pos]=value;
				n++;
				printf("Mang sau khi them la: ");
				for(int i=0;i<n;i++){
					printf("%d\n", arr[i]);	
				}
			break;
			case 8:
				printf("Phan tu ban muon tim: ");
				scanf("%d", &value);
				check=0;
				for (int i=0; i<n; i++){
					if(arr[i]==value){
						printf("Co phan tu %d trong mang", arr[i]);
						check=1;
						break;
				    }
				}
				if(check=0){
					printf("Khong co phan tu trong mang");
				}
			break;
			case 10:
				if(n%2==0){
					for(int i=0;i<n;i++){
						temp=arr[i];
						arr[i]=arr[n-i];
						arr[n-i]=temp;
						if(i==n/2){
							break;
						}
					}
				}
				if(n%2!=0){
					for(int i=0;i<n;i++){
						temp=arr[i];
						arr[i]=arr[n-i];
						arr[n-i]=temp;
					}
				}
			break;
			case 11:
				return 0;
			break;
		}
	} while(1);
	return 0;
}
