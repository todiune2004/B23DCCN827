/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 4 : Xây dựng hàm đếm xem số phần tử chẵn của một mảng và trả về số phần tử chẵn, nếu không có trả về 0
*/
#include<stdio.h>
int sc(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0) sum++;
    }
    return sum;
    if(sum==0) return 0;
}
int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    printf("%d", sc(a,n));
}
