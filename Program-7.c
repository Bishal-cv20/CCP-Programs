#include <stdio.h>
#include <conio.h>
void main()
{
	int mat1[3][3],mat2[3][3],matsum[2][3],i,j;
	printf("\nEnter the elements of first matrix:\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&mat1[i][j]);
	printf("\nEnter the elements of second matrix:\n");
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			scanf("%d",&mat2[i][j]);
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			matsum[i][j]=mat1[i][j]+mat2[i][j];
	printf("\nThe sum of given matrices is:\n");
	for(i=0;i<3;i++)
        {
		for(j=0;j<3;j++)
			printf("%d \t",matsum[i][j]);
		printf("\n");
	}
	getch();
}
