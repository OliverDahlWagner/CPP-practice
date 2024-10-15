#include <iostream>

int ascending(int a, int b);
int descending(int a, int b);
void sort(int array[], int size, int (*compare)(int, int));

int main() {
    int array[] = {10, 1, 9, 2, 8, 2, 7, 4, 6, 5};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size, ascending);

    for (int element : array) {
        std::cout << element << " ";
    }

    return 0;
}

int ascending(int a, int b) { return a > b; }
int descending(int a, int b) { return a < b; }

void sort(int array[], int size, int (*compare)(int, int)) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (compare(array[j], array[j + 1])) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}