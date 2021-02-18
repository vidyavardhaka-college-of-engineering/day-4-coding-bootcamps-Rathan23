//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
    int arr[10], n, i,small,large;
    printf(" enter the numbers of elements in an array");
    scanf("%d", &n);
    printf("enter the elements of array");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    small=arr[0];
    large=arr[0];
   for(i=0;i<n;i++)
   {
     if(arr[i]<small)
     {
       small=arr[i];
     }
     if(arr[i]>large)
     {
       large=arr[i];
     }
   }
   printf(" the largest number in an array %d \n",large);
    printf("small number in an array %d",small);
    return 0;
}
