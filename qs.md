```c
void quicksort (int *arr, int st, int end)
{
    if (st < end)
    {
        int pivot = split(arr, st, end);
        quicksort(arr, st, pivot - 1);
        quicksort(arr, pivot + 1, end);
    }
}
```
```c
int split (int *arr, int low, int high)
{
    int i, pivot = arr[high], swap;
	int left_wall = low;
```
```c
	for (i = low; i < high; ++i)
		if (arr[i] <= pivot) {
			swap = arr[i];
			arr[i] = arr[left_wall];
			arr[left_wall] = swap;
			++left_wall;
		}
```
```c
	swap = arr[i];
	arr[i] = arr[left_wall];
	arr[left_wall] = swap;

	return left_wall;
}
```