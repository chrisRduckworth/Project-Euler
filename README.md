Requires Google Test 7c07a863693b0c831f80473f7c6905d7e458682c to be in the project rood folder

To create the files for a new problem run `python3 generate_files.py <challenge_name>`. To run tests (from the challenge directory), 

```cmake build -DTEST=ON && cmake --build build && ./build/<challenge_number>_test```

To run the main file

```cmake build && cmake --build build && ./build/<challenge_number>```

NB - if you are running the same as last time (eg you just tested and want to run again) you can exclude the first `cmake` command.
