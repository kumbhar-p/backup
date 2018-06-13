#include"headers.h"
int main(void)
{
    int choice;
    menu();
    printf("enter your choice:");
    choice = myatoi();
    switch(choice) {
        case 1:
            bublesort();
            break;
        case 2:
            selecsort();
            break;
        case 3:
            insertion();
            break;
        case 4:
            linear_search();
            break;
        case 5:
            binary_search();
            break;
        case 6:
            input_quick();
            break;
        case 7:
            merge_sort();
            break;
    }
    return 0;
}
