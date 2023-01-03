#include <iostream>
#include <string.h>
using namespace std;

/*
-> Class does not occupies any space
-> Object is an instance of a class which takes memory
*/

class Product
{
private:
    int id;
    char name[100];
    int mrp;
    int selling_price;

public:
    // Constructor
    Product()
    {
        cout << "Hi welcome to product app" << endl;
    }

    // Parameterised Constructor : Constructor Overloading
    Product(int id, char *name, int mrp, int selling_price)
    {
        this->id = id;
        strcpy(this->name, name);
        this->mrp = mrp;
        this->selling_price = selling_price;
    }

    // Copy Constructor
    Product(Product &X)
    {
        id = X.id;
        strcpy(name, X.name); // Array
        mrp = X.mrp;
        selling_price = X.selling_price;
    }

    // Setters
    void setMrp(int price)
    {
        mrp = price;
    }
    void setSellingPrice(int price)
    {
        if (price > mrp)
            selling_price = mrp;
        else
            selling_price = price;
    }

    // Getters
    int getMrp()
    {
        return mrp;
    }
    int getSellingPrice()
    {
        return selling_price;
    }

    void showDetails()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Selling Price: " << selling_price << endl;
        cout << "MRP: " << mrp << endl;

        cout << "-------------" << endl;
    }
};

int main()
{
    Product camera;

    camera.setMrp(300);
    camera.setSellingPrice(200);

    cout << "The MRP of the Product is: "
         << "₹" << camera.getMrp() << endl;

    cout << "The selling price of the Product is: "
         << "₹" << camera.getSellingPrice() << endl;

    Product laptop(101, "MacbookAir2", 120000, 96000);
    laptop.showDetails();

    // Copy Constructor
    Product laptop_two(laptop);
    laptop_two.showDetails();

    Product laptop_three = laptop;
    laptop_three.showDetails();
}

/*
-> Constructor: Goal is to construct the object
    - Always Public
    - No return type
    - Same name as class
*/