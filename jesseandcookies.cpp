void func(int k, vector<int> arr,int n,int answer)
{
    if(arr[0] > k )
    {
        return ;
    }
    int temp= arr[0]+arr[1];
    arr.push_back(temp);
    arr.erase(arr.begin()+0);
    arr.erase(arr.begin()+1);
    sort(arr.begin(),arr.end());
    func(k,arr,n,answer+1);
}
int cookies(int k, vector<int> A) {
    int a=0;
    sort(A.begin(),A.end());
    func(k,A,A.size(),a);
    return a;
}
