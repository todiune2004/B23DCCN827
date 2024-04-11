/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 2 : Xây dựng hàm tìm giá trị nhỏ nhất của một mảng và trả về giá trị nhỏ nhất;
*/
#include<stdio.h>
int min(int a[],int n){
    int mval=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<mval){
            mval=a[i];
        }
    }
    return mval;
}

int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    printf("%d",min(a,n));
    return 0;
}