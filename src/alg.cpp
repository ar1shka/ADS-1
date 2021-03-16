// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int m = 0;
for (int i = 1; i< size; i++) {
if (arr[i] == value) m = m+1;
}
if (m<>0)
return m;
else
return 0;
}
