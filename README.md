# Benchmark
Statically encapsulates `<chrono>` to get now() in `ms` for benchmarking.
```C++
// Get the current time in milliseconds.
int64_t ms_now = std::chrono::now<std::chrono::milliseconds>();

// Subtract the start time from the current time to get the elapsed time in milliseconds.
ms_now = std::chrono::now<std::chrono::milliseconds>() - ms_now();
```
