class Solution {
public:
    int maxPower(string s) {
        if(s.size()==0)
        {return 0;}
        if(s.size()==1)
        {return 1;}
        int max_count=1;
        int count =1;
        for(int i=1;i<s.size();i++)
        {
         if(s[i]==s[i-1])
         {count++;}
            else {count=1;}
            if(count>max_count)
            {
                max_count=count;
            }
        }
        
        return max_count;
    }
};
