#include<bits/stdc++.h>
using namespace std;

vector<int> a;

void print()
{
	for(int i=0;i<a.size();i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int partion(int l,int h)
{
	int i=l-1,j=l;
	int pivot=a[h];
	while(j<=h-1)
	{
		if(a[j]<=pivot)
		{
			i++;
			swap(a[j],a[i]);
		}
		j++;
	}
	swap(a[i+1],a[h]);
	return i+1;
}

void quick(int low,int high)
{
	if(low<high)
	{
		int p=partion(low,high);
		quick(low,p-1);
		quick(p+1,high);
	}
}


int main()
{
	int n=3,x;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	print();
	quick(0,n-1);
	print();
}