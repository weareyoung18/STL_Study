#include<iostream>
#include<algorithm>
using namespace std;
struct node{
	int compare1,compare2;
	bool operator(const node&b)    //运算符的重载，可用来代替cmp函数 
	{
		if(compare1==b.compare1)
		{
			return compare2>b.compare2;
		}
		return compare1>b.compare1;
	}
};
bool cmp(srtuct node a,struct node b)    //自定义的排序函数 
{
	if(a.compare1==b.compare1)
	{
		return a.compare2>b.compare2;
	}
	return a.compare1>b.compare1;
} 
int main()
{
	int a[]={3,6,1,4,2,5};
	
	/*
	sort函数的使用：sort函数是对数组或容器进行排序，是一个左闭右开的区间
	基本格式：sort(a,a+n,cmp) 
	*/
	sort(a,a+6);
	for(int i=0;i<6;i++)
	{
		cout<<a[i]<<endl;
	}
}
