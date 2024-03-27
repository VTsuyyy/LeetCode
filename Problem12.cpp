class Solution {
public:
    string intToRoman(int num) {
        char s[20], x[8] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int i = 19, j = 0;
        while(num){
            int tmp = num % 10 + 1;
            if(!(tmp % 5)){
                s[--i] = x[j + tmp / 5];
                s[--i] = x[j];
            }
            else{
                tmp -= tmp / 5;
                while(--tmp & 3) s[--i] = x[j];
                if(tmp == 4) s[--i] = x[j+1];   
            }
            num /= 10;
            j += 2;
        }
        return &s[i];
    }
};