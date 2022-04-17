
         else // arr[r] - arr[l] < sum
              r++;
    }  
    return count;
}
 
// Driver program to test above function
int main()
{
    int arr[] =  {1, 5, 3, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    cout << "Count of pairs with given diff is "
         << countPairsWithDiffK(arr, n, k);
    return 0;
}