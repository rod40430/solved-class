#include <iostream>

#define nl '\n';

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    
    string a;
    int num{};

    for (int i{}; i < 3; ++i)
        {
            cin>>a;

            if (a[0] == 'F' or a[0] == 'B')
                continue;
            else
                num = stoi(a) + 3 - i;
            
            if (num % 3 and num % 5)
            {
                cout<<num<<nl;
                break;
            }
            if (num % 3 == 0)
                cout<<"Fizz";
            if (num % 5 == 0)
                cout<<"Buzz";
            break;
        }

    return 0;
}