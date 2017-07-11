#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, index = -1, flag = 0;
    cin>>n>>m;
    vector <int> ar(n);
    for(int i = 0; i < n; i++) {
        cin>>ar[i];
    }
    
    for(int i = 0; i < n; i++) {
        if(m == ar[i]) {
            index = i+1;
        }
    }
    
    cout<<index;
    
    return 0;
}

