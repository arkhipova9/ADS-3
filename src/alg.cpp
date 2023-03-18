// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
  int counter = 0;
    int leftBorder = 0, rightBorder = size;
    while (leftBorder <= rightBorder) {
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
          leftBorder = midBorder;
        } else {
          rightBorder = midBorder;
        }
    }
    return counter;
}
