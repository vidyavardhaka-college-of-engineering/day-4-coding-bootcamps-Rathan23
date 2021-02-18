//Write a program in C to find the sum of all elements of the array. 
//Input the number of elements to be stored in the array :3
//Input 3 elements in the array :
//2 5 8
//Expected Output:
//Sum of all elements stored in the array is : 15
#include <stdio.h>
int main()
{
 int sum=0,n,a[100],i;
 printf("enter the number of elements of an array\n");
 scanf("%d",&n);
 printf("enter the elements of array");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
   sum = sum+a[i];
 }
 printf("sum of array elements are %d",sum);
  return 0;
}
