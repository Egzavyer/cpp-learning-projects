
#include "../Include/sorting.h"

void Sorting::bubbleSort(int nums[], int size) {
    int temp;
    bool isSorted;

    for (int i=0; i < size; i++) {
        isSorted = true;
        for (int j = 0; j < size - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
                isSorted = false;
            }
        }
        if (isSorted) {
            break;
        }
    }
}
