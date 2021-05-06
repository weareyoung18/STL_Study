**find函数使用**

函数作用：查找该元素在数组中**第一次出现的位置的地址**(也是类似于0x的地址)

基本格式：find(a,b,data)   

a：起始地址

b：查找区间中最后一个元素的下一个地址

data：想要查找的元素值

返回值：[a,b)这个**左闭右开**的区间中查找**data元素第一次出现的地址**。**如果data元素不在该区间中，则返回b的地址** 。

注意：

如果想要得到所查找的元素在查找区间中的下标，则需要用**find()函数返回的地址减去起始地址，即find(a,b,data)-a**，从而得到data元素在[a,b)区间中的下标(相对位置)。

```c++
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[6]={2,4,6,1,3,8};
	cout<<find(a+2,a+6,3)<<endl;       //输出3在数组a中第一次出现的地址 
	cout<<find(a+2,a+6,3)-a<<endl;    //输出3在数组a中第一次出现的下标 
	cout<<find(a,a+6,7)-a<<endl;      //由于7不在数组a中，因此输出下标6 
	return 0;
}
```

