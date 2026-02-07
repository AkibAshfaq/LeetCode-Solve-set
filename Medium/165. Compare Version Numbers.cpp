#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

class Solution {
public:
    int compareVersion(string version1, string version2) {
        string t1, t2;
        stringstream s1(version1), s2(version2);
        while(true){
            if(!getline(s1,t1,'.')) t1="0";
            if(!getline(s2,t2,'.')) t2="0";
            int n1=stoi(t1);
            int n2=stoi(t2);
            if(n1<n2) return -1;
            if(n1>n2) return 1;
            if(!s1 && !s2) break;
        }
        return 0;
    }  
};

int main(){
    string s1, s2;
    cin>>s1>> s2;

    Solution ss;
    cout<<ss.compareVersion(s1,s2);

    return 0;
}