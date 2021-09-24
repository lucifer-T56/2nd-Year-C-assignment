#include <stdio.h>

int main() {
    int a[10], n;
    int l, sl;

    printf("Enter number of elements you want in array : ");
    scanf("%d", &n);
    printf("Enter elements : \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    l = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > l) {
            l = a[i];
        }
    }
    sl = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > sl && a[i] < l)
            sl = a[i];
    }
    printf("First and second largest number are :  %d and %d ", l, sl);
}