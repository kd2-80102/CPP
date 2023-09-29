#include <iostream>
#include <string.h>
using namespace std;

//Dependency class
class date 
{
    private:
        int day;
        int month;
        int year;
    
    public:
        date()
        {
            this->day = 0;
            this->month = 0;
            this->year = 0000;

        }
        date(int day, int month, int year):day(day), month(month),year(year){}
        int get_day()
        {
            return this->day;

        }
        void set_day(int day)
        {   
            this->day = day;

        }
        int get_month()
        {
            return this->month;

        }
        void set_month(int month)
        {
            this->month = month;

        }
        int get_year()
        {
            return this->year;

        }
        void set_year(int year)
        {
            this->year = year;

        }
        void display()
        {
            cout<<"Date is : "<<get_day()<<"/"<<get_month()<<"/"<<get_year;
        }
        void accept()
        {   
            cout<<"Enter the Day : ";
            cin >> this->day;
            cout<<"Enter the Month : ";
            cin >> this->month;
            cout<<"Enter the Year : ";
            cin>> this->year;
        }
        bool is_leap_year()
        {
            if((year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0)){
                return true;
            }
            return false;
        }


};



class employee 
{
    private:
        int id;
        float sal;
        string dept;
        date doj;

    public:
        employee() : id(0), sal(0),dept(""), doj(0, 0,0){}
        employee(int id, float sal, string dept, int day, int month, int year) : doj(day, month, year)
        {
            this->id = id;
            this->sal = sal;
            this ->dept = dept;
        }

        int get_id()
        {
            return this->id;

        }
        
        void set_id(int)
        {
            this->id = id;
        } 
        float get_sal()
        {
            return this->id;
        } 
        void set_sal(float)
        {
            this->sal = sal;
        } 
        string get_dept()
        {
            return this->dept;
        }  
        void set_dept(string dept)
        {
            this->dept = dept;
        }
        date get_joining_date()
        {
            return this->doj;
        } 
        void set_joining_date(date doj)
        {
            this->doj = doj;
        }
        void display()
        {
            cout << "\nThe details of the employee are: " << endl;
            cout << "The Id is : " << this->id << endl;
            cout << "The Salary is : " << this->sal << endl;
            cout << "The Department is : " << this->dept << endl;
            cout << "The Date of joining is : ";
            this->doj.display();
            cout << endl;
        }
        void accept()
        {
            cout << "Enter the Id: ";
            cin >> this->id;
            cout << "Enter the Salary: ";
            cin >> this->sal;
            cout << "Enter the Depatment: ";
            cin >> this->dept;
            this->doj.accept();
        }


};

class person
{
    private:
        string name;
        string addr;
        date birth_date;

    public:
        person() : name(name), addr(addr), birth_date(0, 0, 0){}
        person(string name,string addr,int day, int month, int year) : birth_date(day, month, year)
        {
            this->name = name;
            this->addr = addr;
        }
        string get_name()
        {
            return this->name;
        }
        string get_addr()
        {
            return this->addr;
        }

        date get_birth_date()
        {
            return this->birth_date;
        }
        void set_name(string name)
        {
            this->name = name;
        }
        void set_addr(string addr)
        {
            this->addr = addr;
        }
        void set_birth_date(date birth_date)
        {
            this->birth_date = birth_date;
        }       
        void display()
        {
            cout << "\nThe details of the Person are: " << endl;
            cout << "The Name is : " << this->name << endl;
            cout << "The Address is : " << this->addr << endl;
            cout << "The Date of birth is : ";
            this->birth_date.display();
            cout << endl;
        }
        void accept()
        {
            cout << "Enter the Name: ";
            cin >> this->name;
            cout << "Enter the Address: ";
            cin >> this->addr;
            this->birth_date.accept();
        }

};


int main(){
    employee e1;
    e1.accept();
    // e1.display();
    // getting The details of employee using getters
    int id;
    float sal;
    string dept;
    date doj;
    id = e1.get_id();
    sal = e1.get_sal();
    dept = e1.get_dept();
    doj = e1.get_joining_date();

    cout << "\nThe details of the employee are: " << endl;
    cout << "The Id is : " << id << endl;
    cout << "The Salary is : " << sal << endl;
    cout << "The Department is : " << dept << endl;
    cout << "The Date of joining is : ";
    doj.display();
    cout << endl;

    // Setting values for the Employee class;
    cout << "Enter the id to set as: ";
    cin >> id;
    e1.set_id(id);
    cout << "Enter the Salary to set as: ";
    cin >> sal;
    e1.set_sal(sal);
    cout << "Enter the Department to set as: ";
    cin >> dept;
    e1.set_dept(dept);
    cout << "Enter the Date of joining to set as: " << endl;
    doj.accept();
    e1.set_joining_date(doj);

    e1.display();

    //using person class
    person p;
    p.accept();

    string name, addr;
    date dob;

    name = p.get_name();
    addr = p.get_addr();
    dob = p.get_birth_date();

    cout << "\nThe details of the Person are: " << endl;
    cout << "The Name is : " << name << endl;
    cout << "The Address is : " << addr << endl;
    cout << "The Date of birth is : ";
    dob.display();
    cout << endl;

    cout << "Enter the Name to set as: ";
    cin >> name;
    p.set_name(name);
    cout << "Enter the Address to set as: ";
    cin >> addr;
    p.set_addr(addr);
    cout << "Enter the Date of Birth as: " << endl;
    dob.accept();
    p.set_birth_date(dob);

    p.display();

    return 0;






}