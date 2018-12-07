subset([],[]):- writeln("Subset").
subset([],_):- writeln("Subset").
subset([H|Tail],T):-
    memberchk(H,T),
    subset(Tail,T).
subset([H|_],T):-
    \+ memberchk(H,T),
	!, writeln("Not Subset").
