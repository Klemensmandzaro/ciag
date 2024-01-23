#include <iostream>
using namespace std;
int a[10]={0,0,0,0,0,0,0,0,0,0};
int main() {
    for (int i=0; i<10; i++)
    {
        cin>>a[i];
    }
    for (int i=0; i<9; i++)
    {
        if (a[i]>=a[i+1])
        {
            cout<<"FALSE";
            return 0;
        }
    }
    cout<<"TRUE";
    return 0;
}


