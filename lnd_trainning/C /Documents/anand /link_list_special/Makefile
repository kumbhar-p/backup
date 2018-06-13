.PHONY: clean

#vpath = ./header/ : ./obj/ : ./src/
VPATH = ./header/ : ./obj/ : ./src/

INCLUDE = -I ./header/

object = deletion_at_beg.o insertion_at_beg.o link_sort.o list_palindrome.o \
n_node_print.o right_shift.o even_odd_concat.o int_input.o link_swap_2.o \
main.o print.o right_shift_data.o even_odd_list.o left_shift.o link_swap_3.o \
middle_list.o remove_duplicate.o two_third_deletion.o first_last_next.o \
left_shift_data.o link_swap_data.o n_node_delete.o reverse.o left_rotate_link.o\
right_rotate_link.o middle_list_delete.o finding_loop.o insert_loop.o \
remove_loop.o remove_alternate_ele.o penultimate_deletion.o alternate_insertion.o\
nth_node_reverse.o swap_nodes_two.o link_sort_3.o

app: $(object)
	gcc  $^ -o $@
	mv *.o ./obj

%.o: %.c
	gcc -c $^ $(INCLUDE)

clean:
	rm ./obj/*.o app
