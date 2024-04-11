/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 25 Ví dụ đơn giản minh họa con trỏ trỏ đến mảng 1 chiều:
- Con trỏ được sử dụng như mảng 1 chiều
- Con trỏ truy xuất đến phần tử thứ i của mảng
- Tên mảng như một con trỏ
*/
#include<stdio.h>
#include<math.h>
//&a[i]=a+i; a[i]=*(a+i); 
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",a+i); 
    }
    for(int i=0;i<n;i++){
        printf("%d ",*(a+i));
    }
}