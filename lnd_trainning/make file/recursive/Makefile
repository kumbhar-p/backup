

#subsystem:
#	cd 1subdir && $(MAKE)

#subsysytem:\
	$(MAKE) -C 1subdir

SUBDIRS = 1subdir 2subdir 3subdir

subdirs:
	for dir in $(SUBDIRS); do \
               $(MAKE) -C $$dir; \
               done

