//topics:
    //reverse function
    //for each loop
    //different ways of printing frist element of the vector
    //different ways of printing last element of the vector

#include<bits/stdc++.h>
#define endl '\n'
using namespace std ;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    reverse(v.begin(),v.end()); // starting and ending range

    for(auto u:v) // it is called for each loop
    {
        cout<<u<<" ";
    }
    cout<<endl;

    cout<<"fist element = "<<*v.begin()<<endl; // prints first element of the vector
    cout<<"firsr element = "<<v.front()<<endl; // also prints first element of the vector

    cout<<"last element = "<<v.back()<<endl; // prints last element of the vector
    cout<<"last element = "<<*(--v.end())<<endl; // prints last element of the vector

    v.erase(v.begin()); // deletes first element(basically it can delete any indexed elemnet or any ranged element)
                        //->>Note: there is no pop_front function in vector
    v.pop_back(); // deletes last element

    cout<<"vector after deleting first and last element"<<endl;
    for(auto u:v) // it is called for each loop
    {
        cout<<u<<" ";
    }
    cout<<endl;


    return 0;
}
