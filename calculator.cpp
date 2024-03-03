// I. Header files
#include <iostream>
#include <cmath>
#include <ctime>

// II. Streamlined variables
using string_t = std::string;
using std::cin;
using std::cout;

// III. Declared user functions
// - App Details
void terminalStart(string_t app, string_t ver);
void terminalFin();
int currentYear();

// - Calculator functions
void arithmetic();
void geometry();
void unitConversion();

// IV. Entry point
int main()
{
    string_t app = "calculator++";
    string_t version = "0.1.3";
    int choice = 0;

    // Terminal display
    terminalStart(app, version);

    // Menu prompt with conditional data handling
    do
    {
        cout << "\n*********************\n";
        cout << "Select menu option:";
        cout << "\n*********************\n";
        cout << "1. Arithmetic\n";
        cout << "2. Geometry\n";
        cout << "3. Unit conversion\n";
        cout << "4. Exit\n";
        cin >> choice;

        // Clears input buffer, preventing program from breaking if user enters an invalid value
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice)
        {
        case 1:
            arithmetic();
            break;
        case 2:
            geometry();
            break;
        case 3:
            unitConversion();
            break;
        case 4:
            cout << "Goodbye.\n";
            break;
        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 4);

    terminalFin();

    return 0;
}

// V. Function definitions
// - App details
void terminalStart(string_t app, string_t ver)
{
    int year = currentYear();
    string_t line1 = app + " v" + ver + "\n";

    cout << "******************************************\n";
    cout << line1;
    cout << "(c) " << year << " Edwin Escobar\n";
    cout << "https://github.com/escowin/calculator-plus\n";
    cout << "******************************************\n\n";
}

void terminalFin()
{
    cout << "\n\nfin.\n";
    cout << "******************************************\n\n";
    return;
}

int currentYear()
{
    // The current time in seconds since the Unix Epoch
    std::time_t currentTime = std::time(nullptr);
    // Converts current time to tm structure
    std::tm *timeInfo = std::localtime(&currentTime);
    // Extracts current year from tm structure
    int currentYear = timeInfo->tm_year + 1900;
    return currentYear;
}

// - Calculator
void arithmetic()
{
    int choice;
    double x;
    double y;
    double z;

    do
    {
        cout << "\n*********************\n";
        cout << "Arithemtic calculator";
        cout << "\n*********************\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "0. Return to previous menu\n";
        cin >> choice;

        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice)
        {
        case 1:
            cout << "\nX + Y = Z\n";
            cout << "enter X: ";
            cin >> x;
            cout << "enter Y: ";
            cin >> y;

            z = x + y;
            cout << x << " + " << y << " = " << z << '\n';
            break;
        case 2:
            cout << "\nX - Y = Z\n";
            cout << "enter X: ";
            cin >> x;
            cout << "enter Y: ";
            cin >> y;

            z = x - y;
            cout << x << " - " << y << " = " << z << '\n';
            break;
        case 3:
            cout << "\nX * Y = Z\n";
            cout << "enter X: ";
            cin >> x;
            cout << "enter Y: ";
            cin >> y;

            z = x * y;
            cout << x << " * " << y << " = " << z << '\n';
            break;
        case 4:
            cout << "\nX / Y = Z\n";
            cout << "enter X: ";
            cin >> x;
            cout << "enter Y: ";
            cin >> y;

            z = x / y;
            cout << x << " / " << y << " = " << z << '\n';
            break;
        case 0:
            return;
        default:
            cout << "Invalid choice\n";
        }
    } while (choice != 0);
}

void geometry()
{
    cout << "geometry calculator";
}

void unitConversion()
{
    cout << "unit conversion calculator";
}