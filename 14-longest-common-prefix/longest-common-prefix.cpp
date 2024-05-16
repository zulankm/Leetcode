class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int a=strs.size();
        string n=strs[0],m=strs[a-1],ans="";
        for(int i=0;i<n.size();i++){
            if(n[i]==m[i]){ans+=n[i];}
            else break;
        }
        return ans;
        
    }
};
//
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        string temp=strs[0];
        for(string s: strs){
            while(s.find(temp)!=0)
                temp=temp.substr(0,temp.length()-1);
        }
        return temp;
        }
};
//
