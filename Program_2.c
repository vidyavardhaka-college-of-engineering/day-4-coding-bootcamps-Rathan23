//Write a program in C to copy the elements of one array into another array.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements( first and second(copied array) array) in the given order with space separated with appropriate statement
//Example
//Input:
//3 
//15 10 12
//Output: 
//The elements stored in the first array are :
//15 10 12
//The elements copied into the second array are :
//15 10 12
#include<stdio.h> 

int main()
{
  int i;
int arr[3];
printf("enter the values");
for(i=0;i<3;i++)
{
  scanf("%d",&arr[i]);
}
for(i=0;i<3;i++)
{
printf(" The elements stored in the first array are %d %d %d\n",arr[0],arr[1],arr[2]); break;
}
printf("\n");
for(i=0;i<3;i++)
{
printf("The elements copied into the second array are %d %d %d\n",arr[0],arr[1],arr[2]); break;
}
   return 0; 
}
