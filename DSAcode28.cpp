//VALID PALINDROME:

// if string then True otherwise False:

class solution {
    public:
    // bool isAlphanumeric(char ch){
      
    //   if((ch>='0'&& ch<='9'))||(tolower(ch)>='a'&& tolower(ch) <= 'z' ){
    //     return true;
    //   }
    //   return false;
        
    // }
    // bool isPal(string s){
    //     int st =0, end= s.length()-1;

    //     while(st < end){
    //         if(!isAlphanumeric(s[st])){
    //             st++; continue;
    //         }
    //         if(!isAlphanumeric(s[end])){
    //             end--;
    //             continue;
    //         }

    //     }
    // }


    string remove(string s, string p)
    {
        while(s.length() > 0 && s.find(part) < s.length()){
            s.erase[s.find(part), part.length()];
        }
    }
    return s;
}

