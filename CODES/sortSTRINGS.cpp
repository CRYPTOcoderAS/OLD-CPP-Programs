#include<bits/stdc++.h>
using namespace std;
bool comp(string a, string b) {
if (a.size() != b.size()) return a.size() < b.size();
return a < b;
}
//the following comparison function comp sorts
//strings primarily by length and secondarily by alphabetical order

int main(){
	#ifndef KK
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string a,b;
	vector<string> v1;
	cin>>a>>b;
	v1.push_back(a);
	v1.push_back(b);
	sort(v1.begin(),v1.end(),comp);
	for (int i = 0; i < v1.size(); ++i)

	{
		cout<<v1[i]<<endl;/* code */
	}


}