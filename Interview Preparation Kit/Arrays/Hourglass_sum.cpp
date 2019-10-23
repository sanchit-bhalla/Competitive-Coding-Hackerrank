#include<iostream>
#define N 6
using namespace std;

int hourglassSum(int arr[N][N])
{
    int i=0,j=0;
    int max_ = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
    int temp_c=0;
    for(i=0;i<(N-3+1);i++)
    {
        for(j=0;j<(N-3+1);j++)
        {
            temp_c= arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if(temp_c>max_)
                max_ = temp_c;
        }
    }
    return max_;
}
int main()
{
    int arr[N][N];
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            cin>>arr[i][j];
    int result = hourglassSum(arr);
    cout<<result;
    return 0;
}
