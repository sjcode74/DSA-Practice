class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n = landStartTime.size();
        int m  = waterStartTime.size();
        int minFinishTime = INT_MAX;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                int FinishLandFirst = landStartTime[i] + landDuration[i];
                int StartWaterSecond = max(FinishLandFirst, waterStartTime[j]);
                int FinishWaterSecond = StartWaterSecond + waterDuration[j];
                minFinishTime = min(minFinishTime, FinishWaterSecond);

                int FinishtWaterFirst = waterStartTime[j] + waterDuration[j];

                int startlandsecond = max(FinishtWaterFirst, landStartTime[i]);

                int finishlandsecond = startlandsecond + landDuration[i];

                minFinishTime = min(minFinishTime, finishlandsecond); 
            }
        }
        return minFinishTime;
    }
};
