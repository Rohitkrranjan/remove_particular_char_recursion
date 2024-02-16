#include<bits/stdc++.h>
using namespace std;
void replace(char input[]){
	int l = strlen(input);
	
	// base case
	if(l==0)
	 return ;
	if(input[0] == 'x')
	 {
	 	for(int i=0;i<l;i++)
	 	 input[i] = input[i+1];
	 	replace(input);
	 }
	 else
	  replace(input+1);
	
}

void print(char input[])
{
	for(int i=0;i<strlen(input);i++)
	 cout<<input[i]<<" ";
}

int main(){
	char name[] = "axbxcbdxexeex";
	replace(name);
	
	print(name);
}
