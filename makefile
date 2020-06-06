.phony: clean stat

CFLAGS = -std=c++11 -Wfatal-errors # -fno-elide-constructors

bin/1_basic_data: src/1_basic_data.cpp
	g++ $(CFLAGS) src/1_basic_data.cpp -o bin/1_basic_data

bin/2_calculation: src/2_calculation.cpp
	g++ $(CFLAGS) src/2_calculation.cpp -o bin/2_calculation

clean:
	rm -f bin/*

stat:
	wc -l src/* test/*