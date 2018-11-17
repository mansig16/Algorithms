#include<bits/stdc++.h> 
using namespace std; 
 
struct job 
{ 
int no;
int d; 
int pft; 
}; 

bool compare(job a, job b) 
{ 
	return (a.pft>b.pft); 
} 

void answer(job a[], int n) 
{ 
	sort(a,a+n,compare); 
	int r[n]; 
	bool free[n]={false};
	int max_profit=0;  
	
	for (int i=0; i<n; i++) 
	{ 
		for (int j=min(n, a[i].d)-1;j>=0;j--) 
		{  
			if (free[j]==false) 
			{ 
				r[j]=i; 
				free[j] = true;
				max_profit+=a[i].pft;
				break; 
			} 
	    } 
	}

	for (int i=0; i<n; i++) 
	{
		if (free[i])
		{ 
		cout<<a[r[i]].no<< " "; 
		}
	}
	cout<<"\n";
	cout<<"maximum profit earned :"<<max_profit<<endl;
	 
} 

int main() 
{ 
	int n;
	cout<<"enter the number of jobs: "<<endl;
	cin>>n;
	job a[n];
	for(int i=0;i<n;i++)
	{
	cout<<"enter the deadline and profit of job "<<i+1<<":"<<endl;
	a[i].no=i+1;
	cin>>a[i].d;
	cin>>a[i].pft;
	}
	cout << "Sequence of jobs: "<<endl; 
	answer(a,n);
	
	return 0; 
} 
