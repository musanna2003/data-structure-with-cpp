#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a [100], even[100], odd[100];
    int e =0, o =0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 ==0){
            even [e] = a[i];
            e ++;
        }
        else{
            odd[o] = a[i];
            o ++;
        }
           
    }
    for (int i = 0; i < e ; i ++) {
        for (int j = i+1; j < e; j++) {
            if (even[i] > even[j]) {
                int tmp = even[i];
                even[i] = even[j];
                even[j] = tmp;
            }
        }
    }

    for (int i =0; i < o; i++) {
        for (int j =i + 1; j < o; j++) {
            if (odd[i] < odd[j]) {
                int tmp2 = odd[i];
                odd[i] = odd[j];
                odd[j] = tmp2;
            }
        }
    }

    int e2 = 0, o2 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0){
            a[i] = even[e2];
            e2 ++;
        }   
        else{
            a[i] = odd[o2];
            o2++;
        }
            
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
