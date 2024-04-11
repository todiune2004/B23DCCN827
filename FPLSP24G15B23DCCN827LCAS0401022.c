/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 22:  Xây dựng hàm chuyển một véc-tơ 1 x m*n thành một ma trận mxn với mỗi phần của véc-tơ (phân đoạn) thành một hàng
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
int ch(int m[],int n,int a,int b,int c[][100]){
    int k=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            c[i][j]=m[k++];
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n; scanf("%d",&n);
    int m[n];
    for(int i=0;i<n;i++) scanf("%d",m+i);
    int a,b;
    scanf("%d %d",&a,&b);
    int c[a][b];
    ch(m,n,a,b,c);
}