class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        vector<long long int> room(n, 0);
        vector<int> count(n, 0);
        sort(meetings.begin(), meetings.end());

        for(auto meeting:meetings){
            int start = meeting[0], end = meeting[1];
            long long minRoomAvailabletime = LLONG_MAX;
            int minAvailableTime = 0;
            bool unusedRoom = false;

            for(int i=0;i<n;i++){
                if(room[i] <= start){
                    unusedRoom = true;
                    count[i]++;
                    room[i] = end;
                    break;
                }

                if(minRoomAvailabletime > room[i]){
                    minRoomAvailabletime = room[i];
                    minAvailableTime = i;
                }
            }

            if(!unusedRoom){
                room[minAvailableTime] += (end - start);
                count[minAvailableTime]++;
            }
        }

        int maxMeetingCount = 0, maxMeetingCountRoom = 0;
        for(int i=0; i<n; i++){
            if(count[i] > maxMeetingCount){
                maxMeetingCount = count[i];
                maxMeetingCountRoom = i;
            }
        }
        return maxMeetingCountRoom;
    }
};