/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 15: Xây dựng hàm tìm xem một giá trị k có thuộc một mảng hay không, trả về 0 nêu không có, 1 nếu có
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
int fk(int c[][100],int a,int b,int k){
   for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        if(c[i][j]==k) return 1;
        }
    }
   return 0;
   }

int main(){
    int a,b,c[100][100];
    int k; scanf("%d",&k);
    scanf("%d %d",&a,&b);
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&c[i][j]);
        }
    }
    printf("%d",fk(c,a,b,k));
}