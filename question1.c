#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
  //Place your solution code here
  int n = 0;
  printf("\nPlease enter array size: ");
  scanf("%d", &n);
  
  if (n <= 0){
    printf("There is no array!");
    return 0;
  }

  int *nums = malloc(n * sizeof(int));

  if(nums == NULL){
    printf("ERROR ALLOCATING MEMORY");
    return 1;
  }
  printf("\n");
  for(int i = 0; i < n; i++){
    printf("Enter element %d: ", i);
    scanf("%d", &nums[i]);

  }

  printf("\nHere is the array in reverse: [");
  for(int i = n -1; i >= 0; i--){
    if(i == 0){
      printf("%d ]\n\n\n", nums[i]);
    }
    else {
      printf("%d,", nums[i]);
    }
  }

  free(nums);

  return 0;
}

