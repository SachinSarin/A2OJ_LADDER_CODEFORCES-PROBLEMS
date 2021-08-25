/*
It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.

Examples
inputCopy
1987
outputCopy
2013
inputCopy
2013
outputCopy
2014
*/
#include <iostream>
using namespace std;
int check(int n)
{
    int a[50],res=0;
    while(n)
    {
        a[res++]=n%10,n/=10;
    }
    for(int i=0;i<res;i++)
        for(int j=i+1;j<res;j++) //brute force technique
            if(a[i]==a[j])return 0;
    return 1;
    
}
int main() {
	 
    int n;
    while(cin>>n)
    {
        for(int i=n+1;;i++)
            if(check(i))
            {
                cout<<i<<endl;
                break;
            }
    }
	return 0;
}
