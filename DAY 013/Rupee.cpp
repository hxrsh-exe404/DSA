// #include<iostream>
// using namespace std;
// int main(){
//     int amount=1300;
//     int note;
//     cout<<"Enter note value (100,50,20,1) : ";
//     cin>>note;
//     switch(note){
//         case 100:
//             cout<<" 100 notes = "<< amount/100 << endl;
//             amount=amount%100;
//         // case 50:
//             cout<<" 50 notes = "<< amount/50 << endl;
//             amount=amount%50;
//         // case 20:
//             cout<<" 20 notes = "<< amount/20 << endl;
//             amount=amount%20;
//         // case 1:
//             cout<<" 1 notes = "<< amount/1 << endl;
//             amount=amount%1;            
//         default:
//             cout<<"Invalid Note Value";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main() {
    int amount = 1330;

    switch(1) {
        case 1:
            cout << "100 ke notes = " << amount / 100 << endl;
            amount %= 100;

            cout << "50 ke notes = " << amount / 50 << endl;
            amount %= 50;

            cout << "20 ke notes = " << amount / 20 << endl;
            amount %= 20;

            cout << "1 ke notes = " << amount << endl;
            break;
    }

    return 0;
}