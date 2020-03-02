#include<stdio.h>
int main()
{
int arr[3] [2],i,j;
printf("\n Enter the elements of the array\n");
for(i=0;i<3;i++)
{
	for(j=0;j<2;j++)
	{
		scanf("%d",&arr[i][j]);
	}
	
}
printf("\n the elements of the matrix are:\n");
for(i=0;i<3;i++)
{
      for(j=0;j<2;j++)
      {
      	printf("%d\t", arr[i][j]);
	  }


printf("\n");
}


return 0;
}
