/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 10: Xây dựng hàm tính tổng của một mảng
*/
#include<stdio.h>
#include<math.h>
int sa(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=a[i];
    return sum;
}
int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",a+i);
    printf("%d",sa(a,n));
}