#include <iostream>
using namespace std;

int main() {
    float weight,height,bmi,heightcm;
    cout << "กรุณากรอกน้ำหนัก(kg)=";
    cin >> weight;
    
    cout << "กรุณากรอกส่วนสูง(เซนติเมตร)=";
    cin >> heightcm;
    height = heightcm / 100;
    bmi = weight / (height*height);
    
    cout << "ค่าBMI ของคุณคือ = "<<bmi <<endl;
    
    if (bmi < 18.5) {
        cout << "ผอม" << endl;
        
    }
    else if  (bmi >= 18.5 &&bmi <23) {
        cout << "ปกติ(สุขภาพดี)";
        
    }
    else if  (bmi >= 23 &&bmi <25) {
        cout << "น้ำหนักเกิน";
        
    }
    else if  (bmi >= 25 &&bmi <30) {
        cout << "โรคอ้วนระดับ1";
        
    }
    else if  (bmi >= 30) {
        cout << "โรคอ้วนระดับ2";
        
    }
    else {
        cout << "invalid data";
    }
}
