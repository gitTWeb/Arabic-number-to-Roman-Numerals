#include <iostream>
#include <string>
#include <limits>
#include <cctype>
using namespace std;
constexpr streamsize inFlag{numeric_limits<streamsize>::max()};

string toRoman(int n) {
    const string thousands[] = {"", "M", "MM", "MMM"};
    const string hundreds[]  = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    const string tens[]      = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    const string ones[]      = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    const string fail = "failed input";
    // Extract digits
    if(n > 0 && n <4000){
        short th = (n / 1000) % 10;
        short hu = (n / 100)  % 10;
        short te = (n / 10)   % 10;
        short on =  n         % 10;
        return thousands[th] + hundreds[hu] + tens[te] + ones[on];
        }
        else{
            return fail;
        }
    }  

int main() {
    short x;
    char contin;
    cout << "convert number?: ";
    cin >> contin;
    while(toupper(static_cast<unsigned char>(contin)) == 'Y'){
        cout << "enter number: ";
        cin >> x;
        cout << "the result is: " << toRoman(x) << endl;
        cin.ignore(inFlag,'\n');
        cout << "would you like to continue?: ";
        cin >> contin;
    }
    }


