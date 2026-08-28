class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left=0;
        int right=0;
        map <int,int>basket;
        int maxlength=0;
        while(right<fruits.size()){
        basket[fruits[right]]++;

            while(basket.size()>2){
                basket[fruits[left]]--;
                if(basket[fruits[left]]==0){
                    basket.erase(fruits[left]);
                }
                left++;

            }
            if(basket.size()<=2){
            maxlength=max(maxlength,right-left+1);
            right++;
            }
        }
        return maxlength; 
        
    }
};