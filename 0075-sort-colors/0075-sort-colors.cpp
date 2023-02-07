class Solution
{
public:
  void sortColors(vector<int> &arr)
  {
    int i = 0;
    int j = 0;
    int k = arr.size() - 1;
    while (j <= k)
    {
      if (arr[j] == 0)
      {
        swap(arr[i++], arr[j++]);
      }
      else if (arr[j] == 1)
      {
        j++;
      }
      else
      {
        swap(arr[j], arr[k--]);
      }
    }

    for (int i : arr)
    {
      cout << i << ",";
    }
  }
};