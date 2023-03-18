// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
    int counter = 0;
    int leftBorder = 0;
    int rightBorder = size - 1;
    while (rightBorder - leftBorder > 1) {
        int midBorder = (leftBorder + rightBorder) / 2;
        if (arr[midBorder] == value) {
            counter++;
            for (int num = midBorder + 1; num <= rightBorder && arr[num] == value; num++) {
                counter++;
            }
            for (int num = midBorder - 1; num >= leftBorder && arr[num] == value; num--) {
                counter++;
            }
            return counter;
        } else if (arr[midBorder] < value) {
            leftBorder = midBorder + 1;
        } else {
            rightBorder = midBorder - 1;
        }
    }
    return 0;
}
