The cost of stock on each day is given in an array price[]. Each day you may decide to either buy or sell the stock at price[i], you can even buy and sell the stock on the same day. Find the maximum profit that you can get.

Note: A stock can only be sold if it has been bought previously and multiple stocks cannot be held on any given day.
class Solution {
  public:
    int maximumProfit(vector<int> &prices)
    {
           int n = prices.size();
    if (n == 0) return 0;

    int cash = 0;                 
    int hold = -prices[0];        

    for (int i = 1; i < n; i++) {
        cash = max(cash, hold + prices[i]);  //
        hold = max(hold, cash - prices[i]); 
    }

    return cash; 
}
};
