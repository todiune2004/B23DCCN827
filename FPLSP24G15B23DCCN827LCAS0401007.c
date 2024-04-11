/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 7: Xây dựng hàm sắp xếp mảng theo thuật toán sắp xếp lựa chọn
*/
#include<stdio.h>
#include<math.h>
int sxlc(int a[],int n){
    int min,c;
    for(int i =0;i<n-1;i++){
       min=i; c=a[i];
       for(int j=i+1;j<n;j++){
        if(a[j]<a[min]) min=j;
       }
       a[i]=a[min];
       a[min]=c;
    }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
int  main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) 
        scanf("%d",a+i);
        sxlc(a,n);
}