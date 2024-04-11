/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 20: Xây dựng hàm đếm số lần đổi dấu của các phần tử của mảng theo một chiều mong muốn (theo hàng, theo cột)
*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
int sh(int c[][100],int a,int b,int hang){
   int sum=0;
   for(int j=0;j<b-1;j++){
       if((c[hang-1][j]<0&&c[hang-1][j+1]>0)||(c[hang-1][j]>0&&c[hang-1][j+1]<0)) sum++;
   }
   return sum;
}
int sc(int c[][100],int a,int b,int cot){
   int sum=0;
   for(int i=0;i<a-1;i++){
       if((c[i][cot-1]<0&&c[i+1][cot-1]>0)||(c[i][cot-1]>0&&c[i+1][cot-1]<0)) sum++;
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
    int hang; scanf("%d",&hang);
    int cot; scanf("%d",&cot);
    printf("%d\n",sh(c,a,b,hang));
    printf("%d\n",sc(c,a,b,cot));
}