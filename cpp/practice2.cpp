#include <iostream>
using namespace std;
int main(){
    cout<<(bool)3+1<<"\n";
    cout<<(23.5+2+'A')<<endl;
    int a= 5;
    ++a;
    cout<<a<<"\n";
    cout<<((3>5) && (5>4)) <<endl;
    cout<<((3>4) || (5>1))<<endl;
    cout<<!(3>5)<<endl;
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if (age>=18){
        cout<<"Can vote"<<endl;
    }
    if (age>=45){
        cout<<"Contest elections"<<endl;

    } else{
        cout<<"Cannot vote";
    }
    return 0;

    } 
