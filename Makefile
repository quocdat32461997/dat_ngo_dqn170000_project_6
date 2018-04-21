#**************************
#Name: Dat Quo cngo
#Email: dqnd170000@utdallas.edu
#Course: CS3377.501
#Dtae: 04/18/2018
#**************************

CXX = g++
CXXFLAGS = 
CPPFLAGS = -Wall -g -I /scratch/perkins/include
LDFLAGS = -L /scratch/perkins/lib
LDLIBS = -l cdk -l curses

PROJECTNAME = CS3377_program_6

EXEC = myprogram6

OBJS = program6.o  parsing_binary_file.o draw_matrix.o

all : $(EXEC)

clean: 
	rm -f $(OBJS) $(EXEC) *.P  *~ \#* 

$(EXEC) : $(OBJS)
	$(CXX) -o $@ $(OBJS) $(LDFLAGS) $(LDLIBS)

backup:
	@make clean
	@mkdir -p ~/backups; chmod 700 ~/backups
	@$(eval CURDIRNAME := $(shell basename "`pwd`"))
	@$(eval MKBKUPNAME := ~/backups/$(PROJECTNAME)-$(shell date +'%Y.%m.%d-%H:%M:%S').tar.gz)
	@echo
	@echo Writing Backup file to: $(MKBKUPNAME)
	@echo
	@-tar zcfv $(MKBKUPNAME) ../$(CURDIRNAME) 2> /dev/null
	@chmod 600 $(MKBKUPNAME)
	@echo
	@echo Done!

