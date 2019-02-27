#include<stdio.h>
struct stack
{
	int *stack;
	int size;
	int top;
}stack_T;
int Init(stack_T *st,int size);
void Deinit(stack_T *st);
int push(stack_T *st,int data);
int pop(stack_T *st);
int peep(stack_T *st);
bool Isfull(stack_T *st);
bool Isempty(stack_T *st);
int Init(stack_T *st,int size)
{
	if(st)
	{
		st->stack=(int*)malloc(size*sizeof(int));
		if(st->stack==NULL)
		return -1;
		st->size=size;
		st->top=-1;
		return 1;
	}
	return -1;
}
void Deinit(stack_T*st)
{
	if(st)
	{
		if(st->stack)
		{
			free(st->stack)
			st->stack=NULL;
			st->top=-1;
			st->size=0;
		}
	}
}
int push(stack_T*st,int data)
{
	if(st && st->stack)
	{
		if(!Isfull(st))
		{
			st->top++;
			st->stack[st->top]=data;
			return 1;
		}
		return 0;
	}	
	return -1;
}
int pop(stack_T*st)
{
	if(st && st->stack)
	{
		if(!Isempty(st))
		{
			int data=st->stack[st->top];
			st->top--;
			return data;
		}
		return 0;
	}
	return -1;
}
int peep(stack_T*st)
{
	if(st && st->stack)
	{
		if(!Isempty(st))
		{
			return st->stack[st->top];
		}
		return 0;
	}
	return -1;
}
bool Isfull(stack_T*st)
{
	return st->top==(st->size-1)
}
bool Isempty(stack_T*st)
{
	return st->top==-1;
}
