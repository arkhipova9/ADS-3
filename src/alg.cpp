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
            int num = midBorder - 1;
            while (num >= leftBorder && arr[num] == value) {
                counter++;
                num--;
            }
            num = midBorder + 1;
            while (num <= rightBorder && arr[num] == value) {
                counter++;
                num++;
            }
            break;
        } else if (arr[midBorder] < value) {
            leftBorder = midBorder + 1;
        } else {
            rightBorder = midBorder - 1;
        }
    }
    return counter;
    return 0;
}
