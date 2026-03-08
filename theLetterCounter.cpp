#include <iostream>
using namespace std;

int The_Letter_Counter(string str, char c);

main () {
    cout << The_Letter_Counter("xultpaajcxitltlxaarpjhtiwtgxktghidhipxciwtvgtpilpitghlxiwiwtxgqadds.", 'z');
}

int The_Letter_Counter(string str, char c)
{
    int counter = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == tolower(c) | str[i] == toupper(c)) {
            counter++;
        }
    }
    return counter;
}
