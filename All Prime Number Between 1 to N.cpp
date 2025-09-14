#include<bits/stdc++.h>
using namespace std;

void checkPrime(int n)
{
    vector<bool>isPrime(n+1, true);
    int cnt=0;

    for(int i=2; i<=n; i++)
    {
        if(isPrime[i])
        {
            cout<<i<<endl;
            cnt++;

            for(int j=i*2; j<=n; j=j+i)
            {
                isPrime[j] = false;
            }
        }
    }

   cout<<"Total prime numbers: "<<cnt<<endl;
}

int main(){

    int n = 100;
    checkPrime(n);


return 0;
}
