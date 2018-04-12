primera: grafica1.png
grafica1.png: RK4.txt
	python graficas1.py
RK4.txt: RK4
	C++ RK4.cpp -o RK4
	./RK4 > RK4.txt
segunda: grafica2.png
grafica2.png: RK4_2.txt
		python graficas2.py
RK4_2.txt: RK4_2
		C++ RK4_2.cpp -o RK4_2
		./RK4_2 > _RK42.txt
