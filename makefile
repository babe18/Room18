.phony: clean stat

CFLAGS = -std=c++11 -Wfatal-errors # -fno-elide-constructors

bin/basic_data_1: src/basic_data_1.cpp
	g++ $(CFLAGS) src/basic_data_1.cpp -o bin/basic_data_1

bin/

clean:
	rm -f bin/*

stat:
	wc -l src/* test/*