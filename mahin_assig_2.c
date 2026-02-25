#include <stdio.h>

void findIntersection(int arr1[], int size1, int arr2[], int size2, int result[]) {
    int k = 0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                result[k] = arr1[i];
                k++;
                break;
            }
        }
    }
    for (int i = 0; i < k ; i++) {
        printf("%d ", result[i]);
    }
}

int main() {
    int size1, size2;
    scanf("%d", &size1);
    int arr1[size1];
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &size2);
    int arr2[size2];
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    int result[100];

    findIntersection(arr1,size1,arr2, size2, result);

    return 0;
}
