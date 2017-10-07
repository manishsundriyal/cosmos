// Part of Cosmos by OpenGenus Foundation
// Average of the numbers in an array in C
#include<stdio.h>
#include<stdlib.h>
void TakeInput(int arr[],int size){
	for(int i=0;i<size;++i){
		scanf("%d",&arr[i]);
	}
}
int FindAvg(int arr[],int size){
	int sum=0;
	for(int i=0;i<size;++i){
		sum+=arr[i];
	}
	return sum/size;
}
int main(){
	int size;
	scanf("%d",&size);
	int *arr=(int *)malloc(size*sizeof(int*));
	TakeInput(arr,size);
	printf("%d\n",FindAvg(arr,size));
	
}

/*Test Case
Input:
5
1 2 3 4 5
Output:
3*/