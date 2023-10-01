#include <iostream>

using namespace std;



enum account_type { SAVING, CURRENT, DMAT};


class account {
    private :
        int id;
        account_type type;
        double balance;

    public:
        account(){

        }
        account(int id,account_type type,double balance){
            this->id = id;
            this->type = type;
            this->balance = balance;

        }
        void accept(){
            int choice;

            cout << "Please Enter the Acc Id : ";
            cin >> this->id;

            cout << "Please Enter the account type (0 for Saving , 1 for current , 2 for dmat) : ";
            cin >> choice;

            this->type = account_type(choice);

            cout << "Please Enter the starting balance : ";
            cin >> this->balance;
        }
        void display(){

        }
        void set_id(){

        }
        void set_type(account_type type){

        }
        int get_id(){

        }
        account_type get_type(){
            
        }
        double get_balance(){

        }
        void deposit(double amount){

        }
        void withdraw(double amount){

        }

};





class insufficient_funds{
    private:
        int accid;
        double cur_balance;
        double withdraw_amount;
    
    public :
        insufficient_funds(int accid,double cur_balance,double withdraw_amount){

        }
        void display(){

        }
};


enum Emenu
{
    EXIT,
    DEPOSIT_THE_MONEY,
    WITHDRAW_THE_MONEY,
    DISPLAY_THE_MONEY
};

Emenu menu(){
    int choice;
    cout<<"***********************************" <<endl;
    cout << "1. EXIT " << endl;
    cout << "2. Deposit the money" << endl;
    cout << "3. Withdraw the money" << endl;
    cout << "4. Display the money" << endl;
    cout << "Enter your choice = ";
    cin >> choice;
    cout << "*******************" << endl;
    return choice;
}


int main() {

    account arr[5];

    for(int i = 0;i<5;i++){
        cout<<"Enter the Account Details "<< i << " = "<<endl;
        arr[i].accept();
    }


    Emenu choice;

    while((choice = menu()) != EXIT )
    {
        switch (choice)
        {
        case DEPOSIT_THE_MONEY:
            cout<<
            









        }













    }





    




}





















};


int main() {


class account_type {}



















    return 0;
}