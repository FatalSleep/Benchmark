#ifndef BENCHMARK_CHRONO
#define BENCHMARK_CHRONO
	#include <chrono>

	namespace std {
		namespace chrono {
			// Returns the current time for benchmarking as type std::chrono::T.
			template<typename T>
			uint64_t now() {
				return std::chrono::duration_cast<T>
					(std::chrono::high_resolution_clock::now().time_since_epoch()).count();
			}
		}
	};
#endif // !BENCHMARK_CHRONO
