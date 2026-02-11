#include <bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cout <<"enter the number you got :";
    cin >> marks;

if (marks >= 25 && marks <= 44) {
        cout << "Grade: E" << endl;  // Between 25 and 44 is Grade E
    } else if (marks >= 45 && marks <= 49) {
        cout << "Grade: D" << endl;  // Between 45 and 49 is Grade D
    } else if (marks >= 50 && marks <= 59) {
        cout << "Grade: C" << endl;  // Between 50 and 59 is Grade C
    } else if (marks >= 60 && marks <= 69) {
        cout << "Grade: B" << endl;  // Between 60 and 69 is Grade B
    } else if (marks >= 70) {
        cout << "Grade: A" << endl;  // 70 and above is Grade A
    } else {
        cout << "the value is invalid" << endl;

    }
    
}