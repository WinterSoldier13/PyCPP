#include<bits/stdc++.h>
using namespace std;


class utils
{
	public:

	utils()
	{
		cout<<"You are using the c++ Utils provided by WinterSoldier13"<<endl;
	}

	//Split a string by a char to a vector
	vector<string> split(string s, char chR)
	{
		vector<string> arr;
        int l = s.size();
        string str="";
        
        for(int i=0;i<l;i++)
        {
            char ch = s[i];
            if(ch!=chR)
                str+=ch;
            else
            { 
				arr.push_back(str);
				str="";
                
            }
        }
		return arr;
	}
	template <typename T> 
	void pprint(vector<T> arr)
	{
		for(auto x: arr)
		{
			cout<<x<<" ";
		}
		cout<<endl;
	}

	template <typename T1> 
	void pprint(unordered_map<T1,T1> hashmap)
	{
		cout<<"{"<<endl;
		for(auto it = hashmap.begin(); it!=hashmap.end(); it++)
		{
			cout<<"  "<<it->first<<" : "<<it->second<<endl;
		}
		cout<<"}"<<endl;
	}	
	
	void pprint(unordered_map<char,int> hashmap)
	{
		cout<<"{"<<endl;
		for(auto it = hashmap.begin(); it!=hashmap.end(); it++)
		{
			cout<<"  "<<it->first<<" : "<<it->second<<endl;
		}
		cout<<"}"<<endl;
	}	
	void pprint(unordered_map<string,int> hashmap)
	{
		cout<<"{"<<endl;
		for(auto it = hashmap.begin(); it!=hashmap.end(); it++)
		{
			cout<<"  "<<it->first<<" : "<<it->second<<endl;
		}
		cout<<"}"<<endl;
	}

};
