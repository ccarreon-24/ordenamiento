#include "piratas.h"
#include "sorting.h"
#include <stdio.h>
int intComparator(const void* x, const void* y){
  int a = *(int*)x;
  int b = *(int*)y;
  if(a < b) return -1;
  if(a > b) return 1;
  return 0;
}


int main(){
	Pirate piratas[] = {
		{"Luffy" , 300000, 21, "ion"},
		{"Zoro", 100000, 24, "ion"}

	};
	int tam = sizeof(piratas) / sizeof(Pirate);
  int a[] = {5, 2, 1, 3};
  insertionSort(a, 4, sizeof(int), intComparator);
  for(int i = 0; i < 4; i++){
    printf("%d, ", a[i]); 
  }
  printf("\n");
	insertionSort(piratas, tam, sizeof(Pirate), bountyComparator);
	for(int i = 0; i < tam; i++){
		printf("%s %lld %d %s\n", piratas[i].name, piratas[i].bounty, piratas[i].age,
					piratas[i].crew);
	}
	printf("\n");
   
}

