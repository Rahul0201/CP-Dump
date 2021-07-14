class Solution {
public:
    int calD(vector<int> p1, vector<int> p2){
        int x = p1[0]-p2[0];
        int y = p1[1]-p2[1];
        return x*x+y*y;
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_set<int> distance;
        distance.insert(calD(p1,p2));
        distance.insert(calD(p1,p3));
        distance.insert(calD(p1,p4));
        distance.insert(calD(p2,p3));
        distance.insert(calD(p2,p4));
        distance.insert(calD(p3,p4));
        if (distance.find(0)!=distance.end()) return false;
        return distance.size()==2;
        
        
    }
};