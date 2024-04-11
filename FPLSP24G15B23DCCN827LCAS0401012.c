/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 12: Xây dựng hàm đếm số lần đổi dấu của các phần tử của mảng
*/
#include<stdio.h>
#include<math.h>
int dem(int a[],int n){
    int sum=0;
    for(int i=0;i<n-1;i++){
        if((a[i]>0&&a[i+1]<0)||(a[i]<0)&&a[i+1]>0) sum++;
    }
    return sum;
}
int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",a+i);
    printf("%d",dem(a,n));
}