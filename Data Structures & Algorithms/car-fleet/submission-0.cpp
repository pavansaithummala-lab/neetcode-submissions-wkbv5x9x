class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        if (n == 0){
            return 0;
        }

        vector<pair<int, double>> cars(n);
        for (int i = 0; i < n; ++i) {
            double time_to_target = static_cast<double>(target - position[i]) / speed[i];
            cars[i] = {position[i], time_to_target};
        }

        sort(cars.begin(), cars.end());

        int fleets = 0;
        double max_time_in_fleet = 0.0;

        for (int i = n - 1; i >= 0; --i) {
            if (cars[i].second > max_time_in_fleet) {
                fleets++;
                max_time_in_fleet = cars[i].second;
            }
        }

        return fleets;
    }
};
