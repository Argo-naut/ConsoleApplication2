// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    cout << "Hello World!\n";


    int x;
    string answer;
    double y = 2.5;
    string f = "code";

    int bool1 = 5;
    int bool2 = 35;

    cout << "Select an Integer:\n>";
    cin >>  x;
 
    cout << "\nThis is the number that was selected :\n>" << x;

     if (bool1 < bool2)
            cout << "\n Bool1 is smaller than bool2";
        else
            cout << "\n\n bool1 is not smaller than bool2";

    cout << "\n\n Tell me what is the password pleaseee??\n>";
           

    bool loopbreaker = true;
    
    while (loopbreaker) {
        cin >> answer;
        if (answer == f) {
            cout << "\n\n \t\t\t\t\t You are correct about the code young padawan\n\n";
            cin.ignore();
            getchar();

            break;
        }
        else {
            cout << "\n \t\t\t\t You are wrong, go back to train buddy\n";
        }
    }
        
   

        // this is not what i wanted to dp
            
          
    return 0;
    //The Answer is this...
}

