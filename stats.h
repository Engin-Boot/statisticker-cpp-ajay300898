#include <vector>

namespace Statistics {
    class Stats {
    private:
        float average;
        float min;
        float max;
    public:
        Stats();
        Stats(float avg, float min, float max);
    };
    Stats ComputeStatistics(const std::vector<___>& );
}
