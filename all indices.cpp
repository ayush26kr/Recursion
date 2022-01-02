vector<int> allIndex(vector<int>& arr, int idx, int data, int count)
{
  if (idx == arr.size())
  {
    vector<int> base(count, 0);
    return base;
  }

  if (arr[idx] == data)
    count++;
  vector<int> ans = allIndex(arr, idx + 1, data, count);
  if (arr[idx] == data)
    ans[count - 1] = idx;

  return ans;
}
