//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<vector<string>> findSequences(string b, string e, vector<string>& w) {
        unordered_set<string> st(w.begin(),w.end());
        queue<vector<string>> q;
        q.push({b});
        vector<vector<string>> ans;
        vector<string> wused;
        wused.push_back(b);
        int lvl=0;
        while(!q.empty())
        {
            vector<string> v=q.front();
            q.pop();
            if(v.size()>lvl)
            {
                lvl++;
                for(auto it:wused)
                {
                    st.erase(it);
                }
            }
            string word=v.back();
            if(word==e)
            {
                if(ans.size()==0)
                {
                    ans.push_back(v);
                }
                else if(ans[0].size()==v.size())
                {
                    ans.push_back(v);
                }
            }
            for(int i=0;i<word.size();i++)
            {
                char ori=word[i];
                for(char j='a';j<='z';j++)
                {
                    word[i]=j;
                    if(st.find(word)!=st.end())
                    {
                       v.push_back(word);
                        q.push(v);
                        wused.push_back(word);
                        v.pop_back();
                    }
                }
                word[i]=ori;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

bool comp(vector<string> a, vector<string> b)
{
    string x = "", y = "";
    for(string i: a)
        x += i;
    for(string i: b)
        y += i;
    
    return x<y;
}

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<string>wordList(n);
		for(int i = 0; i < n; i++)cin >> wordList[i];
		string startWord, targetWord;
		cin >> startWord >> targetWord;
		Solution obj;
		vector<vector<string>> ans = obj.findSequences(startWord, targetWord, wordList);
		if(ans.size()==0)
		    cout<<-1<<endl;
		else
		{
		    sort(ans.begin(), ans.end(), comp);
            for(int i=0; i<ans.size(); i++)
            {
                for(int j=0; j<ans[i].size(); j++)
                {
                    cout<<ans[i][j]<<" ";
                }
                cout<<endl;
            }
		}
	}
	return 0;
}
// } Driver Code Ends