#include <stdio.h>

int main() {
    printf("Cac so Armstrong co 3 chu so la:\n");

    for (int num = 100; num <= 999; num++) {
        int sum = 0;        
        int temp = num;       

        while (temp > 0) {
            int digit = temp % 10;  
            sum += digit * digit * digit; 
            temp /= 10;              
        }

        if (sum == num) {
            printf("%d\n", num); 
        }
    }

    return 0;
}

