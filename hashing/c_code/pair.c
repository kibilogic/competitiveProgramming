#include <stdio.h>

/*
Find a pair with the given sum in an array.

Given an unsorted integer array, find a pair with the given sum in it
*/

void findPair(int nums[], int n, int target){

	for(int i=0; i<n-1; i++){

		for(int j=i+1; j<n; j++){

			if(nums[i] + nums[j]==target){

				printf("Pair found (%d, %d)\n", nums[i], nums[j]);
				return;
			}
		}
	}

	printf("Pair not found\n");
}

int main(void){

	int nums[] = {8,7,2,5,3,1};
	int target = 10;

	int n = sizeof(nums)/sizeof(nums[0]);

	findPair(nums, n, target);

	return 0;
}