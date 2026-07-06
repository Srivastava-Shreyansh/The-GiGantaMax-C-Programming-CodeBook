/*Quick Quiz: Create a 2-d array by taking input from the user.
 Write a display function to print the content of this 2-d array on the screen.
*/
#include <stdio.h>

// Function to display the 2D array
void display(int rows, int cols, int arr[rows][cols]) {
    printf("\nThe 2D array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;

    // Taking array size from user
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Taking input for array elements
    printf("\nEnter elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Calling display function
    display(rows, cols, arr);

    return 0;
}
