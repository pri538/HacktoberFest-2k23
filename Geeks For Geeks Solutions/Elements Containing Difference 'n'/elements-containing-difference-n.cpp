/*Given an unsorted array and a number n, find if there exists a pair of
elements in the array whose difference is n.*/

#include <bits/stdc++.h>
using namespace std;
void display(vector<int> v)
{
    cout<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void pairs(vector<int>& v, int x)
{
    vector<pair<int, int>> result;

    for (int i = 0; i < v.size(); i++)
    {
        int num1 = v[i];
        int num2 = num1 + x;

        auto it = find(v.begin(), v.end(), num2);

        if (it != v.end())
        {
            result.push_back({num1, num2});
        }
    }

    if (result.empty())
    {
        cout << "No pairs found with difference " << x << endl;
    }
    else
    {
        cout << "Pairs with difference " << x << ":" << endl;
        for (auto pair : result)
        {
            cout << "(" << pair.first << ", " << pair.second << ")" << endl;
        }
    }
}

int main()
{
    vector<int>v;
    int n,x;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the value: ";
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    cout<<"Input: ";
    display(v);
    sort(v.begin(),v.end());
    pairs(v,x);
    return 0;
}
