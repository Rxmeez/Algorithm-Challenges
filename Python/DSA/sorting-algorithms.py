# Bubble Sort

def BubbleSort(array):
  for i in range(len(array)):
    for k in range(len(array)- 1, i, -1):
      if (array[k] < array[k - 1]):
        swap(array, k, k-1)

def swap(array, x, y):
  tmp = array[x]
  array[x] = A[y]
  array[y] = tmp
