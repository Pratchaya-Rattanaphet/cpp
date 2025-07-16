#include <iostream>
using namespace std;

int main() {
    // calculator
    cout << "calculator" << endl;
    cout << "----------------------------------" << endl;
    cout << "Please type 1 to use plus function"<< endl;
    cout << "Please type 2 to use subtract function"<< endl;
    cout << "Please type 3 to use Multiply function"<< endl;
    cout << "Please type 4 to use Divide function"<< endl;
    cout << "------------------------------" << endl;
    cout << "Type your Function here = " ;
    double op,num1,num2;
    cin >> op;
    
    if(op==1) {
        cout <<"adder function " << endl;
        cout <<"enter num1 = ";
        cin >> num1;
        cout << num1 << endl;
        
        
        cout <<"enter num2 = ";
        cin >> num2;
        cout << num2 << endl;
        cout << "----------------------------------" << endl;
        cout << num1 << "+ " << num2 << " = "<<num1+num2 << endl;
        
        
        
        } 
        else if(op==2){
            cout <<"subtract function" << endl;
            cout <<"enter num1 = ";
        cin >> num1;
        cout << num1 << endl;
        
        
        cout <<"enter num2 = ";
        cin >> num2;
        cout << num2 << endl;
        cout << "----------------------------------" << endl;
        cout << num1 << " - " << num2 << " = "<<num1-num2 << endl;
            
            
        }
        else if(op==3) {
             cout <<"Multiply function" << endl;
            cout <<"enter num1 = ";
        cin >> num1;
        cout << num1 << endl;
        
        
        cout <<"enter num2 = ";
        cin >> num2;
        cout << num2 << endl;
        cout << "----------------------------------" << endl;
        cout << num1 << " * " << num2 << " = "<<num1*num2 << endl;
            
        }
         else if(op==4) {
             cout <<"Divide function" << endl;
            cout <<"enter num1 = ";
        cin >> num1;
        cout << num1 << endl;
        
        
        cout <<"enter num2 = ";
        cin >> num2;
        cout << num2 << endl;
        cout << "----------------------------------" << endl;
        cout << num1 << " / " << num2 << " = "<<num1/num2 << endl;
            
        }
        else{
            cout << "invalid data" << endl;
            
        }

    return 0;
