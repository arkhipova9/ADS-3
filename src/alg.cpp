// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
    int counter = 0;
    int leftB = 0;
    int rightB = size - 1;
    while (rightB >= leftB) {
        int midB = (leftB + rightB) / 2;
        if (arr[midB] == value) {
            counter++;
            for (int n = midB + 1; n <= rightB && arr[n] == value; n++) {
                counter++;
            }
            for (int n = midB - 1; n >= leftB && arr[n] == value; n--) {
                counter++;
            }
            return counter;
        } else if (arr[midB] < value) {
            leftB = midB + 1;
        } else if (arr[midB] > value) {
            rightB = midB - 1;
        }
    }
    return 0;
}
