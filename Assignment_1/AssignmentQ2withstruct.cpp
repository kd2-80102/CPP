#include<iostream>

using namespace std;

struct Date {
    private:
        int day;
        int month;
        int year;

    public:

        void initDate(){
            day = 0;
            month = 0;
            year = 0;
        }
        void printDateOnConsole(){
            cout<<"The DATE is : "<<day<<" - "<<month<<" - "<<year<<endl;

        }
        void acceptDateFromConsole(){
            cout<<"Select the day : ";
            cin>>day;
            cout<<"Select the month : ";
            cin>>month;
            cout<<"Select the year : ";
            cin>>year;
        } 
        bool isLeapYear(){
            if((year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0)){
                return true;
            }

            return false;
        }

};

int main(){

    struct Date d2;

    int my_choice;

    do{
        printf("\nMENU DRIVEN DATE:\n");
        printf("1. Initialize the Date\n");
        printf("2. Display the Date\n");
        printf("3. Accept the Date\n");
        printf("4. checking boolean\n");
        printf("5. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &my_choice);

        switch (my_choice)
        {
        case 1:
            d2.initDate();
            break;
        case 2:
            d2.printDateOnConsole();
            break;
        case 3:
            d2.acceptDateFromConsole();
            d2.printDateOnConsole();
            break;
        case 4:
            if (d2.isLeapYear()) {
                    cout << "Leap Year" <<endl;
            } else {
                    cout << "Not a Leap Year" << endl;
            }
            break;  
        case 5:
            cout<<"Exiting the program......."<<endl;
            break;  
        default:
            cout<<"Invalid Choice"<<endl;
        }






    } while (my_choice != 4);
    


    return 0;
}
