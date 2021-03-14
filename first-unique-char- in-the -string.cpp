class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> freq_table;
        for(int i =0; i < s.length(); i++){
            if(freq_table.find(s[i]) != freq_table.end()){
                freq_table[s[i]] += 1;
            }
            else{
                freq_table[s[i]]= 1;
            }
        }//for
        for(int i =0; i < s.length(); i++){
            if(freq_table[s[i]] == 1){
                return i;
            }
        }
        return -1;
        
    }
};
