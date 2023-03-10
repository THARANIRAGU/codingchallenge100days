// MAXIMUM ANGRINESS FROM CODECHEF
#include <iostream>
using namespace std;

int main() {
	long long  t;
	cin>>t;
	while(t--)
	{
	    long long a,b;
	    cin>>a>>b;
	    if(a==1)
	    {
	        cout<<0<<endl;
	    }
	    else if(b>=a/2)
	    {
	        cout<<(a*(a-1))/2<<endl;
	    }
	    else
	    {
	        cout<<a*b+(a-2*b-1)<<endl;
	    }
	}
	return 0;
}


//Median of Two Sorted Arrays
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         vector<int>sol;

        for (int i=0;i<nums1.size();i++)
        {
            sol.push_back(nums1[i]);

        }
        for (int i=0;i<nums2.size();i++)
        {
            sol.push_back(nums2[i]);

        }
        sort(sol.begin(),sol.end());
        int n=sol.size();

        if (n%2==1)
        {
            return sol[n/2];
        }
        else 
        {
            int range=n/2;
            return double(sol[range]+sol[range-1])/2;
        }

        
    }
};


//Palindrome Number
class Solution {
public:
    bool isPalindrome(int x) {
        long rev = 0, digit = 0;
        long temp = x;

        while(temp > 0){
            digit = temp % 10;
            rev = (rev * 10 ) + digit;  
            temp /= 10;
        }

        return (rev ==x);
    }
};