//topics:
    //resize function
    //is_sorted function

#include<bits/stdc++.h>
#define endl '\n'

using namespace std ;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int>v(5,2);
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

//  v.resize(10);  see the output
    v.resize(10,5); //usnig this see the output
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    if(is_sorted(v.begin(),v.end()))cout<<"Sorted"<<endl;
    else cout<<"Not Sorted"<<endl;

    cout<<endl;

    return 0;
}

