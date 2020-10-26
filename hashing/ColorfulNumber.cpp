#include<bits/stdc++.h>
using namespace std;


int Solution(int num)
{
    if(num == NULL)
    return 0;
    
    int product = 1;
    vector<int> digits;
    while(num > 0)
    { digits.insert(digits.begin(),num % 10);
      num /= 10;
    }
     int product_of_digits = 1;
     unordered_set<int> present;
    for(int i =0; i < digits.size(); i++)
    {
        product_of_digits = 1;
        for (int j = i; j < digits.size(); j++)
        {
            product_of_digits *= digits[j];
             if(present.find(product_of_digits) != present.end())
             return 0;
             present.insert(product_of_digits);
        }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    int m = Solution(n);
    cout<<m;
    return 0;
}
