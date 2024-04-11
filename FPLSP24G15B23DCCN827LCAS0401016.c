/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 16:  Xây dựng hàm đếm xem số phần tử chẵn của một mảng và trả về số phần tử chẵn, nếu không có trả về 0
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
int dc(int c[][100],int a,int b){
   int sum=0;
   for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        if(c[i][j]%2==0)sum++;
    }
   }
   return sum;
}

int main(){
    int a,b,c[100][100];
    scanf("%d %d",&a,&b);
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&c[i][j]);
        }
    }
    printf("%d",dc(c,a,b));
}