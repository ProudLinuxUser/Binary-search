#include <stdio.h>

void binary_search(int target,int arr[],int length);

void binary_search(int target,int arr[],int length)
{
        int steps = 0;
        int low = 0;
        int high = length - 1;

        while (low <= high) {
           
           steps += 1;
           int middle = (low + high) / 2;

           if (arr[middle] == target) {
                printf("The number %i is located at %i index\n",target,middle);
                printf("Took %i steps to find the index",steps);
                return;
           }
           else if (arr[middle] < target) {
                low = middle + 1;
           }
           else if (arr[middle] > target) {
                high = middle - 1;
           }
        }
        printf("Not found\n");
}

int main(void)
{
        int arr[7] = {1,2,3,4,5,6,7};

        int length = sizeof(arr) / sizeof(arr[0]);

        int x;
        printf("Enter number(1-7) ");
        scanf("%i",&x);

        binary_search(x,arr,length);
}
