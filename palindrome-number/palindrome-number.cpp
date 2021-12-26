class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        long long int rev=0;
        if(x<0)
            return false;
        while(y!=0)
        {
            int a=y%10;
            rev=(rev*10)+a;
            y=y/10;
        }
       if(x==rev)
           return true;
       else
           return false;
    }
};