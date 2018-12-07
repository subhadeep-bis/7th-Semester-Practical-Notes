length([],0).

length([X|T], L):-
	length(T, Count),
	L is Count+1.
	