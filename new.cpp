// #include<iostream>
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     if(x%2==0){
//         cout<<"Even";
//     }
//     else{
//         cout<<"Odd";
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
            cout<<"Composite";
        }
        else{
            cout<<"Prime";
        }
    }
    return 0;
}