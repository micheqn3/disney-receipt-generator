#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    //Time function to initiate random number
    unsigned seed=time(0);
    srand(seed);

    //Assigned variables
    const double price= 154.50; // Price of a Disney ticket on the weekend
    string name1;
    string name2;
    string name3;
    double paid1;
    double paid2;
    double paid3;
    int t1= rand( ) % 100 + 1; // Gets a random ticket number between 1-100
    int t2= rand( ) % 100 + 1;
    int t3= rand( ) % 100 + 1;

    // Output
    cout << "*******************************************";
    cout << endl;
    cout << "#1 PURCHASE" << endl;
    cout << left << setw(23) << "     Enter name";
    cout << ": ";
    getline(cin, name1);
    cout << endl;
    cout << setw(23) << "     Enter amount paid";
    cout << ": ";
    cin >> paid1;
    while (paid1 < 154.50) { // Validation for if the user enters a number less than the price of the ticket
        cout << "The ticket costs $154.50 Please enter a valid value.";
        cin >> paid1;
    }
    cin.ignore();
    cout << endl;

    cout << "#1 RECEIPT";
    cout << endl;
    cout << left << setw(23) << "     Name" << ": ";
    cout << name1 << endl;
    cout << setw(23) << "     Ticket number" << ": ";
    cout << t1 << endl;
    cout << setw(23) << showpoint << fixed;
    cout << setprecision(2) << "     Amount paid";
    cout << ": ";
    cout << paid1 << endl;
    cout << setw(23) << "     Change";
    cout << ": " << (paid1 - price) << endl;

    cout << "*******************************************";
    cout << endl;
    cout << "#2 PURCHASE" << endl;
    cout << left << setw(23) << "     Enter name";
    cout << ": ";
    getline(cin, name2);
    cout << endl;
    cout << setw(23) << "     Enter amount paid";
    cout << ": ";
    cin >> paid2;
    while (paid2 < 154.50) { 
        cout << "The ticket costs $154.50 Please enter a valid value.";
        cin >> paid2;
    }
    cin.ignore();
    cout << endl;

    cout << "#2 RECEIPT";
    cout << endl;
    cout << left << setw(23) << "     Name" << ": ";
    cout << name2 << endl;
    cout << setw(23) << "     Ticket number" << ": ";
    cout << t2 << endl;
    cout << setw(23) << showpoint << fixed;
    cout << setprecision(2) << "     Amount paid";
    cout << ": ";
    cout << paid2 << endl;
    cout << setw(23) << "     Change";
    cout << ": " << (paid2 - price) << endl;

    cout << "*******************************************";
    cout << endl;
    cout << "#3 PURCHASE" << endl;
    cout << left << setw(23) << "     Enter name";
    cout << ": ";
    getline(cin, name3);
    cout << endl;
    cout << setw(23) << "     Enter amount paid";
    cout << ": ";
    cin >> paid3;
    while (paid3 < 154.50) { 
        cout << "The ticket costs $154.50 Please enter a valid value.";
        cin >> paid3;
    }
    cin.ignore();
    cout << endl;

    cout << "#3 RECEIPT";
    cout << endl;
    cout << left << setw(23) << "     Name" << ": ";
    cout << name3 << endl;
    cout << setw(23) << "     Ticket number" << ": ";
    cout << t3 << endl;
    cout << setw(23) << showpoint << fixed;
    cout << setprecision(2) << "     Amount paid";
    cout << ": ";
    cout << paid3 << endl;
    cout << setw(23) << "     Change";
    cout << ": " << (paid3 - price) << endl;

    return 0;
}
