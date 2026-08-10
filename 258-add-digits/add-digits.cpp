class Solution {
public:
    int addDigits(int num) {
        while(num>=10)
        {
            long long n = 0;
            while(num>0)
            {
                int dig = num%10;
                n = n + dig;
                num/=10;
            }
            num = n;
        }
         return num;
    }
   
};