/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 14: Xây dựng hàm tìm giá trị nhỏ nhất của một mảng và trả về giá trị nhỏ nhất
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
int fm(int c[][100],int a,int b){
   int min=c[0][0];
   for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        if(c[i][j]<min){
            min=c[i][j];
        }
    }
   }
   return min;
}

int main(){
    int a,b,c[100][100];
    scanf("%d %d",&a,&b);
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&c[i][j]);
        }
    }
    printf("%d",fm(c,a,b));
}