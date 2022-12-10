#include <iostream>
using namespace std;
int main()
{
    int num,i,sum=0;
    cout<<"\n Enter a number:";
    cin>>num;
    for (i=1;i<=num;i++)
    {
        if (num % i == 0) {
            cout << i << "+";
            sum +=i;
        }
    }
    cout << "=" << sum;
    if (sum > num) {
        cout << "\nThis number is abundant.";
    } else if (sum < num) {
        cout << "\n This number is deficient.";
    } else {
        cout << "\n This number is perfect.";
    }
    return 0;
}
