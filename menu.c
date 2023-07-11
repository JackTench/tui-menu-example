// Jack Tench 2023
// Example TUI Menu

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "menu.h"

// Function to handle drawing the menu and the selected item.
void highlightItem(MenuItem selectedItem)
{

    system("cls");  // Replace this with whatever works on linux.

    printf("Menu\n");
    printf("----\n");

    // Print menu contents, and selected item.
    printf(selectedItem == Option1 ? "> Option 1\n" : "  Option 1\n");
    printf(selectedItem == Option2 ? "> Option 2\n" : "  Option 2\n");
    printf(selectedItem == Option3 ? "> Option 3\n" : "  Option 3\n");
    printf(selectedItem == Exit ? "> Exit\n" : "  Exit\n");

}

// Main function.
MenuItem runMenu()
{

    // Default selected item.
    MenuItem selectedItem = Option1;
    int menuSelected = 0;

    while (!menuSelected)
    {
        highlightItem(selectedItem);

        int input = _getch();   // may need tweaking for linux?

        // Handle keyboard input.
        switch(input)
        {
            case 72:    // up arrow
                if (selectedItem != Option1)
                {
                    selectedItem = (MenuItem)((int)selectedItem - 1);
                }
                break;
            case 80:    // down arrow
                if (selectedItem != Exit)
                {
                    selectedItem = (MenuItem)((int)selectedItem + 1);
                }
                break;
            case 13:    // enter
                menuSelected = 1;
                break;
        }
    }

    return selectedItem;

}