//Cycle detection
class Solution {
public: int findnext(int n)
        {
            int sum = 0;
            while(n>0)
            {
                sum += (n%10)*(n%10);
                n = n/10;
            }
            return sum;
        }
public:
    bool isHappy(int n) {
        int fast=findnext(findnext(n)),slow=findnext(n);
        if(fast==1 || slow==1)
            {
                return true;
            }
        while(fast!=slow)
        {
            fast = findnext(findnext(fast));
            cout << fast << endl;
            slow = findnext(slow);
            cout << slow << endl;
            if(fast==1 || slow==1)
            {
                return true;
            }
            
        }
        return false;
    }
};