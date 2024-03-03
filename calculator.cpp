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
void temperature();
void geometry();
int currentYear();

// IV. Entry point
int main()
{
    string_t app = "calculator++";
    string_t version = "0.1.1";

    // Terminal display
    terminalStart(app, version);
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
    return;
}
void temperature()
{
    return;
}
void geometry()
{
    return;
}