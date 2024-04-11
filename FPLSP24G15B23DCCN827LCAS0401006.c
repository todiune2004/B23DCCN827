/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 6: Xây dựng hàm sắp xếp mảng theo thuật toán sắp xếp nổi bọt
*/
#include<stdio.h>
#include<math.h>
int sxnb(int a[],int n){
    for(int j=0;j<n;j++){
    for(int i=0;i<n-1;i++){
        int c=a[i];
        if(a[i]>a[i+1]){
            a[i]=a[i+1];
            a[i+1]=c;
        }
    }
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(a+i));
    }
}
int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    sxnb(a,n);
}        