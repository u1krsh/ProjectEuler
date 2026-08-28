#include <bits/stdc++.h>
using namespace std;

string ones[] = {"", "one", "two", "three", "four", "five", "six", "seven",
                  "eight", "nine", "ten", "eleven", "twelve", "thirteen",
                  "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string tens[] = {"", "", "twenty", "thirty", "forty", "fifty",
                  "sixty", "seventy", "eighty", "ninety"};

string numberToWords(int n) {
    if (n == 1000) return "onethousand";
    string s = "";
    if (n >= 100) {
        s += ones[n / 100] + "hundred";
        if (n % 100 != 0) s += "and";
        n %= 100;
    }
    if (n >= 20) {
        s += tens[n / 10];
        n %= 10;
        if (n > 0) s += ones[n];
    } else if (n > 0) {
        s += ones[n];
    }
    return s;
}

int main() {
    int total = 0;
    for (int i = 1; i <= 1000; i++) {
        total += numberToWords(i).length();
    }
    cout << total << endl;
    return 0;
}