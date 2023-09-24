#include <iostream>
using namespace std;

class tollbooth {
    private:
        unsigned int tcars;
        double tmoney;
        int nonpayingcars;
        int payingcars;

    public:
        tollbooth(){
            tcars = 0;
            tmoney = 0;
            payingcars = 0;
            nonpayingcars = 0;

        }

        void payingCar() {
            tcars = tcars + 1;
            payingcars = payingcars + 1;
            tmoney = tmoney + 0.50;

        }

        void nopayCar(){
            tcars = tcars + 1;
            nonpayingcars = nonpayingcars + 1;
        }

        void printOnConsole(){
            cout<<"Number of paying cars : "<<payingcars<<endl;
            cout<<"Number of non paying cars : "<<nonpayingcars<<endl;
            cout<<"Total Money collected : "<<tmoney<<endl;
            cout << "Total Cars: " <<tcars<<endl;
        }




};



int main() {
    tollbooth t1;

    int choice;

    do {
        cout << "Menu:" << endl;
        cout << "1. Car Paid Toll" << endl;
        cout << "2. Car Did Not Pay Toll" << endl;
        cout << "3. Display Totals" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                t1.payingCar();
                cout << "Car paid toll." << endl;
                break;
            case 2:
                t1.nopayCar();
                cout << "Car did not pay toll." << endl;
                break;
            case 3:
                t1.printOnConsole();
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;

}