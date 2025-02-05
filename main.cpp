#include <iostream>

using namespace std;

int main(){
    int bb;
    int r5, r4, r3, r2;
    cin>>bb;
    cin>>r5;
    cin>>r4;
    cin>>r3;
    cin>>r2;
    if (bb>=r5)
        cout<<"Odlièan";
    else if (bb>=r4)
        cout<<"Vrlo Dobar";
    else if (bb>=r3)
        cout<<"Dobar";
    else if (bb>=r2)
        cout<<"Dovoljan";
    else
        cout<<"Nedovoljan";

    return 0;
}
