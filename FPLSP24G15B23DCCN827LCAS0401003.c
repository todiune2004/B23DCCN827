/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 3:  Xây dựng hàm tìm xem một giá trị k có thuộc một mảng hay không, trả về 0 nêu không có, 1 nếu có
*/
#include<stdio.h>
int findk(int a[],int n,int k){
    for(int i=0;i<n;i++){
       if(a[i]=k) return 1;
    }
    return 0;
}

int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
    }
    int k; scanf("%d",&k);

    printf("%d",findk(a,n,k));
    return 0;
}