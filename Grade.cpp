// Online C++ compiler to run C++ program online
#include <iostream>
using  namespace std;

int main() {

    int score;
    cout << "กรอกคะแนนของคุณ= ";
    cin >> score;
    if (score >= 80) {
        cout << "your grade is 4";
    }
    else if (score >= 75) {
        cout << "your grade is 3.5";
    }
  
    else if (score >= 70) {
        cout << "your grade is 3";
    }
    else if (score >= 60) {
        cout << "your grade is 2.5";
    }
    else if (score >= 60) {
        cout << "your grade is 2";
    }
    else if (score >= 55) {
        cout << "your grade is 1.5";
    }
    else if (score >= 50) {
        cout << "your grade is 1";
    }
    else if (score <= 50) {
        cout << "your grade is 0";
    }
   else {
       cout  << "valid";
   }
   
   
    return 0;
}
