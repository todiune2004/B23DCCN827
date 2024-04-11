/*
Ho va ten: Nguyễn Đình Tố
Mã sinh viên: B23DCCN827 
Bài 8: Xây dựng hàm sắp xếp mảng theo thuật toán sắp xếp chèn
*/
#include<stdio.h>
#include<math.h>
void insertionSort(int a[], int n) {
    int i, j, last;
    for (i=1; i < n; i++) {
        last = a[i];
        j = i;
    while ((j > 0) && (a[j-1] > last)) {
        a[j] = a[j-1];
        j--; 
    }
        a[j] = last;
    }
    for(int i=0;i<n;i++) printf("%d ",a[i]);
} 
int  main(){
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) 
        scanf("%d",a+i);
    insertionSort(a,n);
}