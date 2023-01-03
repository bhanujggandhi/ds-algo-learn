#include <iostream>
#include <string.h>
using namespace std;

class Product
{
private:
    int id;
    char *name;
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
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        this->mrp = mrp;
        this->selling_price = selling_price;
    }

    // Copy Constructor
    Product(Product &X)
    {
        id = X.id;
        // Deep copy for pointers
        this->name = new char[strlen(X.name + 1)];
        strcpy(name, X.name); // Array
        mrp = X.mrp;
        selling_price = X.selling_price;
    }

    // Copy Assignment Operator
    void operator=(Product &X)
    {
        cout << "Copy assignment operator" << endl;
        id = X.id;
        // Deep copy for pointers
        this->name = new char[strlen(X.name + 1)];
        strcpy(name, X.name); // Array
        mrp = X.mrp;
        selling_price = X.selling_price;
    }

    // Destructor
    ~Product()
    {
        cout << "Bye from " << name << endl;
        if (name != NULL)
        {
            delete[] name;
            name = NULL;
        }
    }

    // Setters
    void
    setMrp(int price)
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

    void setName(char *name)
    {
        strcpy(this->name, name);
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
    Product camera(101, "GoProHero9", 28000, 26000);
    Product old_camera;

    old_camera = camera;

    old_camera.setName("GoPro8");
    old_camera.setSellingPrice(1000);

    camera.showDetails();
    old_camera.showDetails();
}