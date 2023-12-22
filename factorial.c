#include <stdio.h>

long long factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5; // Puedes cambiar este número según tus necesidades
    long long result = factorial(num);
    printf("El factorial de %d es %lld\n", num, result);
    return 0;
}
