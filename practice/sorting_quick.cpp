//wangdejun 2016 1 22
//快速排序*
//快速排序的基本思想是：通过一趟排序将要排序的数据分割成两部分，其中一部分的数据比另外一部分的数据都要小，
//然后再按此方法对这两部分数据进行快速排序，整个排序可以递归调用，以此达到整个数据变成有序序列；

//该方法的基本技巧是：
//1.先从数列中取出一个数作为基准数
//2.分区过程，将比这个数大的数放在它的右边，比这个数小的数放在左边；
//3.再对左右区间重复第二步，直到各区间只有一个数。
#include <iostream>
using namespace std;
void quickSort(int a[],int,int);
int main()
{
    int n;
    cin>>n;
    int array[10];

    for(int i = 0;i<n;i++){
        cin>>array[i];
    }
    int len = sizeof(array)/sizeof(int);
    quickSort(array, 0, len-1);
    
    cout<<"output is:"<<endl;
    for(int i = 0;i<len-1;i++){
        cout<<array[i]<<"; ";
    }
    return 0;
}

void quickSort(int s[],int l, int r)
{
    if(l<r){
        int i=l,j=r,x=s[l];
        while(i<j){
            while(i<j&&s[j]>=x){//从右向左找第一个小于x的数
                j--;
            }
            if(i<j){
                s[i++]=s[j];
            }
            while(i<j&&s[i]<x){//从左向右找第一个大于等于x的数字
                i++;
            }
            if(i<j){
                s[j--] =s[i];
            }
        }
        s[i]=x;
        quickSort(s, l, i-1);//递归调用
        quickSort(s, i+1, r);//递归调用
    }
}