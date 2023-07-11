// Jack Tench 2023
// Example TUI Menu
// Header file for menu.c

#ifndef MENU_H
#define MENU_H

typedef enum {
    Option1,
    Option2,
    Option3,
    Exit
} MenuItem;

void highlightItem(MenuItem selectedItem);
MenuItem runMenu();

#endif