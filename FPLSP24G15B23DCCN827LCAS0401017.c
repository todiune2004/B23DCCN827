/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 17:Xây dựng hàm đếm xem số phần tử nguyên tố của một mảng và trả về số phần tử nguyên tố, nếu không có trả về 0
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
int nt(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){return 0;}
    }
    return 1;
}
int dc(int c[][100],int a,int b){
   int sum=0;
   for(int i=0;i<a;i++){
    for(int j=0;j<b;j++){
       sum+=nt(c[i][j]);
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