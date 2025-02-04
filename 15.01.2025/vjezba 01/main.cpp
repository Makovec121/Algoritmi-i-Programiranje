#include <iostream>

using namespace std;

int main(){
    int b, r5, r4, r3, r2;
        cin>>b;
        cin>>r5;
        cin>>r4;
        cin>>r3;
        cin>>r2;
    if (b>=r5)
        cout<<"Odlièan";
    if (b>=r4 && b<r5)
        cout<<"Vrlo Dobar";
    if (b>=r3&&b<r4)
        cout<<"Dobar";
    if (b>=r2&& b<r3)
        cout<<"Dovoljan";
    if (b<r2)
        cout<<"Nedovoljan";




    return 0;
}
