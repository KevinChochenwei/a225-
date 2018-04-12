#include <iostream>
#include <math.h>
#include <algorithm>


using namespace std;


int main(){
	int n;
	int strr[1000];
		while(cin>>n)
			{
	
				for(int i=0;i<n;i++)
					cin>>strr[i];
				
				sort(strr,strr+n);
				reverse(strr,strr+n);
			
		
				for(int i=0;i<n;i++)
					{
						if(strr[i]%10==0)
							{
							
							cout<<strr[i]<<" ";
							strr[i]=0;
						}
						else 
							continue;
						}
				
				for(int i=0;i<n;i++)
					{
						if(strr[i]%10==1)
						{
						
							cout<<strr[i]<<" ";
							strr[i]=1;
						}
						else 
							continue;
						}
						
				for(int i=0;i<n;i++)
					{
						if(strr[i]%10==2)
						{
						
							cout<<strr[i]<<" ";
							strr[i]=2;
						}
						else 
							continue;
						}
				for(int i=0;i<n;i++)
					{
						if(strr[i]%10==3)
						{
						
							cout<<strr[i]<<" ";
							strr[i]=3;
						}
						else 
							continue;
						}
				for(int i=0;i<n;i++)
					{
						if(strr[i]%10==4)
						{
						
							cout<<strr[i]<<" ";
							strr[i]=4;
						}
						else 
							continue;
						}
				for(int i=0;i<n;i++)
					{
						if(strr[i]%10==5)
						{
						
							cout<<strr[i]<<" ";
							strr[i]=5;
						}
						else 
							continue;
						}
				for(int i=0;i<n;i++)
					{
						if(strr[i]%10==6)
						{
						
							cout<<strr[i]<<" ";
							strr[i]=6;
						}
						else 
							continue;	
						}
						
				for(int i=0;i<n;i++)
					{
						if(strr[i]%10==7)
						{
						
							cout<<strr[i]<<" ";
							strr[i]=7;
						}
						else 
							continue;
						}
				for(int i=0;i<n;i++)
					{
						if(strr[i]%10==8)
						{
						
							cout<<strr[i]<<" ";
							strr[i]=8;
						}
						else 
							continue;
						}
				for(int i=0;i<n;i++)
					{
						if(strr[i]%10==9)
						{
						
							cout<<strr[i]<<" ";
							strr[i]=9;
						}
						else 
							continue;
						}
				cout<<endl;
			}

	

return 0 ;
	
	
}





