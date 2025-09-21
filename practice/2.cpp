#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b";
    cin>>b;
    cout<<"Enter c";
    cin>>c;
    if ((a>b) && (a>c)){
        cout<<"largest is a"<<endl;
    } else if (b>c){
        cout<<"largest is b"<<endl;
    } else {
        cout<<"largest is c"<<endl;
    }
}