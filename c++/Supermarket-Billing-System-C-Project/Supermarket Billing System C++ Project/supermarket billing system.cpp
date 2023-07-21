#include <iostream>
#include <fstream>
using namespace std;

struct Date {
    int day, month, year;
};

class Item {
    int itemNumber;
    string name;
    Date manufacturingDate;
public:
    void addItem();
    void showItem();
};

class Amount : public Item {
    float price, quantity, taxPercentage, discountPercentage, netAmount;
public:
    void addItem();
    void calculateNetAmount();
    void showItem();
};

void Item::addItem() {
    cout << "Enter Item Number: ";
    cin >> itemNumber;
    cout << "Enter Name of the item: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Manufacturing Date (dd-mm-yy): ";
    cin >> manufacturingDate.day >> manufacturingDate.month >> manufacturingDate.year;
}

void Item::showItem() {
    cout << "Item Number: " << itemNumber << endl;
    cout << "Name of the item: " << name << endl;
    cout << "Date: " << manufacturingDate.month << "-" << manufacturingDate.day << "-" << manufacturingDate.year << endl;
}

void Amount::addItem() {
    Item::addItem();
    cout << "Enter Price in Naira: ";
    cin >> price;
    cout << "Enter Quantity: ";
    cin >> quantity;
    cout << "Enter Tax Percentage: ";
    cin >> taxPercentage;
    cout << "Enter Discount Percentage: ";
    cin >> discountPercentage;
    calculateNetAmount();
}

void Amount::calculateNetAmount() {
    float gross = price + (price * (taxPercentage / 100));
    netAmount = quantity * (gross - (gross * (discountPercentage / 100)));
}

void Amount::showItem() {
    Item::showItem();
    cout << "Net amount in Naira: " << netAmount << endl;
}

int main() {
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    ofstream fout;
    ifstream fin;
    Amount item;

    while (true) {
        cout << "\nSupermarket Billing System\n";
        cout << "===========================\n";
        cout << "1. Add Item\n";
        cout << "2. Show Item Details\n";
        cout << "3. Exit\n";
        cout << "Please Enter Your Choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1:
            fout.open("itemstore.dat", ios::binary | ios::app);
            item.addItem();
            fout.write(reinterpret_cast<char*>(&item), sizeof(item));
            fout.close();
            cout << "\nItem Added Successfully!\n";
            break;
        case 2:
            fin.open("itemstore.dat", ios::binary);
            if (!fin) {
                cout << "Error: File Not Found\n";
                break;
            }
            cout << "\n===========================\n";
            cout << "     ITEM DETAILS\n";
            cout << "===========================\n";
            while (fin.read(reinterpret_cast<char*>(&item), sizeof(item))) {
                item.showItem();
                cout << "===========================\n";
            }
            fin.close();
            break;
        case 3:
            cout << "Are you sure you want to exit (Y/N)? ";
            char yn;
            cin >> yn;
            if (yn == 'Y' || yn == 'y') {
                cout << "\nThank you! Exiting...\n";
                return 0;
            }
            break;
        default:
            cout << "Invalid option! Please try again.\n";
        }
    }

    return 0;
}
