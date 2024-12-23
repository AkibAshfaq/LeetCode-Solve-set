#include <iostream>
using namespace std;

int main (){

    string s;
    cin>>s;
    
    int length = s.length();
    if(length > 15 && length < 1)
    {
        cout<<"String not acceptable";
        return 0;
    }

    int I = 1;
    int V = 5;
    int X = 10;
    int L = 50;
    int C = 100;
    int D = 500;
    int M = 1000;

    int i = 0, sum = 0;
    while(s[i] != '\0'){

        if(s[i] == 'I')
        {   
            if(s[i+1] == 'V')
            {
                sum+= V - I;
                i++;
            }
            else if(s[i+1] == 'X')
            {
                sum+= X - I;
                i++;
            }
            else
                sum += I;
        }
        else if(s[i] == 'X')
        {
            if(s[i+1] == 'L')
            {
                sum+= L - X;
                i ++;
            }
                
            else if(s[i+1] == 'C')
            {   
                sum+= C - X;
                i ++;
            }
            else
                sum += X;
        }
        else if(s[i] == 'C')
        {
            if(s[i+1] == 'D')
            {
                sum+= D - C;
                i ++;
            }
            else if(s[i+1] == 'M')
            {    
                sum+= M - C;
                i ++;
            }
            else
                sum += C;
        }
        else if(s[i] == 'V')
            sum += V;
        else if(s[i] == 'L')
            sum += L;
        else if(s[i] == 'D')
            sum += D;
        else if(s[i] == 'M')
            sum += M;

        i++;
    }
    
    cout<<sum;
}