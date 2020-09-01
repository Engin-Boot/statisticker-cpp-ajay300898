#include "stats.h"
#include<cmath>


Statistics::Stats::Stats() {}
Statistics::Stats::Stats(float avg, float min, float max) {
    this->average = avg;
    this->max = max;
    this->min = min;
}

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& sample) {
    
    if (sample.size() == 0) {
        return Stats(NAN,NAN,NAN);
    }
    float min = *min_element(sample.begin(), sample.end());
    float max = *max_element(sample.begin(), sample.end());
    float sum = 0;
    for (int i = 0; i < sample.size(); i++) {
        sum += sample[i];
    }
    float avg = sum / sample.size();
    return Statistics::Stats(avg, min, max);
}
