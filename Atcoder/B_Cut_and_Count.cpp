#include<bits/stdc++.h>
using namespace std;
#define ll long long 

// Function to perform binary search and return the position of the element
int binary__search(const std::vector<ll>& sortedVector, ll key) {
    auto it = std::lower_bound(sortedVector.begin(), sortedVector.end(), key);

    if (it != sortedVector.end() && *it == key) {
        // Element found, calculate its position (index)
        int position = std::distance(sortedVector.begin(), it);
        return position;
    } else {
        // Element not found, return -1 to indicate failure
        return -1;
    }
}

int main()
{
	ll rows=26, cols = 0;

	vector<vector<ll>> v(rows);
	set<char>ss;
	ll l;
	cin>>l;
	string s;
	cin>>s;
	for(ll i=0;i<l;i++)
	{
		v[s[i]-'a'].push_back(i);
	}
/*
	for(ll i=0;i<26;i++)
	{
		char asciiCharacter = static_cast<char>(i+'a');
		cout<<asciiCharacter<<" ";
		for(ll j=0;j<v[i].size();j++)
		{
			cout<<v[i][j]<<" ";
		}cout<<endl;
	}
*/
	
	ll mx=0;
	for(ll i=0;i<l;i++)
	{
			
			ll pos=binary__search(v[s[i]-'a'],i);
			ll rem=v[s[i]-'a'].size()- pos-1;
			if(rem>0)ss.insert(s[i]);
			else if(rem==0)
			{
				
				std::set<char>::iterator it = ss.find(s[i]);

    			if (it != ss.end()) {
					ss.erase(it);
    								}
			}

			mx=max(mx,static_cast<ll>(ss.size()));
		//	cout<<"max "<<mx<<endl;
			
		
		}


	cout<<mx<<endl;
}