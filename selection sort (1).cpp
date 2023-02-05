#include <stdio.h>  
#include <conio.h>
#include <stdlib.h>
void selection(int array[], int n)  
{  
    int i, j, minimum;  
    for (i = 0; i < n-1; i++)
    {  
        minimum = i;
        for (j = i+1; j < n; j++)  
        if (array[j] < array[minimum])  
            minimum = j;  
    int temp = array[minimum]; // Replace the first element with the minimum element.
    array[minimum] = array[i];  
    array[i] = temp;  
    }  
}  
void printArr(int array1[], int n) //function to print the array//
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", array1[i]);  
}  
int main()  
{  
    int array1[] = { 15, 30, 29, 14, 39, 11 };  
    int n = sizeof(array1) / sizeof(array1[0]);  
    printf(" An array before sorting: - \n");  
    printArr(array1, n);  
    selection(array1, n);  
    printf("\nAn Array after sorting- \n");    
    printArr(array1, n);  
    return 0;  
}