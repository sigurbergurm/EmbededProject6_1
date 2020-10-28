all:
	g++ -o count main.cpp
	g++ -o mult mainin.cpp
	# Röðin skiptir máli output fyrri verður input seinni
clean:
	rm*.o output
	#gcc shared_mem_demo.c -o test -lrt -lpthread