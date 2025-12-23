#include <stdio.h>

int main() {
    int arr[] = {40, 5, 49, 3, 8, 100, 4, 2, 10, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool swapped;

    for (int i = 0; i < n - 1; i++) {
		swapped = false;

        for (int j = n - 1; j > i; j--) {
            if (arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
				swapped = true;
            }
        }
        
		if(!swapped) break;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
