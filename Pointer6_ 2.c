#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Nhap so phan tu co trong mang:");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Gia tri cua arr(dung ham mallock) la:%d", arr[i]); 
        printf("\nDia chi cua arr la:%p\n", &arr[i]);
    }
    printf("\n\n");

    arr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Gia tri cua arr(dung ham mallock) la:%d", arr[i]);
        printf("\nDia chi cua arr la:%p\n", &arr[i]);
    }
    free(arr);
    return 0;
}