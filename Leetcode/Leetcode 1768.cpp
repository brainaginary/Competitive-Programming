class Solution {
public:
    string mergeAlternately (string word1, string word2){
	
	int size = word1.length()+word2.length();
	string ans (size, 'a');

	int min_len = min(word1.length(), word2.length());
	int j = 0;
	for (int i = 0; i < size; i++){
		if(i < 2*min_len){
			if(i%2==0) ans[i]=word1[i/2];
			else ans[i]=word2[(i-1)/2];
		} else {
			if ((int) word1.length() > min_len){
				ans[i] = word1[min_len + j]; j++;
			} else {
				ans[i] = word2[min_len + j]; j++;
			}
		}
	}

	return ans;
}
};
