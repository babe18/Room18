.phony: clean stat

CFLAGS = -std=c++11 -Wfatal-errors # -fno-elide-constructors

bin/1_basic_data: src/1_basic_data.cpp
	g++ $(CFLAGS) src/1_basic_data.cpp -o bin/1_basic_data

bin/2_calculation: src/2_calculation.cpp
	g++ $(CFLAGS) src/2_calculation.cpp -o bin/2_calculation

bin/3_if: src/3_if.cpp
	g++ $(CFLAGS) src/3_if.cpp -o bin/3_if

bin/4_switch: src/4_switch.cpp
	g++ $(CFLAGS) src/4_switch.cpp -o bin/4_switch

bin/5_for: src/5_for.cpp
	g++ $(CFLAGS) src/5_for.cpp -o bin/5_for

bin/6_while: src/6_while.cpp
	g++ $(CFLAGS) src/6_while.cpp -o bin/6_while

bin/7_break_continue_goto: src/7_break_continue_goto.cpp
	g++ $(CFLAGS) src/7_break_continue_goto.cpp -o bin/7_break_continue_goto

bin/8_array: src/8_array.cpp
	g++ $(CFLAGS) src/8_array.cpp -o bin/8_array

clean:
	rm -f bin/*

stat:
	wc -l src/* test/*
