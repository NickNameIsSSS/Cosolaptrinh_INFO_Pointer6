#include <stdio.h>
#include <stdlib.h>

int main()
{
    // nhap xuat, tim;
    int k;
    int find;
    int size;
    printf("Vui long nhap kich thuoc cua mang:");
    scanf("%d", &size);
    int *arr = (int *)malloc(size * sizeof(int));
    printf("Nhap cac phan tu trong arr:");
    
    for (int i = 0; i < size; i++)
    {
        scanf("%d", (arr + i));
    }
    printf("\nCac phan tu co trong arr:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\nNhap so can tim trong day so:");
    scanf("%d", &k);
    for(int i = 0; i < size; i ++){
        if(*(arr + i) == k){
            find = i;
            break;
        }
    }
    printf("\nPhan tu trong mang co gia tri bang K la A[%d]", find);
    free(arr);
    return 0;
}