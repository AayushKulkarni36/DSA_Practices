'''You are given an array prices where prices[i] is the price of a given stock on the ith day. You want to maximize your profit by choosing exactly one day to buy one stock and a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If no profit is possible, return 0.'''

def Stock(arr):
    n=len(arr)
    maxProfit =0
    minimum =arr[0]
    for i in range(1,n):
        SellingPrice = arr[i]-minimum
        maxProfit = max(maxProfit,SellingPrice)
        minimum = min(minimum,arr[i]) 
    return maxProfit


arr=[7,1,5,3,6,4]
print(Stock(arr))