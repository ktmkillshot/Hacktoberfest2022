// Solution of problem https://codeforces.com/contest/112/problem/A

#include <iostream>
 
using namespace std;
 
int main()
{
    string in1, in2;
    int x, y;
    cin >> in1>>in2;
    for (int i = 0; i < in1.length(); i++)
    {
        x = int(in1[i]);
        if (x > 90)
        {
            x = x - 32;
        }
        y = int(in2[i]);
        if (y > 90)
        {
            y = y - 32;
        }
        if (x<y){
            cout<<-1;
            return 0;
        } else if (x>y){
            cout<<1;
            return 0;
        }
    }
    cout<<0;
    return 0;
}
