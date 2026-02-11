#include<bits/stdc++.h>
using namespace std;
int main(){
    char grade ='A' &&'B' &&'C';
    cout<<"enter the grade : ";
    cin>>grade;
    switch (grade){
        case 'A':
            cout<<"excellent";
            break;
        case 'B':
            cout<<"good";
            break;
        case 'C':
            cout<<"average";
            break;
        default:
             cout<<"invalid";
             break;
    }       
return 0;
 
}