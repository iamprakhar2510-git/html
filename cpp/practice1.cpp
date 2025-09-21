#include <iostream>
using namespace std;
int main(){
    float science;
    float maths;
    float hindi;
    cout<<"science=";
    cin>>science;
    cout<<"maths=";
    cin>>maths;
    cout<<"hindi=";
    cin>>hindi;
    float average = (science+maths+hindi)/3;
    cout<<"average="<<average<<"\n";
    return 0;

}