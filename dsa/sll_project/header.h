#pragma once
struct list
{
	int data;
	struct list *next;
};
struct list *create_node();
void insert();
void display();
void insert_at_beg();
void insert_at_end();
void insert_at_pos();
void del_at_beg();
void del_at_end();
void del_at_pos();
