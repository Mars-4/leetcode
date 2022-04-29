class Solution {
public:
    int twoEggDrop(int n) {
        return (int)ceil(((-1)+sqrtf(1+8*n))/2);
    }
};
