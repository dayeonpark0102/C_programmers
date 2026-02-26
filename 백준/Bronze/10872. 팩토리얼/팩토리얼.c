#include <stdio.h>

int main(){
    int N, factorial = 1;
    scanf("%d", &N);
    
    for(int i = N; i > 0; i--){
        factorial *= i;
    }
    
    printf("%d", factorial);
}