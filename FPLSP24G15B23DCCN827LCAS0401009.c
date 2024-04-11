/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 9: Xây dựng hàm sắp xếp mảng theo thuật toán sắp xếp đổi chỗ trực tiếp
*/
#include<stdio.h>
#include<math.h>
void Interchange_Sort(int a[], int n){
	int i,j;
	for(i=0; i<n-1; i++){
		for(j=i+1; j<n; j++){
            int c=a[i];
			if(a[i]>a[j]){
				a[i]=a[j];
                a[j]=c;
			}
		}
	}
    for(int i=0;i<n;i++) printf("%d ",a[i]);
}
int  main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) 
        scanf("%d",a+i);
    Interchange_Sort(a,n);
}