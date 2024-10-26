class sloution {
    public:

bool isFreqsame(int freq1[], int freq2[]){
    for(int i=0; i<26; i++){
        if(freq1[i] != freq2[i]){
            return false;
        }
    }
    return true;
}

    bool check(string s1,string s2){
        int freq[26] = {0};

        for(int i=0; i<s.length(); i++){
            int idx = s1[i] - 'a';
            freq[s1[i] - 'a']++;
        }

        int windsize = s1.length();

        for(int i=0; i<s2.length(); i++){
            int windidx = 0, idx=i;
             int wind[26] = {0};

            while(windidx < windsize && idx <s2.length()){
               windFreq[s2[idx]-'a']++;
               windIdx++; idx++;
            }
            
            if(isFreqsame(freq, windfreq)){
                return True;
            }
        }
    }
}