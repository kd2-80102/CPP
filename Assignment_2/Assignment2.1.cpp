#include <iostream>
#include <string.h>

using namespace std;

namespace Nstudent
{
    class Student {
        private:
            int rollNo;
            string name;
            double marks;

        public:
            void initStudent() {
                rollNo = 0;
                name = "";
                marks = 0.0;
            }

            void printStudentOnConsole() {
                cout << "Roll No: " << rollNo << endl;
                cout << "Name: " << name << endl;
                cout << "Marks: " << marks << endl;
            }

            void acceptStudentFromConsole() {
                cout << "Enter Roll No: ";
                cin >> rollNo;
                cin.ignore();
                //helps prevent unwanted behavior by clearing any residual newline characters in the input buffer before reading the next line of text.

                cout << "Enter Name: ";
                getline(cin,name);

                cout << "Enter Marks: ";
                cin >> marks;
            }
    };
}
using namespace Nstudent;

int main()
{
    Student s1;
    int choice;

    do {
        cout << "Menu:" << endl;
        cout << "1. Initialize the Student" << endl;
        cout << "2. Print the Student" << endl;
        cout << "3. Accept the Student" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                s1.initStudent();
                break;
            case 2:
                s1.printStudentOnConsole();
                break;
            case 3:
                s1.acceptStudentFromConsole();
                s1.printStudentOnConsole();
                break;
            case 4:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Wrong choice Pls Try again" << endl;
        }
    } while (choice != 4);

    return 0;
}
