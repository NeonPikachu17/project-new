#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "struct.h"
#include "function.h"

int main(){
    int choice, employeeCount = 0;
    POSITION *listPosition = addPosition();

    APPOINTMENT *newList = NULL;

    do{
        menu(&choice);
        switch (choice){
        case 1:
            addEmployee(&listPosition, &employeeCount);
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            printf("GoodBye!");
            break;
        default:
            printf("Invalid Choice!! Please Try Again!\n");
            break;
        }
    } while (choice != 8);
}