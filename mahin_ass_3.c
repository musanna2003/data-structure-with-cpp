#include <stdio.h>

void printEven() {
    int n;
    scanf("%d", &n);
    if (n < 0) {
        return;
    }
    if (n % 2 == 0) {
        printf("%d ", n);
    }
    printEven();
}

void inp_num(){
    int n;
    scanf("%d", &n);
    if (n < 0) return;
    inp_num();
    if (n%2 == 0){
        printf ("%d ",n);
    }
    
}

int main() {
    inp_num();
    return 0;
}
