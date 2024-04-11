/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 24: Ví dụ đơn giản minh họa con trỏ cho một kiểu dữ liệu cơ bản: sử dụng con trỏ truy xuất (nhập, xuất) giá trị cho vùng nhớ tương ứng
*/
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int *ptr;
    ptr=&n;
    printf("%d",*ptr);
}