########################################################################
## Makefile for the Cryptography assignment
#  Use:
#       make <filename_without_extension>
#
#  This will create an executable of the same name
#
#######################################################################

# PHONY compilation target
# This allows us to compile with "make <filename>" (where <filename> is the name of the file without the .c extension)
# The use of 'force' causes this to always be compiled
.PHONY: all force

all: %
	
%:
	@echo
	@echo " ERROR: 'make' does not work on this file. Compile it directly with gcc."
	@echo

demo1:
	@cp $(PUBLIC)/PAtest/PA4a/files/demo1 ./ 

demo2:
	@cp $(PUBLIC)/PAtest/PA4a/files/demo2 ./ 

demo3:
	@cp $(PUBLIC)/PAtest/PA4b/files/demo3 ./ 

demo4:
	@cp $(PUBLIC)/PAtest/PA4b/files/demo4 ./ 


	

