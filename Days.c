#include <stdio.h>

void calculateDays(int Days);

int main(){
    int Days;

    printf("Enter a number between 1 and 7: ");
    scanf("%d", &Days);

   calculateDays(Days);

    return 0;
}

void calculateDays(int Days){
    switch(Days){
        case 1:
        printf("Monday \n");
        break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid number. Please enter a number between 1 and 7.\n");
    }
}