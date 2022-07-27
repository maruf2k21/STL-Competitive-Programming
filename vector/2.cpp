//important basic on iterator :
    //s.begin() is a pointer and locates the memory of the first element
    //*s.begin is (the value of) the first element

#include<bits/stdc++.h>
#define endl '\n'
using namespace std ;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    set<int>s;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    int value = *(++s.begin());

    if(s.size()==1)cout<<"NO"<<endl;
    else
    {
      cout<<value<<endl;
//    cout<<*(++s.begin())<<endl;
    }

    return 0;
}

