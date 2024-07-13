#include <iostream>
using namespace std;

// Class to manage items and their prices in a shop
class shop {
private:
    int item_id[100];   // Array to store item IDs
    int item_price[100]; // Array to store item prices
    int counter;         // Counter to track the number of items entered

public:
    // Initializes the counter to zero
    void in_it_counter(void) {
        counter = 0;
    }

    // Sets the price for an item by taking user input
    void set_price(void) {
        cout << "Enter ID of the item no " << counter + 1 << " : ";
        cin >> item_id[counter];
        cout << "Enter price of the item: ";
        cin >> item_price[counter];
        counter++;
    }

    // Displays all entered item IDs and their corresponding prices
    void display_price(void) {
        cout << "Displaying prices:" << endl;
        for (int i = 0; i < counter; i++) {
            cout << "<-- Item ID: " << item_id[i] << " | Price: " << item_price[i] << " -->" << endl;
        }
    }
};

// Main function to demonstrate the shop class
int main() {
    shop dukaan;         // Create an instance of shop for dukaan
    shop kirana_store;   // Create another instance of shop for kirana_store

    // Initialize counters for both shops
    dukaan.in_it_counter();
    kirana_store.in_it_counter();

    // Setting prices for items in the dukaan shop
    cout << "Enter prices for dukaan:" << endl;
    dukaan.set_price();
    dukaan.set_price();
    dukaan.set_price();

    // Displaying prices for items in the dukaan shop
    dukaan.display_price();

    // Setting prices for items in the kirana_store shop
    cout << "\nEnter prices for kirana_store:" << endl;
    kirana_store.set_price();
    kirana_store.set_price();
    kirana_store.set_price();

    // Displaying prices for items in the kirana_store shop
    kirana_store.display_price();

    return 0;
}
