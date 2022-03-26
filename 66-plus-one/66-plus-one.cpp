class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size()-1;  
        while(++digits[i]==10&&i>=0){   //for moments like [1,9],[9] etc...
            digits[i]=0;  //set it to"0" because 9+1=10
            if(i==0){   //if the first number is also 9  
                digits.resize(digits.size()+1,0); //resize it, so there's one more space and set all values to "0"
                digits[0]=1;  //the first number is 1
                break;
            }
            i--; //go on with the next number from the back
        }  
        return digits;
    }
};