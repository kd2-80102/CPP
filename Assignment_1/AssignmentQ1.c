#include <stdio.h>

struct Date {
    int Day;
    int month;
    int year;

};

void initDate(struct Date* ptrDate){
    ptrDate -> Day = 0;
    ptrDate -> month = 0;
    ptrDate -> year = 0;
}
void printDateOnConsole(struct Date* ptrDate){
    printf("DATE IS: %d/%d/%d",ptrDate->Day,ptrDate->month,ptrDate->year);
}
void acceptDateFromConsole(struct Date* ptrDate){
    printf("SELECT DAY :");
    scanf("%d",&ptrDate->Day);
    printf("SELECT MONTH :");
    scanf("%d",&ptrDate->month);
    printf("SELECT YEAR :");
    scanf("%d",&ptrDate->year);
}


int main(){

    struct Date d1;


    
    int c;

    do{
        
        printf("\nMENU DRIVEN DATE:\n");
        printf("1. Initialize the Date\n");
        printf("2. Display the Date\n");
        printf("3. Accept the Date\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &c);

    

    switch (c)
    {
    case 1:
        initDate(&d1);
        break;
    
    case 2:
        printDateOnConsole(&d1);
        break;
    

    case 3:
        acceptDateFromConsole(&d1);
        printDateOnConsole(&d1);
        break;

    case 4:
        printf("Exiting program.\n");
        break;

    default:
        printf("Wrong choice. Please try again.\n");
    }   

} while (c !=4);

return 0;

}
