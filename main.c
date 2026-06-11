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
	/*
  int a[] = {5, 2, 1, 3};
  insertionSort(a, 4, sizeof(int), intComparator);
  for(int i = 0; i < 4; i++){
    printf("%d, ", a[i]); 
  }
  printf("\n");*/
	int n = getchar() - '0';
	printf("%d\n", n);
	Pirate piratas[n];
	for(int i = 0; i < n; i++){
		scanf("%s %lld %d %s\n", piratas[i].name, &piratas[i].bounty, &piratas[i].age,
					piratas[i].crew);
	}
	int tam = sizeof(piratas) / sizeof(Pirate);
	insertionSort(piratas, tam, sizeof(Pirate), bountyComparator);
	for(int i = 0; i < tam; i++){
		printf("%s %lld %d %s\n", piratas[i].name, piratas[i].bounty, piratas[i].age,
					piratas[i].crew);
	}
	printf("\n");
   
}

