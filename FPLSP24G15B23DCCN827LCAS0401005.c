/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 5: Xây dựng hàm đếm xem số phần tử nguyên tố của một mảng và trả về số phần tử nguyên tố, nếu không có trả về 0
*/
#include<stdio.h>
#include<math.h>
int nt(int n){
    if(n<2) return 0;
    for(int j=2;j<sqrt(n);j++){
        if(n%j==0) return 0;
    }
    return 1;
}
int demnt(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=nt(a[i]);
    }
    return sum;
}
int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    printf("%d",demnt(a,n));
}        