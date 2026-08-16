class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int num2 = num;
        while(num>0){
            int last = num % 10;
            if(num2%last==0){count+=1;}
            num = num/10;
        }
        
        return count;
    }
};