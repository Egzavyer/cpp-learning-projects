
#include "../Include/sorting.h"

void Sorting::bubbleSort(int nums[], int size) {

    auto start = std::chrono::system_clock::now();

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
    auto end = std::chrono::system_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);
    std::cout << "\n***********************************************\n";
    std::cout << "Sorted in " << elapsed << '\n';
}
