class FoodRatings {
public:
    unordered_map<string,pair<int,string>> cr;
    unordered_map<string,set<pair<int,string>>> hr;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0;i<foods.size();i++)
        {
            cr[foods[i]]={-ratings[i],cuisines[i]};
            hr[cuisines[i]].insert({-ratings[i],foods[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        hr[cr[food].second].erase({cr[food].first,food});
        hr[cr[food].second].insert({-newRating,food});
        cr[food]={-newRating,cr[food].second};
    }
    
    string highestRated(string cuisine) {
        for(auto it:hr[cuisine])
        {
            return it.second;
        }
        return "";
    }
};