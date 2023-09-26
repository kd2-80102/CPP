#include <iostream>
using namespace std;

class Time {
    private:
        int hours;
        int minutes;
        int seconds;
    
    public:
        Time() {
            hours = 0;
            minutes = 0;
            seconds = 0;
        }
        Time(int hours,int minutes,int seconds){
            this->hours = hours;
            this->minutes = minutes;
            this->seconds = seconds;
        }
        int getHour(){
            return hours;
        }
        int getMinute(){
            return minutes;
        }
        int getSeconds(){
            return seconds;
        }
        void printTime(){
            cout<<"Time is : "<<hours<<":"<<getMinute()<<":"<<getSeconds()<<endl;
        }
        void setHour(int hours){
            cout<<"Enter hours : ";
            cin >> hours;
            this->hours = hours;
        }
        void setMinute(int minutes){
            cout<<"Enter minutes : ";
            cin>> minutes;
            this->minutes = minutes;
        }
        void setSeconds(int seconds){
            cout<<"Enter seconds : ";
            cin >> seconds;
            this->seconds = seconds;
        }

};

int main() {

    int times_you_want;

    cout<<"Enter How many time you want: ";

    cin >> times_you_want;

    Time **tz = new Time *[times_you_want];
    // Yeh **arr will store the array of pointers in heap ka address and this array og pointers ka har indes will point to an individual object which contain real and imaginary........




    for(int i=0;i<times_you_want;i++){
        tz[i] = new Time();
        //Yeh array ke har index par object banayayega and jaise real and imagainary wala part ka address store karaega matlab hara array ka index will point to object
    }

    for(int i=0;i<times_you_want;i++){
        tz[i] -> setHour(05);
        tz[i] -> setMinute(45);
        tz[i] -> setSeconds(35);
    }


    for(int i=0;i<times_you_want;i++){
        tz[i] -> printTime();
    }


    for(int i=0;i<times_you_want;i++){
        delete tz[i];
    }

    delete[] tz;

    return 0;


    


}