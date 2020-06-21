#include <stdio.h>
#include <stdlib.h>

int main(){

	int arr[2][3] = { {2, 8, 4}, {5, 6, 7} };
	int *pointer = arr;
	
	printf("%d\n", ++pointer[0]);

	int **ptr = (int**)malloc(sizeof(int*)*2);

	for(int i = 0; i < 3; i++)
	{
		ptr[i] = (int*)malloc(sizeof(int)*3);
		for(int k = 0; k < 3; k++ )
		{
			ptr[i][k] = i*10 + k;
		}
	}

 for(int i = 0; i < 3; i++)
 {
	 for(int k = 0; k < 3; k++)
	 {
		 printf("[%d]", ptr[i][k]);
	 }
	 printf("\n");
 }
 printf("адрес 1эл 1 строки: ptr[0] %p\n", ptr[0]);
 printf("ptr[0][0]: %d\n", ptr[0][0]);
 ptr[0]++;
 printf("ptr[0]++\n");
 printf("адрес 2эл 1 строки: ptr[0] %p\n", ptr[0]);
 printf("ptr[0][0]: %d\n", ptr[0][0]);

}
