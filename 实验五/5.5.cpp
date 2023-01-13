#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
template<typename T>
vector<T> intersection(const vector<T>& v1, const vector<T>& v2) 
{
    vector<T> v;
    for (int i = 0; i < v1.size(); i++)
    {
        if (find(v2.begin(), v2.end(), v1[i]) != v2.end())
        {
            v.push_back(v1[i]);
        }
    }
    return v;
}

int main() {
    vector<string> v1(5), v2(5);
    cout << "Enter 5 strings for vector 1:" << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cin >> v1[i];
    }
    cout << "Enter 5 strings for vector 2:" << endl;
    for (int t = 0; t < v2.size(); t++)
    {
        cin >> v2[t];
    }
    vector<string> intersect = intersection(v1, v2);
    cout << "The intersection of the two vectors is:" << endl;
    for (int i = 0; i < intersect.size(); i++)
    {
        cout << intersect[i] << endl;
    }
    return 0;
}
