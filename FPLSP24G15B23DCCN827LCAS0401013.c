/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 13: Xây dựng hàm tìm giá trị lớn nhất của một mảng và trả về giá trị lớn nhất
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
int fm(int c[][100],int a,int b){
   int max=0;
   for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
        if(c[i][j]>max){
            max=c[i][j];
        }
    }
   }
   return max;
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