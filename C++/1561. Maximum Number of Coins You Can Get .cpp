/*
There are 3n piles of coins of varying size, you and your friends will take piles of coins as follows:

    In each step, you will choose any 3 piles of coins (not necessarily consecutive).
    Of your choice, Alice will pick the pile with the maximum number of coins.
    You will pick the next pile with maximum number of coins.
    Your friend Bob will pick the last pile.
    Repeat until there are no more piles of coins.

Given an array of integers piles where piles[i] is the number of coins in the ith pile.

Return the maximum number of coins which you can have.
*/

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        //sort the pile
        sort(piles.begin(), piles.end());
        int j = 0;
        int len = piles.size();
        int coins = 0;

        //the problem is boiled down to that of you will second largest, the max will go to alice and min will go to bob
        //the min will be taken from starting indexes
        //max and sec max will be chosen alernatively from right
        for(int i = len-2;; i-=2){
            coins += piles[i];
            if(++j == len/3){//condition when true means all coins used
                return coins;
            }
        }
    }
};