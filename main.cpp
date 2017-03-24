#include <iostream>

using namespace std;

//Needs a better name...
struct Thing {
    double value = 0;
    char oprtn = ' ';

    void writeSelf() {
        cout << value << oprtn;
    }
};

int main() {
    int numb, i;
    double total = 0;
    //Figure out the number of things we need
    cout << "How many numbers are you going to put in? ";
    cin >> numb;
    Thing expression[numb];

    //Reading into the array
    cout << "Print your expression: ";
    for (i = 0; i < numb - 1; ++i) {
        cin >> expression[i].value >> expression[i].oprtn;
    }
    //Finishes out the for loop, since the loop doesn't read the last number in the expression
    cin >> expression[numb-1].value;

    /*Printing...*/
    for (i = 0; i < numb; ++i) {
        expression[i].writeSelf();
    }
    cout << endl;
    //Linear Algorithm for Class
    total = expression[0].value;
    for (i = 1; i < numb; ++i) {
        switch (expression[i].oprtn) {
        case '*':
            total += expression[i].value * expression[i+1].value;
            break;
        case '/':
            total += expression[i].value / expression[i+1].value;
            break;
        case '+':
            total += expression[i].value + expression[i+1].value;
            break;
        case '-':
            total += expression[i].value - expression[i+1].value;
            break;
        case ' ':
            //Grab the default value and don't default, just do nothing
            break;
        default:
            cout << "Invalid Operator." << endl;
            break;
        }
    }
    cout << total << endl;
    return 0;
}
