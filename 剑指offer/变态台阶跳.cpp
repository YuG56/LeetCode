class Solution {
public:
    int jumpFloorII(int number) {
        if(number <= 0) return 0;
        if(number == 1) return 1;
        return jumpFloorII(number - 1) * 2;
    }
};