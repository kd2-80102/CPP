
#include <iostream>
using namespace std;

class date
{
    int day;
    int month;
    int year;

public:
    date()
    {
        this->day = 0;
        this->month = 0;
        this->year = 0;
    }

    date(int d, int m, int y)
    {
        this->day = d;
        this->month = m;
        this->year = y;
    }

    int getDay()
    {
        return this->day;
    }

    void setDay(int d)
    {
        this->day = day;
    }
    int getMonth()
    {
        return this->month;
    }

    void setMonth(int m)
    {
        this->month = month;
    }
    int getYear()
    {
        return this->year;
    }

    void setYear(int y)
    {
        this->year = year;
    }

    void acceptDate()
    {
        cout << "Enter Date as follows : ";
        cout << "Enter day : ";
        cin >> this->day;
        cout << "Enter month : ";
        cin >> this->month;
        cout << "Enter year : ";
        cin >> this->year;
    }

    void displayDate()
    {
        cout << "Date is : ";
        cout << this->day << "/" << this->month << "/" << this->year << endl;
    }

    bool isLeapYear()
    {

        if ((this->year % 4 == 0 && this->year % 100 != 0) || (this->year % 4 == 0 && this->year % 400 == 0))
            return 1;
        else
            return 0;
    }
};

class person
{
    string name;
    string addr;
    date birth_date;

public:
    person()
    {
        this->addr = "";
        this->name = "";
    }

    person(string name, string addr, int day, int month, int year) : birth_date(day, month, year)
    {
        this->name = name;
        this->addr = addr;
    }
    string getName()
    {
        return this->name;
    }

    void setName(string name)
    {

        this->name = name;
    }

    string getAddr()
    {
        return this->addr;
    }

    void setAddr(string addr)
    {
        this->addr = addr;
    }

    date getBdate()
    {
        return birth_date;
    }

    void set_Birth_date(date birth_date)
    {

        this->birth_date = birth_date;
    }

protected:
    virtual void accept()
    {
        cout << "Enter person name :";
        getline(cin, this->name);

        cout << "Enter address : ";
        getline(cin, this->addr);

        cout << "Enter Birthdate ";
        birth_date.acceptDate();
    }

    virtual void display()
    {
        cout << "\n******************************* Person Details *******************************\n";
        cout << "Person name is : " << this->name << endl;
        cout << "Person address is : " << this->addr << endl;
        cout << "Birthdate is ";
        birth_date.displayDate();
        if (birth_date.isLeapYear() == 1)
            cout << "Year is leap year" << endl;
        else
            cout << "Year is not leap year" << endl;
    }
};

class employee : public person
{
private:
    int id;
    float sal;
    string dept;
    date doj;

public:
    employee()
    {
        this->id = 0;
        this->sal = 0;
        this->dept = "";
    }
    employee(int id, float sal, string dept, int d, int m, int y, string name, string addr, int b_d, int b_m, int b_y) : doj(d, m, y), person(name, addr, b_d, b_m, b_y)
    {
        this->id = id;
        this->sal = sal;
        this->dept = dept;
    }

    int getId()
    {
        return this->id;
    }

    void setId(int id)
    {
        this->id = id;
    }
    float getSal()
    {
        return this->sal;
    }

    void setSal(float sal)
    {
        this->sal = sal;
    }

    string getDept()
    {
        return this->dept;
    }

    void setDept(string dept)
    {
        this->dept = dept;
    }

    date getDOJ()
    {
        return this->doj;
    }

    void setDOJ(date d1)
    {
        this->doj = d1;
    }
    void accept()
    {
        person::accept();
        cout << "Enter employee id : ";
        cin >> this->id;
        cout << "Enter salary : ";
        cin >> this->sal;
        cout << "Enter department : ";
        getchar();
        getline(cin, this->dept);
        cout << "Enter date of joining : ";
        doj.acceptDate();
    }

    void display()
    {
        person::display();
        cout << "Employee id : " << this->id << endl;
        cout << "Employee salary : " << this->sal << endl;
        cout << "Employee dept : " << this->dept << endl;
        cout << "Employee joining date :";
        doj.displayDate();
        if (doj.isLeapYear() == 1)
            cout << "Year is leap year" << endl;
        else
            cout << "Year is not leap year" << endl;
        cout << "\n*****************************************************************************\n";
    }
};

int main()
{
    person *p1 = new employee();
    employee *e1 = (employee *)p1;
    e1->accept();
    e1->display();
    
    delete p1;
    p1 = NULL;
    e1 = NULL;
}
