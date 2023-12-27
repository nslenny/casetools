lab1: goldbach primes

primes.o: primes.c
	gcc -g -O0 -c primes.c

calculate_primes.o: calculate_primes.c
	gcc -g -O0 -c calculate_primes.c

clean:
	rm -rf *.o lab1 primes goldbach

primesclean:
	rm primes

goldbachclean:
	rm goldbach

goldbach: goldbach.o calculate_primes.o
	gcc -g -O0 -o goldbach goldbach.o calculate_primes.o

goldbach.o: goldbach.c
	gcc -g -O0 -c goldbach.c

primes: primes.o calculate_primes.o
	gcc -g -O0 -o primes primes.o calculate_primes.o

help:
	@echo " "
	@echo "clean - полная очистка"
	@echo " "
	@echo "primesclean - удаление исполняемого файла primes"
	@echo " "
	@echo "goldbachclean - удаление исполняемого файла goldbach"
	@echo " "
	@echo "help - вывод всех имеющихся комманд для исполнения"
	@echo " "
	@echo " "
install:
	chmod +x /home/lenny/PetrSu/2_kurs/RazPO/lab1/primes
	sudo cp /home/lenny/PetrSu/2_kurs/RazPO/lab1/primes /usr/local/bin/