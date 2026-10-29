#include <iostream>
using namespace std;

class Bill {
public:
    // Bill for one item (quantity * unit price)
    double calculateBill(int quantity, double unitPrice) {
        return quantity * unitPrice;
    }

    // Bill for two items (quantity1*price1 + quantity2*price2)
    double calculateBill(int qty1, double price1, int qty2, double price2) {
        return (qty1 * price1) + (qty2 * price2);
    }

    // Bill with discount (bill amount after applying discount percentage)
    double calculateBill(double billAmount, double discountPercent) {
        double discount = (billAmount * discountPercent) / 100.0;
        return billAmount - discount;
    }
};

int main() {
    Bill bill;

    // Bill for one item: 5 items at 50 per item
    double bill1 = bill.calculateBill(5, 50);
    cout << "Bill for 1 item (5 x 50): " << bill1 << endl;

    // Bill for two items: (3 x 100) + (2 x 75)
    double bill2 = bill.calculateBill(3, 100, 2, 75);
    cout << "Bill for 2 items (3x100 + 2x75): " << bill2 << endl;

    // Bill with 10% discount on 1000
    double bill3 = bill.calculateBill(1000, 10);
    cout << "Bill with 10% discount on 1000: " << bill3 << endl;

    return 0;
}
