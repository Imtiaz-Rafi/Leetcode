class SeatManager {
    priority_queue<int, vector<int>, greater<int>> seat;
public:
    SeatManager(int n) {
        for(int i=1;i<=n;i++){
            seat.push(i);
        }
    }
    
    int reserve() {
        int seatNumber = seat.top();
        seat.pop();
        return seatNumber;
        
    }
    
    void unreserve(int seatNumber) {
        seat.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */