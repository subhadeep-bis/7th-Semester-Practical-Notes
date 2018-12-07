sum([],0).
sum([X|T],Sum):-
	sum(T,Sum1),
	Sum is Sum1 + X.