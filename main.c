#include <stdio.h>
#include <math.h>

int main(void){
    int n = 0;
    scanf("%d", &n);
    
    for(int i =2; i<=n; i++){
        int isPrime = 1;
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime){
            printf("%d\n", i);
            }
        }
    }


