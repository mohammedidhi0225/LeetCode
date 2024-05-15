class Solution {
public:
    int addDigits(int num) {
        //Base case
    if(num<10){
        return num;
    }
    long long int sum=0;
    while(num>0){
        int lastDigit=num%10;
        sum+=lastDigit;
        num/=10;
    }
    return addDigits(sum);
        
    }
};