// Nested-loop

#include <iostream>

int main()
{
    int i, j, rows, columns;
    char symbol;

    // Prompt the user to enter the number of rows
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    // Prompt the user to enter the number of columns
    std::cout << "Enter the number of columns: ";
    std::cin >> columns;

    // Prompt the user to enter the symbol to be printed
    std::cout << "Enter the symbol: ";
    std::cin >> symbol;

    // Nested loop to print the specified symbol in a grid pattern
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= columns; j++)
        {
            std::cout << symbol;  // Print the symbol
        }
        std::cout << std::endl;  // Move to the next line after printing one row
    }

    return 0;
}