#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


vector<int> lis(vector<int> const& a) 
{
    int n = a.size();
    vector<int> d(n, 1), p(n, -1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i] && d[i] < d[j] + 1) {
                d[i] = d[j] + 1;
                p[i] = j;
            }
        }
    }

    int ans = d[0], pos = 0;
    for (int i = 1; i < n; i++) {
        if (d[i] > ans) {
            ans = d[i];
            pos = i;
        }
    }

    vector<int> subseq;
    while (pos != -1) {
        subseq.push_back(a[pos]);
        pos = p[pos];
    }
    reverse(subseq.begin(), subseq.end());
    return subseq;
}

int main(){
    vector<int> vec(10);
    vec[0] = 0;
    vec[1] = 4;
    vec[2] = 6;
    vec[3] = 1;
    vec[4] = 2;
    vec[5] = 10;
    vec[6] = 7;
    vec[7] = 3;
    vec[8] = 8;
    vec[9] = 9;
    vector<int> res;
    res = lis(vec);
    for (int i = 0; i < res.size(); i++) {
        cout<<"res["<<i<<"] = "<<res[i]<<endl;
    }
}