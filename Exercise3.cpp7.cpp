#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float c;
    const float e=2.71828;
    const float H=5.272;
    int amount;
    int Y=1;
    cout<<"\n Enter the amount in gr:";
    cin>>amount;
    while(Y<=5) {
        c = pow(e, -0.693);
        cout << "\n | "<<Y<<" | "<<amount * pow(c, Y / H)<<" | ";
        Y++;
    }
        return 0;

}
