/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 11: Xây dựng hàm tính tổng của bình phương các phần tử của mảng
*/
#include<stdio.h>
#include<math.h>
#define ll long long
ll sa(int a[],int n){
    ll sum=0;
    for(int i=0;i<n;i++)
    sum+=a[i]*a[i];
    return sum;
}
int main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",a+i);
    printf("%lld",sa(a,n));
}