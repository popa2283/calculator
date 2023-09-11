#pragma once
#include "Bible.h"
class Fraction {
private:
    float numerator;
    float denominator;
    int a;
public:

    Fraction() {
        numerator = 0;
        denominator = 1;

    }


    Fraction(float num, float denom, int d) {
        numerator = num;
        denominator = denom;
        a = d;
    }


    void input() {
        cout << "Enter the number: ";
        cin >> numerator;
        cout << "Enter the number: ";
        cin >> denominator;
        cout << "Enter: 1-sum\nEnter: 2-division\nEnter: 3-subtraction\nEnter: 4-multiplication" << endl;
        cin >> a;
        system("cls");
    }
    void action() {
        if (a == 1) {

            int sum = numerator + denominator;
            cout << sum << endl;
        }
        else if (a == 2) {
            float division = numerator / denominator;
            cout << division << endl;
        }
        else if (a == 3) {
            float subtraction = numerator - denominator;
            cout << subtraction << endl;
        }
        else if (a = 4) {
            float multiplication = numerator * denominator;
            cout << multiplication << endl;
        }
    }





};