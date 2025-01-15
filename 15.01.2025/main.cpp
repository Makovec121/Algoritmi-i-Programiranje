#include <iostream>

using namespace std;

int main()
{
    int b1;
    int b2;
    int r;
    printf("Unesi prvi broj: ");
    cin>>b1;
    printf("Unesi drugi broj: ");
    cin>>b2;
    r=b1+b2;
    printf("%i + %i = %i, ", b1 ,b2, r);
    r=b1-b2;
    printf("%i - %i = %i, ", b1 ,b2, r);
    r=b1*b2;
    printf("%i * %i = %i, ", b1 ,b2, r);
    r=b1/b2;
    printf("%i / %i = %i, ", b1 ,b2, r);



    return 0;
}
