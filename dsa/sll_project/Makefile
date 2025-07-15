CC=gcc
all: sll.o create_node.o insert_node.o display_node.o insert_at_beg.o insert_at_end.o insert_at_pos.o del_at_beg.o del_at_end.o del_at_pos.o sll

sll.o:sll.c
	${CC} -c sll.c

create_node.o:create_node.c
	${CC} -c create_node.c

insert_node.o:insert_node.c
	${CC} -c insert_node.c

display_node.o:display_node.c
	${CC} -c display_node.c

insert_at_beg.o:insert_at_beg.c
	${CC} -c insert_at_beg.c

insert_at_end.o:insert_at_end.c
	${CC} -c insert_at_end.c

insert_at_pos.o:insert_at_pos.c
	${CC} -c insert_at_pos.c

del_at_beg.o:del_at_beg.c
	${CC} -c del_at_beg.c

del_at_end.o:del_at_end.c
	${CC} -c del_at_end.c

del_at_pos.o:del_at_pos.c
	${CC} -c del_at_pos.c

sll:sll.o create_node.o insert_node.o display_node.o insert_at_beg.o insert_at_end.o insert_at_pos.o del_at_beg.o del_at_end.o del_at_pos.o
	gcc sll.o create_node.o insert_node.o display_node.o insert_at_beg.o insert_at_end.o insert_at_pos.o del_at_beg.o del_at_end.o del_at_pos.o -o sll

clean:
	rm -rf *.o sll

