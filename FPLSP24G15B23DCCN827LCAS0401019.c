/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 19: Xây dựng hàm tính tổng của bình phương các phần tử của mảng theo một chiều mong muốn (theo hàng, theo cột)
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
int sh(int c[][100],int a,int b,int hang){
   int sum=0;
   for(int j=0;j<b;j++) 
   sum+=c[hang-1][j]*c[hang-1][j] ;
   return sum;
}
int sc(int c[][100],int a,int b,int cot){
   int sum=0;
   for(int i=0;i<a;i++) sum+=c[i][cot-1]*c[i][cot-1] ;
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
    int hang; scanf("%d",&hang);
    int cot; scanf("%d",&cot);
    printf("%d\n",sh(c,a,b,hang));
    printf("%d\n",sc(c,a,b,cot));
}