#include <iostream>
#include <string.h>

using namespace std;


class Product {

    protected:
        int id;
        string title;
        double price;

    Product() {
        this->id = 0;
        this->title = "";
        this->price = 0.0;
    }

    

    void accept(){
        
    }

    void display(){

    }
};



class Book : public Product
{
private:
    string author;
public:
    Book(string id, string title, string author, double price) {
        this->id = id;
        this->title = title;
        this->author = author;
        this->price = price;

    }






};

class Tape : public Product {
private:
    double price_tape;
public:
    Tape(string id, string title, string artist, double price) {
        this->id = id;
        this->title = title;
        this->artist = artist;
        this->price = price;
    }

};









};







































};