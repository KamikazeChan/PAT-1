#include <iostream>
#include <vector>

using namespace std;
int N;
int scan_box(int *a,int si)
{
	for(int j = 0; j != N; ++j)
		{
		if(*(a+j) >= si)
			{
			*(a+j) = *(a+j) - si;
			return j;
			}
		}
}

int main()
{
	cin >> N;
	int count_box =0;
	int *sn = new int[N];//用于存放物品的大小
	int *s_vol = new int[N];//用于存放箱子的容量
	for(int i = 0; i != N; ++i)
		{
		int x;
		cin >> x;
		sn[i] = x; 
		s_vol[i] = 100;
		}
	for(int k = 0; k != N; ++k)
		{
		int box_num;
		box_num = scan_box(s_vol, sn[k]);
		cout << sn[k] << ' ' << box_num+1 <<endl;
		}
	for(int m = 0; m != N; ++m)
		if(s_vol[m]<100)
			++count_box;
	cout << count_box;
	
}
