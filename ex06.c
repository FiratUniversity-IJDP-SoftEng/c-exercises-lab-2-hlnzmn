#include <stdio.h>
int main() {
  int arr[51];     
    int i;  
    for (i = 100; i >= 50; i--) {
        if (i % 3 == 0) {    
            arr[index] = i;  
            index++;          
        }
    }
printf("Numbers divisible by 3 from 100 to 50:\n");
    for (i = 0; i < index; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
