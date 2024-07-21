#include "stats.h"
#include<algorithm>
#include<numeric>
#include<math.h>

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& vec) {

	Statistics::Stats stat{};
	if (!vec.empty())
	{
		stat.min = *std::min_element(vec.begin(), vec.end());
		stat.max = *std::max_element(vec.begin(), vec.end());
		stat.average = std::accumulate(vec.begin(), vec.end(), 0.0) / vec.size();
	}
	else
	{
		stat.min = NAN;
		stat.max = NAN;
		stat.average = NAN;
	}
	return stat;
}
