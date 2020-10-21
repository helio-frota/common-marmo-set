Using `Unix Makefiles` generator type:


```
mkdir src build
touch src/CMakeLists.txt
cd build
cmake -G "Unix Makefiles" ../src
```

The environment variable `CMAKE_GENERATOR` can be used instead of `-G` flag.

