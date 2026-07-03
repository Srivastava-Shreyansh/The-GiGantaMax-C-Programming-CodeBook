#include <stdio.h>

int main()
{
    // Declare variables for different data types
    int my_integer;
    float my_float;
    char my_character;

    // --- Input for Integer ---
    printf("Enter an integer: ");
    // Use %%d for integer input
    if (scanf("%d", &my_integer) != 1)
    {
        printf("Invalid input for integer.\n");
        return 1; // Exit with error code
    }

    // --- Input for Float ---
    printf("Enter a floating-point number: ");
    // Use %%f for float input
    if (scanf("%f", &my_float) != 1)
    {
        printf("Invalid input for float.\n");
        return 1; // Exit with error code
    }

    // --- Input for Character ---
    printf("Enter a single character: ");
    // Use a space before %%c to consume any leftover whitespace (like the newline
    // from the previous input) that might be in the input buffer.
    if (scanf(" %c", &my_character) != 1)
    {
        printf("Invalid input for character.\n");
        return 1; // Exit with error code
    }

    // --- Display the Entered Values ---
    printf("\n--- You entered the following values ---\n");
    printf("Integer: %d\n", my_integer);
    // Display float with two decimal places for neatness
    printf("Float: %.2f\n", my_float);
    printf("Character: %c\n", my_character);

    return 0; // Indicate successful execution
}