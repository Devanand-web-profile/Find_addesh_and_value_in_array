#include<stdio.h>
int main()
{
    int arr[10], num, i, n, found = 0, pos = -1;

    printf("Enter the number of elements in the array = ");
    scanf("%d", &n);

    printf("\n Enter the elemnents -", n);
    for(i=0; i<n; i++)
    {
        printf("\n arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    
    
    printf("\n Enter the number that has to be searched : ");
    scanf("%d", &num);

    for(i=0; i<n; i++)

    {
       if(arr[i] == num)
       {
           found = 1;
           pos = i;
           printf("\n %d is found in the array at position = %d", num, i);
        break;
       }
    }
    if (found == 0)
    printf("\n %d DOES NOT EXIST in the array.", num);

    return 0;
}