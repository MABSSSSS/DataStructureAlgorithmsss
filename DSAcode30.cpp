// Reverse words in string

class solution{
    public:
    string reversewords(string s){
        int n =s.length();
        string ans =""

        reverse(s.bgein(), s.end());
        for(int i=0; i<n;i++){
            string word ="";
            while(i<n && s[i] != ''){
                word += s[i];
                i++;
            }
            reverse(word.begin(), word.end());
            if(word.length() > 0){
                ans += " " + word;
            }
        }
    }
    return ans.substring(1);
}