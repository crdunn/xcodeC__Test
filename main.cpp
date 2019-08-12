//
//  main.cpp
//  C__Test
//
//  Created by Charles Dunn on 7/11/19.
//  Copyright © 2019 Charles Dunn. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    const float x = .2;
    int y;
    string addendum = "(Be nice to your wait staff)";
    char choice;
    bool repeat = true;
    float totals[2];
    
    cout << "Do you want to calculate a tip? (y/n)";
    cin >> choice;
    
    do {
        
        switch (choice) {
            case 'y':
                cout << "Enter Your meal's cost, Rounded up \n" + addendum + ": ";
                cin >> y;
                cout << "\nYour tip should be: " << ceil(y*x) << "\nDid I have to round up? ";
                totals[0]=y;
                totals[1]=y*x;
                if (ceil(x*y) > x*y){
                    cout << "Yes";
                } else if (ceil(x*y) == x*y){
                    cout << "No";
                } else {
                    cout << "How did you get here?";
                }
                cout << totals;
                cout<< "\nDo you want to calculate another tip? (y/n)";
                cin >> choice;
                break;
            case 'n':
                cout<< "Bye!";
                repeat = false;
                break;
            default:
                cout<<"I don't recognize that command";
                cout<< "\nDo you want to calculate another tip? (y/n)";
                cin >> choice;
                break;
        }
    } while (repeat);
    cout << "\nHello C++!\n";
    return 0;
}

