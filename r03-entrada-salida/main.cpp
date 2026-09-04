#include <iostream>
#include <string>
#include <limits>

using namespace std;

int leerEnRango(string msg, int low, int high) {
    int n;
    while(true) {
        cout << msg;
        bool ok = static_cast<bool>(std::cin >> n);
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        if(ok == true && n >= low && n <= high) {
            return n;
        }
    
    }
}

int main() {
    int edad = leerEnRango("Value between 5 and 60: ", 5, 60);

    cout << "Valid! " << edad << endl;
}