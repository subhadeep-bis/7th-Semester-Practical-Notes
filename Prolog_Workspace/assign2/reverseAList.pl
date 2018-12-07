revL([],X,X).
revL([H|T],X,L) :- revL(T,X,[H|L]).
