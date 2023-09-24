#include <iostream>
#include <string.h>
using namespace std;

class Volume {
    private:
        int length;
        int width;
        int height;

    public:

        Volume(int l,int w,int h){
            length = l;
            width = w;
            height = h;
        }

        void display() {
            cout<<"Length is : "<<length<<endl;
            cout<<"Width is : "<<width<<endl;
            cout<<"Height is : "<<height<<endl;
        }


};


int main() {
    Volume V1(2,3,4);

    int choice;

    do
    {   
        cout<<"Menu Bar"<<endl;
        cout<<"1.Display the volume : "<<endl;
        cout<<"2.Exit"<<endl;
        cout<<"Select your choice : ";
        cin>>choice;


        switch (choice)
        {
        case 1:
            V1.display();
            break;
        case 2:
            cout<<"You are exited"<<endl;
            break;
        default:
            cout<<"Invalid choice Pls Try Again........";
            break;
        }

    } while (choice != 3);
    

    return 0;
    


}