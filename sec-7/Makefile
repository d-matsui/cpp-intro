gcc_options = -std=c++17 -Wall --pedantic-error

program : main.cpp all.h all.h.gch
	g++ $(gcc_options) -include all.h -o $@ $<

all.h.gch : all.h
	g++ $(gcc_options) -x c++-header -o $@ $<

run : program
	./program

# PHONY ターゲット
clean :
	rm -f ./program
	rm -f ./all.h.gch

# PHONY ターゲットを .PHONY ターゲットの事前要件とすることで、
# ターゲットと同じファイル名 (ここでは、clean) の存在の有無に関わらず、
# ルールを実行させられる。
.PHONY : clean
