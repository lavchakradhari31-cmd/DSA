#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main() {
    // Get the current local date and time
    time_t now = time(nullptr);
    tm *localTime = localtime(&now);

    char date[50];
    strftime(date, sizeof(date), "%d-%m-%Y", localTime);

    // Sample gold prices per 10 grams (in INR)
    double gold24K = 144000.00;
    double gold22K = 132000.00;

    cout << "====================================\n";
    cout << "       DAILY GOLD PRICE REPORT\n";
    cout << "====================================\n";

    cout << "Date: " << date << "\n";
    cout << "Currency: Indian Rupees (INR)\n\n";

    cout << fixed << setprecision(2);

    cout << "24K Gold (10 grams): Rs. "
         << gold24K << "\n";

    cout << "22K Gold (10 grams): Rs. "
         << gold22K << "\n";

    cout << "\nNote: These are sample prices.\n";
    cout << "Actual gold prices change daily.\n";

    cout << "====================================\n";

    return 0;
}