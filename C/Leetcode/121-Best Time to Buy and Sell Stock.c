/*
* Q: You are given an array prices where prices[i] is the price of a given stock on the ith day.
*
* You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
* 
* Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

int maxProfit(int* prices, int pricesSize){
    int max = prices[0], min=prices[0], result = 0;
    // Loop through the prices array
    for(int i=0;i<pricesSize;i++){
        // Update min and max if current element is less than min or greater than max
        if(prices[i]<min){
            max = prices[i];           
            min = prices[i];          
        }
        else if(prices[i]>max)
            max = prices[i];
        
        // Update the result if the difference between max and min is greater than the current result
        if(max-min > result)
            result = max-min;
    }
    return result;
}
