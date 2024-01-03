class Solution {
public:
    string getans (string str1, string str2){
        // assume str1 <= str2
        
        string ans;
        int ans_len = 0;

        uint j;
        for (j=0;j<str1.length();j++){
            string test = str1.substr(0, j+1);
            int x = test.length();
            if (x > ans_len && str2.length()%x==0 && str1.length()%x==0){
                
                int str2_concatenate_count = str2.length()/x;
                string construct2;
                int str1_concatenate_count = str1.length()/x;
                string construct1;

                while(str1_concatenate_count--){
                    construct1 += test; 
                }
                while(str2_concatenate_count--){
                    construct2 += test; 
                }

                if(construct1 == str1 && construct2==str2){
                    ans = test; ans_len = x;
                }
            } 
        }
        return ans;
    }

    string gcdOfStrings(string str1, string str2){
        if (str1.length() > str2.length()){
            return getans(str2, str1);
        } else {
            return getans(str1,str2);
        }
    }
};
