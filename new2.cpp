// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     for(int i=1;i<=a;i++){
//       cout<<i;
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     for(int i=1;i<=10;i++){
//       cout<<(a*i)<<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int fact=1;
//    for(int i=1;i<=a;i++){
//       fact=fact*i;
//    }
//    cout<<fact;

//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int s=0;
//     int r=0;
//     while(a>0){
//       s=a%10;
//       r=s+r;
//       a=a/10;
//     }
//     cout<<r;
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int s,r;
//     while(a>0){
//       s=a%10;
//       cout<<s;
//       a=a/10;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i=0;i<5;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i=0;i<5;i++){
//         for(int j=0;j<a-i;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i=1;i<=5;i++){
//         for(int k=1;k<=a-i;k++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     for(int i=0;i<5;i++){
//         for(int j=1;j<=a*2-i;j++){
//             cout<<"*";
//         }
//         for(int k=)
//         cout<<"\n";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int count=0;
// void increment(){
//     count++;
// }
// int main(){
//     int count=7;
//     increment();
//     count++;
//     cout<<count<<endl;


// }

// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int a;
//     float c;
//     char g;
//     string j;
//     //Display size of data types
//     cout<<sizeof(a)<<endl;
//     cout<<sizeof(c)<<endl;
//     cout<<sizeof(g)<<endl;
//     cout<<sizeof(j)<<endl;

//     //Range of signed and unsigned integers
//     cout<<INT_MIN<<endl;
//     cout<<INT_MAX<<endl;
//     cout<<UINT_MAX<<endl;

//     //type-casting between different types
//     int b=66;
//     cout<<char(b)<<endl;
//     float e=7.8;
//     cout<<int(e)<<endl;


// }

// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
// int a=5;
// int result = 5<<3;
// cout<<result<<endl;
// }

// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int ar[3];
//     for(int i=0;i<3;i++){
//         cin>>ar[i];
//     }
//     if(ar[0]<ar[1] && ar[0]<ar[2]){
//         cout<<"Smallest:"<<ar[0];
//     }
//     else if(ar[1]<ar[0] && ar[1]<ar[2]){
//         cout<<"Smallest:"<<ar[1];
//     }
//     else if (ar[2]<ar[0] && ar[2]<ar[1]){
//         cout<<"Smallest:"<<ar[2];
//     }
//     if(ar[0]>ar[1] && ar[0]>ar[2]){
//         cout<<"Greatest:"<<ar[0];
//     }
//     else if(ar[1]>ar[0] && ar[1]>ar[2]){
//         cout<<"Greatest:"<<ar[1];
//     }
//     else if(ar[2]>ar[1] && ar[2]>ar[1]){
//         cout<<"Greatest:"<<ar[2];
//     }
//     for(int i=0;i<2;i++){
//         for(int j=i+1;j<3;j++)
//         if(ar[i]>ar[j]){
//             int temp=ar[i];
//             ar[i]=ar[j];
//             ar[j]=ar[i];
//         }
//     }
//     for(int i=0;i<3;i++){
//         cout<<ar[i]<<endl;
//     }
// }


// #include<iostream>
// #include<limits.h>
// #include<bitset>
// using namespace std;
// int main(){
//     int s;
//     cin>>s;
//     bitset<8>b(s);
//     cout<<b<<endl;
//     int g=11;
//     cout<<(g&s)<<endl;
//     cout<<(g|s)<<endl;
//     cout<<(g>>s)<<endl;
//     cout<<(g<<s)<<endl;
//     cout<<(g^s)<<endl;
//     cout<<(!g)<<endl;
// }


// #include<iostream>
// #include<limits.h>
// #include<bitset>
// using namespace std;
// int main(){
//     int age,sal;
//     cin>>age>>sal;
//     if(age>=18 && sal>25000){
//         cout<<"LOAN GIVEN";
//     }
//     else{
//         cout<<"LOAN NOT GIVEN";
//     }
// }

#include<iostream>
#include<limits.h>
#include<bitset>
using namespace std;
int main(){
    int a;int d;int c;int e;int f;int g;
    cin>>a>>c>>d>>e>>f>>g;
    c+=a;
    d-=a;
    e*=a;
    f/=a;
    g%=a;
    cout<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" ";
}
