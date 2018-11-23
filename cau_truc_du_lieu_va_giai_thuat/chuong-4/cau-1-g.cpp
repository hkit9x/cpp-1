#include <iostream>
using namespace std;

bool ktMaTranKe(int a[20][20], int x, int y)
{
	if(x!=y)
		return false;
	else
	{
		for(int i = 0; i < x; i++)
		{
			for(int j = 0; j < y; j++)
			{
				if(i==j)
				{
					if(a[i][i]!=1)
						return false;
				}
				else
				{
					if(a[i][j]!=1 && a[i][j]!=0)
						return false;
					else
					{
						if(a[i][j]!=a[j][i])
							return false;
					}
				}	
			}	
		}
	}
	return true;					
}
main(){
	int mt[20][20];
	int x, y;
	st:
	cout<<"\nnhap ma tran bat ki voi kich thuoc: ";
	cin>>x>>y;
	cout<<"nhap ma tran: \n";
	for(int i = 0; i < x; i++)
	{
		
		for(int j = 0; j < y; j++)
		{
			cin>>mt[i][j];
		}
		
	}
	cout<<"ma tran: \n";

	for(int i = 0; i < x; i++)
	{
		
		for(int j = 0; j < y; j++)
		{
			cout<<mt[i][j];
		}
		cout<<endl;
	}

	cout<<endl<<"matran ke ? "<<ktMaTranKe(mt, x, y);
	goto st;
}
