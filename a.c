#include <stdio.h>
#include <stdlib.h>

int main(){
	printf("int arr[2][3] = { {2, 8, 4}, {5, 6, 7} }\n\n");
	printf("[2][8][4]\n[5][6][7]\n\n");
	int arr[2][3] = { {2, 8, 4}, {5, 6, 7} };
	printf("*pointer = arr\n");
	int *pointer = arr;
	
	printf("++pointer[0]: %d\n\n", ++pointer[0]);

// создание и заполнение тройного динамического 
// числами
	int **ptr = (int**)malloc(sizeof(int*)*2);

	for(int i = 0; i < 3; i++)
	{
		ptr[i] = (int*)malloc(sizeof(int)*3);
		for(int k = 0; k < 3; k++ )
		{
			ptr[i][k] = i*10 + 2*k;
		}
	}
// -------- конец заполнения

 printf("динамический двойной массив 3x3 ptr\n с таким содержимым:\n\n");

 for(int i = 0; i < 3; i++)
 {
	 for(int k = 0; k < 3; k++)
	 {
		 printf("[%d]", ptr[i][k]);
	 }
	 printf("\n");
 }
 printf("\nадрес 1эл 1 строки: ptr[0] %p\n", ptr[0]);
 printf("ptr[0][0]: %d\n", ptr[0][0]);
 ptr[0]++;
 printf("ptr[0]++\n");
 printf("адрес 2эл 1 строки: ptr[0] %p\n", ptr[0]);
 printf("ptr[0][0]: %d\n\n", ptr[0][0]);

 pointer = arr[1];
 printf("pointer = arr[2]\n");

 for(int i=0; i < 3; i++)
 {
	 printf("pointer[%d]: %d\n", i, pointer[i]);
 }
}
