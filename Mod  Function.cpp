#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Write C++ code here
    cout << "Calculator" << endl;
    cout << "--------------------------" << endl;
    cout << "Please type 1 to use plus function"<< endl;
    cout << "Please type 2 to use subtract function"<< endl;
    cout << "Please type 3 to use Multiply function"<< endl;
    cout << "Please type 4 to use Divide function"<< endl;
    cout << "Please type 5 to use Modulation function"<< endl;
    cout << "What Function Do you wanna use" << endl;
    
    int op;
    int num1,num2;
    cin >> op;
    
    if(op==1) {
        cout  << "plus function";
        cout << "enter num1 = ";
        cin >> num1;
        
        cout << "enter num2 = ";
        cin >> num2;
        cout << "The result is "<< num1 + num2 ;
        
        
    }
    else if(op==2) {
        cout  << "minus function";
        cout << "enter num1 = ";
        cin >> num1;
        
        cout << "enter num2 = ";
        cin >> num2;
        cout << "The result is "<< num1 - num2 ;
    }
      else if(op==3) {
        cout  << "Multiply function";
        cout << "enter num1 = ";
        cin >> num1;
        
        cout << "enter num2 = ";
        cin >> num2;
        cout << "The result is "<< num1 * num2 ;
      }
     else if(op==4) {
        cout  << "Divide function";
        cout << "enter num1 = ";
        cin >> num1;
        
        cout << "enter num2 = ";
        cin >> num2;
        cout << "The result is "<< num1 / num2 ;
     }
        else if (op==5) {
             cout  << "Modulation function" << endl;
             
        cout << "enter num1 = ";
        cin >> num1;
        
        cout << "enter num2 = ";
        cin >> num2;
        cout << "The result is "<< num1 % num2  ;
        }
        else {
            cout << "Valid Function";
            
        }
     return 0;
}
