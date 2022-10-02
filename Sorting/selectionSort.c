#include <stdio.h>

void printArray(int *A, int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
void selectionSort(int *A, int n)
{
    int indexOfMin, temp;
    printf("Running Selection Sort...\n");
    for (int i = 0; i < n - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}
int main()
{
    int A[] = {18, 9, 54, 74, 12, 35, 65, 15, 48};
    int n = 9;

    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);

    return 0;
}