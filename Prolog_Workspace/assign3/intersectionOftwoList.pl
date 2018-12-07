intersect([],_,[]).
intersect([H|Tail],T,R):-
    memberchk(H,T),
    !,
    intersect(Tail,T, RTail),
    R = [H|RTail].
    

intersect([H|Tail],T,R):-
    \+ memberchk(H,T),
	intersect(Tail,T, R).
