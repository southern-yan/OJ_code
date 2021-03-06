题目描述：
求出1~13的整数中1出现的次数,并算出100~1300的整数中1出现的次数？为此他特别数了一下1~13中包含1的数字有1、10、11、12、13因此共出现6次,但是对于后面问题他就没辙了。ACMer希望你们帮帮他,并把问题更加普遍化,可以很快的求出任意非负整数区间中1出现的次数（从1 到 n 中1出现的次数）

方法1：时间复杂度为O(nlogn)

class Solution {
public:
    int Count(int n)
    {
        int count=0;
        while(n)
        {
            if(n%10==1)
            {
                count++;
            }
            n=n/10;
        }
        return count;
    }
    
    int NumberOf1Between1AndN_Solution(int n)
    {
         int number=0;
        for(int i=1;i<=n;i++)
        {
            number+=Count(i);
        }
        return number;
    }
};


//方法2：时间复杂度为O(logn)





