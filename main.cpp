#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
bool CheckNonDeg(vector<int>vec)
{

    vector<int>::iterator it1;
    vector<int>::iterator it2;
    vector<int>::iterator it3;

    sort (vec.begin(),vec.end());

    it1=vec.begin();
    it2=vec.begin()+1;
    it3=vec.begin()+2;
    while(it3<vec.end())
    {
        if (*it1+*it2>*it3)
        {
            return true;
            cout << "("<<*it1<<","<<*it2<<","<<*it3<<")";
            break;
        }
        else
            it1++;
            it2++;
            it3++;
    }
    return false;
}
int main()
{
    int n,x;
    vector<int>vec;
    cout << "please enter the size of the vector:"<<endl;
    cin  >> n;
    cout << "please enter the numbers in the vector"<<endl;
    for (int i=0; i<n; i++)
    {
        cin >> x;
        vec.push_back(x);
    }
    CheckNonDeg(vec) ?

    cout << "yes, there is at least NonDegenerate triangle"   :  cout << "No, there is no NonDegenerate triangle";




}


