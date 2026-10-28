#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int main() {
    // Get the current local date and time
    time_t now = time(nullptr);
    tm *localTime = localtime(&now);

    if (localTime == nullptr) {
        cout << "Unable to get the local time." << endl;
        return 1;
    }

    int hour = localTime->tm_hour;

    // Display the current local time
    cout << "\n====================================\n";
    cout << "       YOUR LOCAL TIME               \n";
    cout << "====================================\n";

    cout << "Date: "
         << put_time(localTime, "%d %B %Y") << endl;

    cout << "Time: "
         << put_time(localTime, "%I:%M:%S %p") << endl;

    cout << "====================================\n\n";

    // Wish according to the local time
    if (hour >= 5 && hour < 12) {
        cout << "Good Morning! ☀️" << endl;
        cout << "Have a wonderful day ahead!" << endl;
    }
    else if (hour >= 12 && hour < 17) {
        cout << "Good Afternoon! 🌤️" << endl;
        cout << "Keep smiling and keep working hard!" << endl;
    }
    else if (hour >= 17 && hour < 21) {
        cout << "Good Evening! 🌆" << endl;
        cout << "Relax and enjoy your evening!" << endl;
    }
    else {
        cout << "Good Night! 🌙" << endl;
        cout << "Rest well and have sweet dreams!" << endl;
    }

    cout << "\n====================================\n";

    return 0;
}