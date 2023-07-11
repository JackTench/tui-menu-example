// Jack Tench 2023
// Example TUI Menu
// Main

#include <stdio.h>

#include "menu.h"

int main()
{
    
    // Run the main menu.
    MenuItem menu = runMenu();

    // What happens on selection of an item.
    switch (menu)
    {
        // User chooses Option 1.
        case Option1:
            // do something.
            printf("Option 1 has been selected!\n");
        case Option2:
            // do something else
            printf("Option 2 here!\n");
        case Option3:
            // do yet another thing
            printf("WOOO BAYBEE!\n");
        case Exit:
            return 0;
    }

    return 1;
}