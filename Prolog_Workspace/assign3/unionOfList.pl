union([],_,[]).
union([H|Tail],T,R):-
    memberchk(H,T),!,
    union(Tail,T,R).

union([H|Tail],T,R):-
    \+ memberchk(H,T),
	!,
    union(Tail,T, RTail),
    R = [H|RTail].

unionset(X,Y,R):-
    union(X,Y,Z),
    append(Y,Z,R).
