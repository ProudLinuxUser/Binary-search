#include <stdio.h>
#include <string.h>

struct Users{
        char name[50];
        int age;
        int index;
};

void binary_search(int target,int arr[],int length,struct Users user[]);

void binary_search(int target,int arr[],int length,struct Users user[])
{
        int steps = 0;
        int low = 0;
        int high = length - 1;

        while (low <= high) {
           
           steps += 1;
           int middle = (low + high) / 2;

           if (arr[middle] == target) {
                printf("The number %i is located at %i index\n",target,middle);
                printf("Took %i steps to find the index\n",steps);

                int found = 0;
                for (int i = 0;i < 3; i++){
                        if (user[i].index == target){
                                printf("User: %s Age: %i\n",user[i].name,user[i].age);
                                found = 1;
                        }
                        }
                if (!found){
                        printf("No user found at index %i",target);
                }
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

int main(void){

        struct Users user[3];

        strcpy(user[0].name,"Jeffery Epstein");
        user[0].age = 12;
        user[0].index = 4;

        strcpy(user[1].name,"P.Diddy");
        user[1].age = 69;
        user[1].index = 2;

        strcpy(user[2].name,"Charlie Kirk");
        user[2].age = 22;
        user[2].index = 6;

        int arr[7] = {1,2,3,4,5,6,7};

        int length = sizeof(arr) / sizeof(arr[0]);

        int x;
        printf("Enter number(1-7) ");
        scanf("%i",&x);

        binary_search(x,arr,length,user);
}
