class Solution
{
public:
  void sortColors(vector<int>& arr) {
    int zero = 0, two = arr.size()-1;
    for (int i = 0; i <= two;) {
        if (arr[i] == 0) {
            swap(arr[i++], arr[zero++]);
        } else if (arr[i] == 2) {
            swap(arr[i], arr[two--]);
        } else {
            i++;
        }
    }
}
};