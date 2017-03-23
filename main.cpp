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
    //Figure out the number of things we need
    cout << "How many numbers are you going to put in? ";
    cin >> numb;
    Thing expression[numb], midway[numb], finish[numb];

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

    /*Attempting to do order of operations
    for (i = 0; i < numb; ++i) {
        switch (expression[i].oprtn) {
        case '*':
            midway[i].value = expression[i].value * expression[i+1].value;
            midway[i].oprtn = expression[i+1].oprtn;
            break;
        case '/':
            midway[i].value = expression[i].value / expression[i+1].value;
            break;
        default:
            break;
        }
    }

    //Print the midway array to see what is there
    cout << endl;
    for (i = 0; i < numb; ++i) {
        midway[i].writeSelf();
    }*/
    return 0;
}
