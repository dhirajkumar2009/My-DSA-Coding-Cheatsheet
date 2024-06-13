/*
Minimum indexed character

Given a string S and another string patt. Find the character in patt that is present at the minimum index in S.
 

Example 1:

Input: S = "zsyle", patt = "bjz"
Output: "z"
Example 2:

Input: S = "anskg", patt = "me"
Output: "$"
 

Your Task:
You don't need to read or print anything. Your task is to complete the function printMinIndexChar() which takes S and patt as input parameter and returns the character in patt that is present at the minimum index in S. If not possible returns "$".
 

Expected Time Complexity: O(max(|str|, |patt|))
Expected Auxilary Space: O(K) where K <= 26
 

Constraints:
1 ≤ |S|, |patt| ≤ 104


*/

/*
   unordered_set<char>str;
        string temp="";
        for(int i=0;i<patt.size();i++)
        {
            str.insert(patt[i]);
        }
        for(int i=0;i<S.size();i++)
        {
             if(str.find(S[i])!=str.end())
        {
           temp.push_back(S[i]);
           return temp;
        }
        }
        return "$";

        setBi
        */

        class Solution{
    public:
	string printMinIndexChar(string S, string patt)
	{
	    unordered_map<char,int>mp;
	    string ans="";
	    for(int i=0;i<patt.length();i++){
	        mp[patt[i]]++;
	    }
	    for(int i=0;i<S.length();i++){
	        char key=S[i];
	        if(mp.find(key)!=mp.end()){
	            ans.push_back(key);
	            break;
	        }
	    }
	    if(ans.empty()){
	        ans=ans+"$";
	    }
	    return ans;
	}
};
