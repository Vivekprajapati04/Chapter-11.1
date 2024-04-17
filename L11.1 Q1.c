void squareArray(int *arr, int size) {
    int *ptr = arr; 
    
    for (int i = 0; i < size; i++) {
        *ptr = (*ptr) * (*ptr); 
        ptr++; 
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    squareArray(arr, size); 
    
    printf("Square of each element:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    
}