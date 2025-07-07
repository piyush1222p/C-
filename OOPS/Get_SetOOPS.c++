#include <iostream>
#include <string>

using namespace std;

// Define a class named Car
class Car {
    private:
        // Private member variables
        string brand;
        string model;
        int year;
        double price;

    public:
        // Constructor to initialize the Car object
        Car(string brand, string model, int year, double price) {
            this->brand = brand;
            this->model = model;
            this->year = year;
            this->price = price;
        }

        // Setter for the brand variable
        void setBrand(string brand) {
            this->brand = brand;
        }

        // Setter for the model variable
        void setModel(string model) {
            this->model = model;
        }

        // Setter for the year variable
        void setYear(int year) {
            this->year = year;
        }

        // Setter for the price variable
        void setPrice(double price) {
            this->price = price;
        }

        // Getter for the brand variable
        string getBrand() {
            return brand;
        }

        // Getter for the model variable
        string getModel() {
            return model;
        }

        // Getter for the year variable
        int getYear() {
            return year;
        }

        // Getter for the price variable
        double getPrice() {
            return price;
        }

        // Method to display the details of the Car object
        void display() {
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
            cout << "Price: $" << price << endl;
        }
};

int main() {
    // Create two Car objects
    Car C1("Toyota", "Corolla", 2021, 25000);
    Car C2("Honda", "Civic", 2020, 20000);

    // Display the details of the Car objects
    C1.display();
    C2.display();

    // Update the details of the Car objects
    C1.setPrice(27000);
    C2.setYear(2021);

    // Display the updated details of the Car objects
    C1.getPrice();
    C2.getYear();

    return EXIT_SUCCESS;
}